cmake_minimum_required(VERSION 3.21)
project(jlopensim VERSION 0.1.0)

set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

find_package(OpenSim REQUIRED)

find_package(JlCxx REQUIRED)
get_target_property(JlCxx_location JlCxx::cxxwrap_julia LOCATION)
get_filename_component(JlCxx_location ${JlCxx_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${JlCxx_location}")

message(STATUS "Found JlCxx at ${JlCxx_location}")

include_directories(${OpenSim_INCLUDE_DIRS})

add_library(jlopensim SHARED src/jlopensim.cpp)
target_link_libraries(jlopensim osimCommon osimSimulation osimActuators osimAnalyses osimTools osimExampleComponents JlCxx::cxxwrap_julia JlCxx::cxxwrap_julia_stl)

install(TARGETS
  jlopensim
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib
RUNTIME DESTINATION lib)
