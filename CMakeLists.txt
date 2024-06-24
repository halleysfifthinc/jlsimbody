cmake_minimum_required(VERSION 3.24)
project(jlSimbody VERSION 0.1.0)

set(JLSIMBODY_CXXWRAPJL_VERSION
  "0.16" CACHE STRING
  "Target CxxWrap.jl version (implicitly sets libcxxwrap-julia version)"
  )

# From google/bloaty
# When using Ninja, compiler output won't be colorized without this.
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG(-fdiagnostics-color=always SUPPORTS_COLOR_ALWAYS)
if(SUPPORTS_COLOR_ALWAYS)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdiagnostics-color=always")
endif()

if(${CMAKE_CXX_COMPILER_ID} MATCHES "Clang" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9)
  message(FATAL_ERROR "jlSimbody requires Clang-9 or later")
  # needed for -ffile-prefix-map
endif()

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

# Detect if building in BinaryBuilder or dev'ed on a local machine
if(NOT DEFINED ENV{bb_full_target})
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Not needed in BinaryBuilder

  find_program(JULIA_EXECUTABLE julia REQUIRED)
  if(DEFINED JULIA_EXECUTABLE)
    execute_process(COMMAND
      ${JULIA_EXECUTABLE} --project=@. -e "using Pkg; Pkg.add(name=\"CxxWrap\", version=\"${JLSIMBODY_CXXWRAPJL_VERSION}\"); using CxxWrap; print(CxxWrap.prefix_path())"
      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
      OUTPUT_VARIABLE JLCXX_PREFIX_PATH
      )

    execute_process(COMMAND 
      ${JULIA_EXECUTABLE} --project=@. -e "using libblastrampoline_jll; print(libblastrampoline_jll.get_libblastrampoline_path())"
      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
      OUTPUT_VARIABLE BLASTRAMPOLINE_PATH
      )
    cmake_path(NORMAL_PATH BLASTRAMPOLINE_PATH)
    set(BUILD_USING_OTHER_LAPACK ${BLASTRAMPOLINE_PATH} CACHE BOOL "")
  endif()
  
  find_package(Patch)
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
  FIND_PACKAGE_ARGS 3.8
  )

FetchContent_MakeAvailable(Simbody)

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
  src/jlsimbody/Body.cxx
  src/jlsimbody/SimbodyMatterSubsystem.cxx
  src/jlsimbody/DecorationSubsystem.cxx
  src/jlsimbody/ContactTrackerSubsystem.cxx
  src/jlsimbody/CableTrackerSubsystem.cxx
  src/jlsimbody/Force.cxx
  src/jlsimbody/ForceSubsystems.cxx
  src/jlsimbody/MultibodySystem.cxx
  src/jlsimbody/MobilizedBodies.cxx
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
  include/jlsimbody/Assembler_and_related.h
  include/jlsimbody/Body.h
  include/jlsimbody/CableTrackerSubsystem.h
  include/jlsimbody/ContactTrackerSubsystem.h
  include/jlsimbody/DecorationSubsystem.h
  include/jlsimbody/Force.h
  include/jlsimbody/ForceSubsystems.h
  include/jlsimbody/MultibodySystem.h
  include/jlsimbody/SimbodyMatterSubsystem.h
)

list(SORT CXX_FILES)
list(SORT HEADER_FILES)

# set(CMAKE_CXX_VISIBILITY_PRESET hidden)
# set(CMAKE_VISIBILITY_INLINES_HIDDEN 1)

add_library(jlsimbody SHARED
  ${CXX_FILES} ${HEADER_FILES})

target_precompile_headers(jlsimbody PRIVATE
  include/jlsimbody/common.h
  )

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

target_compile_options(jlsimbody
  PRIVATE
    -no-canonical-prefixes
    -gno-record-gcc-switches
    -fno-record-gcc-switches
    -ffile-prefix-map=${CMAKE_CURRENT_SOURCE_DIR}=jlsimbody
    -Wno-builtin-macro-redefined
    -Wdate-time
  )

target_compile_definitions(jlsimbody PRIVATE 
  $<$<CONFIG:DEBUG>:VERBOSE_IMPORT>)

target_link_libraries(jlsimbody PUBLIC
  Simbody::SimTKcommon Simbody::SimTKmath Simbody::SimTKsimbody
  JlCxx::cxxwrap_julia JlCxx::cxxwrap_julia_stl)

# target_link_options(jlsimbody PRIVATE
#   # --for-linker=--compress-debug-sections=zstd
#   # --for-linker=-flto
#   --for-linker=--gc-sections
#   --for-linker=--icf=safe
# )

include(GNUInstallDirs)

install(TARGETS jlsimbody
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES
  ${CMAKE_CURRENT_BINARY_DIR}/jlsimbody_export.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  )
