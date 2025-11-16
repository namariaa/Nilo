
// Generated from NiloScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloScriptLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, INT = 6, FLOAT = 7, 
    VAR = 8, STRING = 9, PLUS = 10, MINUS = 11, MUL = 12, DIV = 13, POW = 14, 
    OPERATOR = 15, EQUAL = 16, OPAR = 17, CPAR = 18, READ = 19, COMMENT = 20, 
    TAB = 21, ENTER = 22, SPACE = 23, WHITESPACE = 24
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

