cmake_minimum_required(VERSION 3.21)
project(jlopensim VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

find_package(Simbody REQUIRED)
find_package(OpenSim REQUIRED)

find_package(JlCxx REQUIRED)
get_target_property(JlCxx_location JlCxx::cxxwrap_julia LOCATION)
get_filename_component(JlCxx_location ${JlCxx_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${JlCxx_location}")

message(STATUS "Found JlCxx at ${JlCxx_location}")

# include_directories(${OpenSim_INCLUDE_DIRS})

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
  src/jlsimmath/Geo.cxx
  src/jlsimmath/Contact_related.cxx
  src/jlsimbody.cxx)

target_include_directories(jlsimbody PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_features(jlsimbody PRIVATE cxx_std_20 cxx_generic_lambdas)

target_compile_definitions(jlsimbody PRIVATE 
  $<$<CONFIG:DEBUG>:VERBOSE_IMPORT>)

target_link_options(jlsimbody PRIVATE
  --for-linker=--compress-debug-sections=zstd
  --for-linker=-flto
  --for-linker=--gc-sections
  --for-linker=--icf=safe
)

target_link_libraries(jlsimbody SimTKcommon SimTKmath SimTKsimbody JlCxx::cxxwrap_julia JlCxx::cxxwrap_julia_stl)

include(GNUInstallDirs)

install(TARGETS jlsimbody
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
