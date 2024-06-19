cmake_minimum_required(VERSION 3.24)
project(jlopensim VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

# Detect if building in BinaryBuilder or dev'ed on a local machine
if(NOT DEFINED ENV{bb_full_target})
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Not needed in BinaryBuilder

  find_program(JULIA_EXECUTABLE julia REQUIRED)
  if(DEFINED JULIA_EXECUTABLE)
    execute_process(COMMAND ${JULIA_EXECUTABLE} --project=@. -e "using CxxWrap; print(CxxWrap.prefix_path())"
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

find_package(JlCxx 0.13...<0.14 QUIET REQUIRED
  HINTS ${JLCXX_PREFIX_PATH})
get_target_property(JlCxx_location JlCxx::cxxwrap_julia LOCATION)
get_filename_component(JlCxx_location ${JlCxx_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${JlCxx_location}")

message(STATUS "Found JlCxx at ${JlCxx_location}")

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

add_library(jlsimbody SHARED
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

target_precompile_headers(jlsimbody PRIVATE
  include/jlsimbody/common.h
  )

target_include_directories(jlsimbody PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_features(jlsimbody PRIVATE cxx_generic_lambdas)

target_compile_options(jlsimbody PRIVATE -fvisibility=hidden -Wno-c++20-extensions)

target_compile_definitions(jlsimbody PRIVATE 
  $<$<CONFIG:DEBUG>:VERBOSE_IMPORT>)

target_link_libraries(jlsimbody PUBLIC
  Simbody::SimTKcommon Simbody::SimTKmath Simbody::SimTKsimbody
  JlCxx::cxxwrap_julia JlCxx::cxxwrap_julia_stl)

target_link_options(jlsimbody PRIVATE
  # --for-linker=--compress-debug-sections=zstd
  --for-linker=-flto
  --for-linker=--gc-sections
  --for-linker=--icf=safe
)

include(GNUInstallDirs)

install(TARGETS jlsimbody
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
