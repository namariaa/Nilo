
// Generated from NiloScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloScriptLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, PLUS = 5, MINUS = 6, MUL = 7, 
    DIV = 8, MOD = 9, POW = 10, OPERATOR = 11, EQUAL = 12, OPAR = 13, CPAR = 14, 
    OBRA = 15, CBRA = 16, OKEY = 17, CKEY = 18, SC = 19, READ = 20, SHOW = 21, 
    CASE = 22, ELSE = 23, STRING = 24, BOOL = 25, RETURN_TYPE = 26, COLON = 27, 
    INT = 28, FLOAT = 29, VAR = 30, TYPE = 31, COMMENT = 32, TAB = 33, ENTER = 34, 
    SPACE = 35, WHITESPACE = 36
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

