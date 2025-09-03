# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/namaria/Gram-tica-com-ANTLR/src/debug/antlr4_runtime/src/antlr4_runtime"
  "/home/namaria/Gram-tica-com-ANTLR/src/debug/antlr4_runtime/src/antlr4_runtime-build"
  "/home/namaria/Gram-tica-com-ANTLR/src/debug/antlr4_runtime"
  "/home/namaria/Gram-tica-com-ANTLR/src/debug/antlr4_runtime/tmp"
  "/home/namaria/Gram-tica-com-ANTLR/src/debug/antlr4_runtime/src/antlr4_runtime-stamp"
  "/home/namaria/Gram-tica-com-ANTLR/src/debug"
  "/home/namaria/Gram-tica-com-ANTLR/src/debug/antlr4_runtime/src/antlr4_runtime-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/namaria/Gram-tica-com-ANTLR/src/debug/antlr4_runtime/src/antlr4_runtime-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/namaria/Gram-tica-com-ANTLR/src/debug/antlr4_runtime/src/antlr4_runtime-stamp${cfgdir}") # cfgdir has leading slash
endif()
