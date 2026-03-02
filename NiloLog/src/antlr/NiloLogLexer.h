
// Generated from NiloLog.g4 by ANTLR 4.9.2

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
  ~NiloLogLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

