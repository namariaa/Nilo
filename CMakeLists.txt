cmake_minimum_required(VERSION 3.30)
project(Nilocript LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Build type padrão
if(NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type selected, defaulting to Release")
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
endif()

# Flags estáticas (não em macOS)
if(NOT APPLE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
endif()

# Configurações do ANTLR runtime
option(ANTLR_BUILD_CPP_TESTS "Build C++ tests for ANTLR4." OFF)
option(TRACE_ATN "Trace ATN simulation" OFF)
option(ANTLR_BUILD_SHARED "Build the shared library of the ANTLR runtime" OFF)
option(ANTLR_BUILD_STATIC "Build the static library of the ANTLR runtime" ON)

# ===========================================================
# SUPORTE A DIFERENTES VERSÕES DO RUNTIME DO ANTLR (4.13.2+)
# ===========================================================
set(ANTLR_RUNTIME_DIR "" CACHE PATH "Path to ANTLR4 C++ runtime source directory")

if(NOT ANTLR_RUNTIME_DIR)
    set(ANTLR_RUNTIME_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/antlr4-cpp-runtime-4.13.2-source")
endif()

message(STATUS "Using ANTLR runtime from: ${ANTLR_RUNTIME_DIR}")

add_subdirectory(
    ${ANTLR_RUNTIME_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}/antlr4-cpp-runtime-bin
    EXCLUDE_FROM_ALL
)

# ===========================================================
# SUPORTE AO LLVM 19 OU MAIOR
# ===========================================================
find_package(LLVM REQUIRED CONFIG)

if (LLVM_PACKAGE_VERSION VERSION_LESS 19.0.0)
    message(FATAL_ERROR "LLVM 19 or newer is required, but found ${LLVM_PACKAGE_VERSION}")
endif()

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Inclui os headers e macros do LLVM
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

# Define os arquivos fontes do seu projeto
file(GLOB SOURCES
    src/Main.cpp
    src/antlr/NiloScript*.cpp  
)

# Cria o executável a partir dos fontes
add_executable(ns ${SOURCES})

# Linka com o ANTLR runtime estático
target_link_libraries(ns PRIVATE antlr4_static)

# Linka com os componentes do LLVM
llvm_map_components_to_libnames(LLVM_LIBS
    core
    support
    irreader
    passes
    native         # gera código nativo (x86/ARM/etc)
)

target_link_libraries(ns PRIVATE ${LLVM_LIBS})

# Define onde o executável final será colocado
set_target_properties(ns PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/execute
)