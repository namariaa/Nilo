cmake_minimum_required(VERSION 3.30)

project(SimpleLanguage LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (NOT CMAKE_BUILD_TYPE)
  message(STATUS "No build type selected, defaulting to Release")
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
endif()

option(ANTLR_BUILD_CPP_TESTS "Build C++ tests for ANTLR4." OFF)
option(TRACE_ATN "Trace ATN simulation" OFF)
option(ANTLR_BUILD_SHARED "Build the shared library of the ANTLR runtime" OFF)
option(ANTLR_BUILD_STATIC "Build the static library of the ANTLR runtime" ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/antlr4-cpp-runtime-4.13.2-source ${CMAKE_CURRENT_BINARY_DIR}/antlr4-cpp-runtime-4.13.2-souce EXCLUDE_FROM_ALL)

# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/debug/antlr4-cpp-runtime-4.13.2-bin ${CMAKE_CURRENT_BINARY_DIR}/bin )