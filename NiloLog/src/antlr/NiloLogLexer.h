
// Generated from NiloLog.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloLogLexer : public antlr4::Lexer {
public:
  enum {
    STRING = 1, BOOL = 2, INT = 3, FLOAT = 4, NILOCODE = 5, PHASE = 6, SHOW = 7, 
    OPAR = 8, CPAR = 9, OBRA = 10, CBRA = 11, OKEY = 12, CKEY = 13, OASTSLA = 14, 
    CASTSLA = 15, ENTRY = 16, PROGRAM = 17, COLON = 18, LEXER = 19, PARSER = 20, 
    IR = 21, TAB = 22, ENTER = 23, SPACE = 24, WHITESPACE = 25
  };

  explicit NiloLogLexer(antlr4::CharStream *input);

  ~NiloLogLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

