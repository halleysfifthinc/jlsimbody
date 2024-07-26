cmake_minimum_required(VERSION 3.24)
project(jlSimbody VERSION 0.1.0)

set(JLSIMBODY_CXXWRAPJL_VERSION
  "0.16" CACHE STRING
  "Target CxxWrap.jl version (implicitly sets libcxxwrap-julia version)"
  )

option(JLSIMBODY_USE_SIMBODY_JLL "Use Simbody_jll if installed" ON)

option(JLSIMBODY_DEV "Build jlsimbody to develop locally" OFF)

include(CMakeDependentOption)
cmake_dependent_option(JLSIMBODY_LINKER_TYPE "Specify a different linker than the compiler default"
  "DEFAULT" "CMAKE_VERSION VERSION_GREATER_EQUAL 3.29" "")

if(JLSIMBODY_LINKER_TYPE AND ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" AND "${CMAKE_CXX_COMPILER_VERSION}" VERSION_GREATER_EQUAL 12))
  set(CMAKE_LINKER_TYPE ${JLSIMBODY_LINKER_TYPE})
endif()

cmake_dependent_option(JLSIMBODY_USE_IWYU "Use include-what-you-use" OFF
  "JLSIMBODY_DEV" OFF)

# From google/bloaty
# When using Ninja, compiler output won't be colorized without this.
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG(-fdiagnostics-color=always SUPPORTS_COLOR_ALWAYS)
if(SUPPORTS_COLOR_ALWAYS)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdiagnostics-color=always")
endif()

if(${CMAKE_CXX_COMPILER_ID} MATCHES "Clang" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9)
  message(FATAL_ERROR "jlSimbody requires Clang-9 or later")
  # needed for -ffile-prefix-map, -ftime-trace
endif()

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

# Detect if building in BinaryBuilder or dev'ed on a local machine
if(NOT DEFINED ENV{bb_full_target})
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Not needed in BinaryBuilder

  if(NOT DEFINED CACHE{JULIA_EXECUTABLE})
    find_program(JULIA_EXECUTABLE julia REQUIRED)
    execute_process(COMMAND ${JULIA_EXECUTABLE} --startup-file=no -e "print(VERSION)" OUTPUT_VARIABLE JULIA_VERSION_INTERNAL)
  endif()
  if(DEFINED JULIA_EXECUTABLE)
    file(SHA256 "${CMAKE_CURRENT_SOURCE_DIR}/Manifest.toml" MANIFEST_CHECKSUM)
    # Cache the CxxWrap.jl version to avoid checking on reconfigure if JLSIMBODY_CXXWRAPJL_VERSION hasn't changed
    if(NOT "${JULIA_VERSION_INTERNAL}" STREQUAL "$CACHE{JULIA_VERSION_INTERNAL}" OR
      NOT "${MANIFEST_CHECKSUM}" STREQUAL "$CACHE{MANIFEST_CHECKSUM}" OR
      NOT "${JLSIMBODY_CXXWRAPJL_VERSION}" STREQUAL "${JLSIMBODY_CXXWRAPJL_VERSION_INTERNAL}")
      message(STATUS "Checking for CxxWrap.jl v${JLSIMBODY_CXXWRAPJL_VERSION}")
      execute_process(COMMAND
        ${JULIA_EXECUTABLE} --startup-file=no --project=@. -e "using Pkg; Pkg.add(name=\"CxxWrap\", version=\"${JLSIMBODY_CXXWRAPJL_VERSION}\"); using CxxWrap; print(CxxWrap.prefix_path())"
        ERROR_QUIET
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        OUTPUT_VARIABLE JLCXX_PREFIX_PATH
        )
      set(JLSIMBODY_CXXWRAPJL_VERSION_INTERNAL ${JLSIMBODY_CXXWRAPJL_VERSION} CACHE INTERNAL "")
    endif()

    if(JLSIMBODY_USE_SIMBODY_JLL)
      # Set the prefix path to Simbody_jll if installed (otherwise Simbody will be built as a subproject)
      file(SHA256 "${CMAKE_CURRENT_SOURCE_DIR}/scripts/check_simbody_jll.jl" CHECK_SIMBODY_JLL_CHECKSUM)
      if(NOT "${JULIA_VERSION_INTERNAL}" STREQUAL "$CACHE{JULIA_VERSION_INTERNAL}" OR
          NOT "${MANIFEST_CHECKSUM}" STREQUAL "$CACHE{MANIFEST_CHECKSUM}" OR
          NOT "${CHECK_SIMBODY_JLL_CHECKSUM}" STREQUAL "$CACHE{CHECK_SIMBODY_JLL_CHECKSUM}")
        message(STATUS "Checking for Simbody_jll")
        execute_process(COMMAND
          ${JULIA_EXECUTABLE} --startup-file=no --project=@. --load ${CMAKE_CURRENT_SOURCE_DIR}/scripts/check_simbody_jll.jl
          WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
          OUTPUT_VARIABLE SIMBODY_JLL_PREFIX_PATH
          RESULTS_VARIABLE SIMBODY_JLL_PREFIX_PATH_RETURN_CODE
          )
        if(SIMBODY_JLL_PREFIX_PATH_RETURN_CODE EQUAL 1)
          message(STATUS "Simbody_jll not found, building Simbody from source")
          set(SIMBODY_JLL_PREFIX_PATH)
        endif()
        set(CHECK_SIMBODY_JLL_CHECKSUM ${CHECK_SIMBODY_JLL_CHECKSUM} CACHE INTERNAL "")
      endif()
    endif()

    if(NOT "${JULIA_VERSION_INTERNAL}" STREQUAL "$CACHE{JULIA_VERSION_INTERNAL}" OR
        NOT "${MANIFEST_CHECKSUM}" STREQUAL "$CACHE{MANIFEST_CHECKSUM}")
      message(STATUS "Checking for libblastrampoline_jll")
      execute_process(COMMAND
        ${JULIA_EXECUTABLE} --startup-file=no --project=@. -e "using libblastrampoline_jll; print(libblastrampoline_jll.get_libblastrampoline_path())"
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        OUTPUT_VARIABLE BLASTRAMPOLINE_PATH
        )
      cmake_path(NORMAL_PATH BLASTRAMPOLINE_PATH)
      set(BLASTRAMPOLINE_PATH ${BLASTRAMPOLINE_PATH} CACHE INTERNAL "")
      set(BUILD_USING_OTHER_LAPACK ${BLASTRAMPOLINE_PATH} CACHE BOOL "")
    endif()

    set(JULIA_VERSION_INTERNAL ${JULIA_VERSION_INTERNAL} CACHE INTERNAL "")
    set(MANIFEST_CHECKSUM ${MANIFEST_CHECKSUM} CACHE INTERNAL "")
  endif()

  find_package(Patch QUIET)

  if("${JLSIMBODY_USE_IWYU}")
    find_program(IWYU_EXECUTABLE NAMES include-what-you-use iwyu)
  endif()
  if(DEFINED IWYU_EXECUTABLE) # Assume the user wants to use IWYU if the executable path has been manually set
    set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE "${IWYU_EXECUTABLE};-Xiwyu;--cxx17ns;-Xiwyu;--verbose=4")
    message(STATUS "Found include-what-you-use at ${IWYU_EXECUTABLE}")
  endif()
