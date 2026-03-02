
// Generated from NiloLog.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloLogLexer : public antlr4::Lexer {
public:
  enum {
    STRING = 1, BOOL = 2, INT = 3, FLOAT = 4, NILOCODE = 5, FORMAT = 6, 
    PHASE = 7, SHOW = 8, OPAR = 9, CPAR = 10, OBRA = 11, CBRA = 12, OKEY = 13, 
    CKEY = 14, OASTSLA = 15, CASTSLA = 16, PDF = 17, PNG = 18, ENTRY = 19, 
    COLON = 20, IN = 21, LEXER = 22, PARSER = 23, IR = 24, TAB = 25, ENTER = 26, 
    SPACE = 27, WHITESPACE = 28
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

