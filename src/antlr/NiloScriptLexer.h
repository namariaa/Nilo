
// Generated from NiloScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloScriptLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    PLUS = 8, MINUS = 9, MUL = 10, DIV = 11, MOD = 12, POW = 13, OPERATOR = 14, 
    INT = 15, FLOAT = 16, VAR = 17, STRING = 18, BOOL = 19, TYPE = 20, RETURN_TYPE = 21, 
    EQUAL = 22, OPAR = 23, CPAR = 24, OBRA = 25, CBRA = 26, OKEY = 27, CKEY = 28, 
    SC = 29, READ = 30, COMMENT = 31, TAB = 32, ENTER = 33, SPACE = 34, 
    WHITESPACE = 35
  };

  explicit NiloScriptLexer(antlr4::CharStream *input);

  ~NiloScriptLexer() override;


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