endif()

find_package(JlCxx QUIET REQUIRED
  HINTS ${JLCXX_PREFIX_PATH})
get_target_property(JlCxx_location JlCxx::cxxwrap_julia LOCATION)
get_filename_component(JlCxx_location ${JlCxx_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${JlCxx_location}")

message(STATUS "Found JlCxx@v${JlCxx_VERSION} at ${JlCxx_location}")

include(FetchContent)

# internal apparently doesn't work
set(BUILD_VISUALIZER OFF CACHE BOOL "" FORCE)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(INSTALL_DOCS OFF CACHE BOOL "" FORCE)
set(BUILD_TESTING OFF CACHE BOOL "" FORCE)
set(WINDOWS_USE_EXTERNAL_LIBS ON CACHE BOOL "" FORCE)
FetchContent_Declare(Simbody
  GIT_REPOSITORY https://github.com/halleysfifthinc/simbody
  GIT_TAG 672da64c7224900fdf962578ac723a10a4e1fd21
  GIT_SHALLOW TRUE
  PATCH_COMMAND ${Patch_EXECUTABLE} -p1 --forward --posix --silent < ${CMAKE_CURRENT_SOURCE_DIR}/patches/current_dir.patch || true
  SYSTEM
  FIND_PACKAGE_ARGS 3.8 HINTS ${SIMBODY_JLL_PREFIX_PATH}
  )

FetchContent_MakeAvailable(Simbody)
if(DEFINED Simbody_SOURCE_DIR)
  message(STATUS "Building Simbody from source at ${Simbody_SOURCE_DIR}")
elseif(DEFINED Simbody_DIR AND EXISTS ${Simbody_DIR})
  message(STATUS "Found Simbody_jll@v${Simbody_VERSION} at ${Simbody_DIR}")
endif()

if(TARGET SimTKcommon AND NOT TARGET Simbody::SimTKcommon)
  add_library(Simbody::SimTKcommon ALIAS SimTKcommon)
endif()
if(TARGET SimTKmath AND NOT TARGET Simbody::SimTKmath)
  add_library(Simbody::SimTKmath ALIAS SimTKmath)
endif()
if(TARGET SimTKsimbody AND NOT TARGET Simbody::SimTKsimbody)
  add_library(Simbody::SimTKsimbody ALIAS SimTKsimbody)
endif()

set(CXX_FILES
  src/jlSimTKcommon/Row.cxx
  src/jlSimTKcommon/Vec.cxx
  src/jlSimTKcommon/Mat.cxx
  src/jlSimTKcommon/MatrixVector.cxx
  src/jlSimTKcommon/CoordinateAxis.cxx
  src/jlSimTKcommon/UnitVec.cxx
  src/jlSimTKcommon/Orientations.cxx
  src/jlSimTKcommon/Transform.cxx
  src/jlSimTKcommon/SpatialAlgebra.cxx
  src/jlSimTKcommon/MassProperties.cxx
  src/jlSimTKcommon/Decorations.cxx
  src/jlSimTKcommon/Stage.cxx
  src/jlSimTKcommon/State.cxx
  src/jlSimTKcommon/Events.cxx
  src/jlSimTKcommon/SystemSubsystem.cxx
  src/jlSimTKcommon/Measure.cxx
  src/jlSimTKcommon/String.cxx
  src/jlSimTKcommon/Function.cxx
  src/jlSimTKcommon/DecorationGenerator.cxx
  src/jlsimmath/Geo.cxx
  src/jlsimmath/Contact_related.cxx
  src/jlsimmath/Timestepper_and_Integrators.cxx
  src/jlsimmath/CPodesIntegrator.cxx
  src/jlsimmath/ExplicitEulerIntegrator.cxx
  src/jlsimmath/Integrator.cxx
  src/jlsimmath/RungeKutta2Integrator.cxx
  src/jlsimmath/RungeKutta3Integrator.cxx
  src/jlsimmath/RungeKuttaFeldbergIntegrator.cxx
  src/jlsimmath/RungeKuttaMersonIntegrator.cxx
  src/jlsimmath/SemiExplicitEuler2Integrator.cxx
  src/jlsimmath/SemiExplicitEulerIntegrator.cxx
  src/jlsimmath/TimeStepper.cxx
  src/jlsimmath/VerletIntegrator.cxx
  src/jlsimmath/Optimizers.cxx
  src/jlsimbody/Body.cxx
  src/jlsimbody/SimbodyMatterSubsystem.cxx
  src/jlsimbody/DecorationSubsystem.cxx
  src/jlsimbody/ContactTrackerSubsystem.cxx
  src/jlsimbody/CableTrackerSubsystem.cxx
  src/jlsimbody/Force.cxx
  src/jlsimbody/ForceSubsystems.cxx
  src/jlsimbody/MultibodySystem.cxx
  src/jlsimbody/MobilizedBodies.cxx
  src/jlsimbody/TextDataEventReporter.cxx
  src/jlsimbody/TextDataEventReporter_JuliaUserFunction.cxx
  src/jlsimbody/Assembler_and_related.cxx
  src/jlsimbody.cxx)

set(HEADER_FILES
  include/jlsimbody/common.h
  include/jlSimTKcommon/Array.h
  include/jlSimTKcommon/CoordinateAxis.h
  include/jlSimTKcommon/DecorationGenerator.h
  include/jlSimTKcommon/Decorations.h
  include/jlSimTKcommon/Events.h
  include/jlSimTKcommon/Function.h
  include/jlSimTKcommon/MassProperties.h
  include/jlSimTKcommon/Mat.h
  include/jlSimTKcommon/MatrixVector.h
  include/jlSimTKcommon/Measure.h
  include/jlSimTKcommon/Orientations.h
  include/jlSimTKcommon/Row.h
  include/jlSimTKcommon/SimTK_UniqueIndex.h
  include/jlSimTKcommon/SpatialAlgebra.h
  include/jlSimTKcommon/Stage.h
  include/jlSimTKcommon/State.h
  include/jlSimTKcommon/SystemSubsystem.h
  include/jlSimTKcommon/String.h
  include/jlSimTKcommon/Transform.h
  include/jlSimTKcommon/UnitVec.h
  include/jlSimTKcommon/Vec.h
  include/jlsimmath/Geo.h
  include/jlsimmath/Contact_related.h
  include/jlsimmath/Timestepper_and_Integrators.h
  include/jlsimmath/Optimizers.h
  include/jlsimbody/Assembler_and_related.h
  include/jlsimbody/Body.h
  include/jlsimbody/CableTrackerSubsystem.h
  include/jlsimbody/ContactTrackerSubsystem.h
  include/jlsimbody/DecorationSubsystem.h
  include/jlsimbody/Force.h
  include/jlsimbody/ForceSubsystems.h
  include/jlsimbody/MultibodySystem.h
  include/jlsimbody/MobilizedBodies.h
  include/jlsimbody/SimbodyMatterSubsystem.h
  include/jlsimbody/TextDataEventReporter.h
)

list(SORT CXX_FILES)
list(SORT HEADER_FILES)

# foreach(_file ${LIB_SOURCES})
#     file(SHA1 ${_file} checksum)
#     string(SUBSTRING ${checksum} 0 8 checksum)
#     set_source_files_properties(${_file} PROPERTIES
#       COMPILE_FLAGS
#         "-frandom-seed=0x${checksum}"
#       COMPILE_DEFINITIONS
#         "__FILE__=\"${_file}\"" # ${_file} is already relative to CMAKE_CURRENT_SOURCE_DIR
#         )
#     set_property()
# endforeach()

add_library(jlsimbody SHARED
  ${CXX_FILES} ${HEADER_FILES})

# include-what-you-use isn't compatible with precompiled headers
if(NOT DEFINED CMAKE_CXX_INCLUDE_WHAT_YOU_USE)
  target_precompile_headers(jlsimbody PRIVATE
    include/jlsimbody/common.h
    )
endif()

target_include_directories(jlsimbody PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>)

include(GenerateExportHeader)
generate_export_header(jlsimbody)

target_compile_features(jlsimbody
  PUBLIC cxx_std_20
  PRIVATE cxx_generic_lambdas
  )

set_target_properties(jlsimbody PROPERTIES
  CXX_VISIBILITY_PRESET default # TODO: Change to hidden once jlcxxwrap#168 is fixed (saves 11Mb on the .so)
  VISIBILITY_INLINES_HIDDEN 1
  )

set(gen_jlsimbody_is_dev "$<BOOL:${JLSIMBODY_DEV}>")
set(is_clang "$<CXX_COMPILER_ID:Clang>")

target_compile_options(jlsimbody
  PRIVATE
    -fdata-sections
    -no-canonical-prefixes
    -gno-record-gcc-switches
    -fno-record-gcc-switches
    -ffile-prefix-map=${CMAKE_CURRENT_SOURCE_DIR}=jlsimbody
    -Wno-builtin-macro-redefined
    -Wdate-time
    $<$<AND:${is_clang},${gen_jlsimbody_is_dev}>:-ftime-trace>
    $<${gen_jlsimbody_is_dev}:-O1>
    $<$<CONFIG:RelWithDebInfo>:-g1;$<${is_clang}:-gline-tables-only>>
    $<$<CONFIG:DEBUG>:-Og>
  )

target_compile_definitions(jlsimbody PRIVATE
  $<$<CONFIG:DEBUG>:VERBOSE_IMPORT>)

target_link_libraries(jlsimbody PUBLIC
  Simbody::SimTKcommon Simbody::SimTKmath Simbody::SimTKsimbody
  JlCxx::cxxwrap_julia JlCxx::cxxwrap_julia_stl)

if(NOT DEFINED ENV{bb_full_target} AND NOT DEFINED Simbody_SOURCE_DIR) # using Simbody_jll
  cmake_path(GET BLASTRAMPOLINE_PATH PARENT_PATH BLASTRAMPOLINE_DIR)
  target_link_directories(jlsimbody PRIVATE
    ${BLASTRAMPOLINE_DIR})
endif()

set(linker_is_mold "$<STREQUAL:${CMAKE_LINKER_TYPE},MOLD>")
target_link_options(jlsimbody PRIVATE
  --for-linker=--compress-debug-sections=$<IF:${linker_is_mold},zstd,zlib> # GNU ld doesn't support zstd
  --for-linker=-flto
  --for-linker=--gc-sections
  $<$<AND:${is_clang},${linker_is_mold}>:--for-linker=--icf=safe> # --icf not recognized by GNU ld; icf=safe needs an LLVM compiler
  # $<${gen_jlsimbody_is_dev}:--for-linker=--print-gc-sections>
  # $<$<AND:${gen_jlsimbody_is_dev},${is_clang},${linker_is_mold}>:--for-linker=--print-icf-sections> # --icf not recognized by GNU ld
)

include(GNUInstallDirs)

install(TARGETS jlsimbody
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES
  ${CMAKE_CURRENT_BINARY_DIR}/jlsimbody_export.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  )

if(NOT DEFINED ENV{bb_full_target})
  add_custom_command(TARGET jlsimbody POST_BUILD
    COMMAND ${JULIA_EXECUTABLE} --startup-file=no --project=@. ${CMAKE_CURRENT_SOURCE_DIR}/scripts/override.jl ${CMAKE_CURRENT_BINARY_DIR} override
    BYPRODUCTS ${CMAKE_CURRENT_BINARY_DIR}/jlsimbody_override
    VERBATIM)

  add_custom_target(override
    COMMAND ${JULIA_EXECUTABLE} --startup-file=no --project=@. ${CMAKE_CURRENT_SOURCE_DIR}/scripts/override.jl ${CMAKE_CURRENT_BINARY_DIR} override
    VERBATIM)

  add_custom_target(unoverride
    COMMAND ${JULIA_EXECUTABLE} --startup-file=no --project=@. ${CMAKE_CURRENT_SOURCE_DIR}/scripts/override.jl ${CMAKE_CURRENT_BINARY_DIR} unoverride
    VERBATIM)
endif()
