cmake_minimum_required(VERSION 3.5.0)
Project(NiloScript)
set (CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp)

#Configurações que segui da documentação para o antlr

#Usa biblioteca estática ele é bom para ambientes que não tem o antlr instalado mas cria um runtime pesado
add_definitions(-DANTLR4CPP_STATIC)

#Definindo a versão do ANTLR que estou usando
set(ANTLR4_TAG 4.9.2)
set(ANTLR4_ZIP_REPOSITORY https://github.com/antlr/antlr4/archive/refs/tags/4.9.2.zip)

#Por que o arquivo ExternalAntlr4Cpp tá em um diretório diferente 
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/antlr)

#Importa o ExternalAntlr4Cpp.cmake que sabe como baixar, configurar e compilar ANTLR em c++
include(${CMAKE_CURRENT_SOURCE_DIR}/antlr/ExternalAntlr4Cpp.cmake)

#Inclui no projeto os diretórios com os headers da runtime do ANTLR
include_directories(${ANTLR4_INCLUDE_DIRS})

#Informa onde está o jar do ANTLR4 é usado pelo antlr para gerar os .cpp e .h
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/antlr/antlr-4.9.2-complete.jar)

#Marca o ANTLR como dependência obrigatória.
include(${CMAKE_CURRENT_SOURCE_DIR}/antlr/FindANTLR.cmake)

#Gera o lexer e parser a partir da gramática do Nilo
antlr_target(NiloScript NiloScript.g4
             PACKAGE antlrcpptest
             LISTENER
             VISITOR
             COMPILE_FLAGS -lib ${ANTLR_NiloScript_OUTPUT_DIR})

#Inclui os diretórios onde o ANTLR colocou os arquivos .h/.cpp gerados para lexer e parser
include_directories(${ANTLR_SampleGrammarLexer_OUTPUT_DIR})
include_directories(${ANTLR_SampleGrammarParser_OUTPUT_DIR})

#Cria o executável chamado demo. Ele é formado pelo seu main.cpp + os arquivos .cpp do lexer e parser gerados automaticamente
add_executable(demo main.cpp
               ${ANTLR_SampleGrammarLexer_CXX_OUTPUTS}
               ${ANTLR_SampleGrammarParser_CXX_OUTPUTS})

# Garante que o executável demo possa usar as classes base (Parser, Lexer, CommonTokenStream, etc.)
target_link_libraries(demo antlr4_static)