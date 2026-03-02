
// Generated from NiloScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloScriptLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, PLUS = 4, MINUS = 5, MUL = 6, DIV = 7, 
    MOD = 8, POW = 9, OPERATOR = 10, EQUAL = 11, OPAR = 12, CPAR = 13, OBRA = 14, 
    CBRA = 15, OKEY = 16, CKEY = 17, SC = 18, READ = 19, SHOW = 20, CASE = 21, 
    ELSE = 22, RETURNFUNC = 23, STRING = 24, BOOL = 25, RETURN_TYPE = 26, 
    COLON = 27, INT = 28, FLOAT = 29, VAR = 30, TYPE = 31, COMMENT = 32, 
    TAB = 33, ENTER = 34, SPACE = 35, WHITESPACE = 36
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

