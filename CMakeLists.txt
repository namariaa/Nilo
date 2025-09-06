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
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")
endif()

# Configurações do ANTLR runtime
option(ANTLR_BUILD_CPP_TESTS "Build C++ tests for ANTLR4." OFF)
option(TRACE_ATN "Trace ATN simulation" OFF)
option(ANTLR_BUILD_SHARED "Build the shared library of the ANTLR runtime" OFF)
option(ANTLR_BUILD_STATIC "Build the static library of the ANTLR runtime" ON)

# Adiciona o runtime do ANTLR (subdiretório dentro de src)
add_subdirectory(src/antlr4-cpp-runtime-4.13.2-source
                 ${CMAKE_CURRENT_BINARY_DIR}/antlr4-cpp-runtime-4.13.2-bin
                 EXCLUDE_FROM_ALL)

# Define os arquivos fontes do seu projeto
file(GLOB SOURCES
    src/Main.cpp
    src/antlr/NiloScript*.cpp  
)

# Cria o executável
add_executable(sl ${SOURCES})

# Linka com o ANTLR runtime estático
target_link_libraries(sl PRIVATE antlr4_static)

# Define onde os executáveis finais vão ficar
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/execute)

# Instalação (opcional)
install(TARGETS sl
    RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/src/execute
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

# Caso queira adicionar includes adicionais, descomente e ajuste
# target_include_directories(sl PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
