
// Generated from NiloLog.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloLogParser : public antlr4::Parser {
public:
  enum {
    STRING = 1, BOOL = 2, INT = 3, FLOAT = 4, NILOCODE = 5, PHASE = 6, SHOW = 7, 
    OPAR = 8, CPAR = 9, OBRA = 10, CBRA = 11, OKEY = 12, CKEY = 13, OASTSLA = 14, 
    CASTSLA = 15, ENTRY = 16, PROGRAM = 17, COLON = 18, LEXER = 19, PARSER = 20, 
    IR = 21, TAB = 22, ENTER = 23, SPACE = 24, WHITESPACE = 25
  };

  enum {
    RuleLog = 0, RuleInput = 1, RuleProgram = 2
  };

  explicit NiloLogParser(antlr4::TokenStream *input);

  NiloLogParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~NiloLogParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class LogContext;
  class InputContext;
  class ProgramContext; 

  class  LogContext : public antlr4::ParserRuleContext {
  public:
    LogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *OPAR();
    antlr4::tree::TerminalNode *PHASE();
    antlr4::tree::TerminalNode *CPAR();
    antlr4::tree::TerminalNode *OBRA();
    antlr4::tree::TerminalNode *ENTER();
    ProgramContext *program();
    antlr4::tree::TerminalNode *CBRA();
    antlr4::tree::TerminalNode *EOF();
    InputContext *input();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogContext* log();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *listValues = nullptr;
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTRY();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *OKEY();
    antlr4::tree::TerminalNode *CKEY();
    antlr4::tree::TerminalNode *ENTER();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BOOL();
    antlr4::tree::TerminalNode* BOOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLOAT();
    antlr4::tree::TerminalNode* FLOAT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *NILOCODE();
    antlr4::tree::TerminalNode *ENTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

