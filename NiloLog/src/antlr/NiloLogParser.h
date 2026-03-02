
// Generated from NiloLog.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloLogParser : public antlr4::Parser {
public:
  enum {
    STRING = 1, BOOL = 2, INT = 3, FLOAT = 4, NILOCODE = 5, FORMAT = 6, 
    PHASE = 7, SHOW = 8, OPAR = 9, CPAR = 10, OBRA = 11, CBRA = 12, OKEY = 13, 
    CKEY = 14, OASTSLA = 15, CASTSLA = 16, PDF = 17, PNG = 18, ENTRY = 19, 
    COLON = 20, IN = 21, LEXER = 22, PARSER = 23, IR = 24, TAB = 25, ENTER = 26, 
    SPACE = 27, WHITESPACE = 28
  };

  enum {
    RuleStmts = 0, RuleLog = 1, RuleInput = 2, RuleProgram = 3
  };

  explicit NiloLogParser(antlr4::TokenStream *input);

  NiloLogParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~NiloLogParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StmtsContext;
  class LogContext;
  class InputContext;
  class ProgramContext; 

  class  StmtsContext : public antlr4::ParserRuleContext {
  public:
    StmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogContext *log();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtsContext* stmts();

  class  LogContext : public antlr4::ParserRuleContext {
  public:
    LogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *OPAR();
    antlr4::tree::TerminalNode *PHASE();
    antlr4::tree::TerminalNode *CPAR();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *OBRA();
    antlr4::tree::TerminalNode *ENTER();
    ProgramContext *program();
    antlr4::tree::TerminalNode *CBRA();
    InputContext *input();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogContext* log();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
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

