
// Generated from NiloScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NiloScriptParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    PLUS = 8, MINUS = 9, MUL = 10, DIV = 11, MOD = 12, POW = 13, OPERATOR = 14, 
    INT = 15, FLOAT = 16, VAR = 17, STRING = 18, BOOL = 19, TYPE = 20, RETURN_TYPE = 21, 
    EQUAL = 22, OPAR = 23, CPAR = 24, OBRA = 25, CBRA = 26, OKEY = 27, CKEY = 28, 
    SC = 29, READ = 30, COMMENT = 31, TAB = 32, ENTER = 33, SPACE = 34, 
    WHITESPACE = 35
  };

  enum {
    RuleProgram = 0, RuleStmt = 1, RuleAssignment = 2, RuleExpression = 3, 
    RuleTerm = 4, RuleFact = 5, RuleExpo = 6, RuleOpPar = 7, RuleTypeSpecifier = 8, 
    RulePrint = 9, RuleInput = 10, RuleInCase = 11, RuleLoop = 12, RuleFunction = 13, 
    RuleFunctionCall = 14, RuleList = 15, RuleAcessList = 16
  };

  explicit NiloScriptParser(antlr4::TokenStream *input);

  NiloScriptParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~NiloScriptParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StmtContext;
  class AssignmentContext;
  class ExpressionContext;
  class TermContext;
  class FactContext;
  class ExpoContext;
  class OpParContext;
  class TypeSpecifierContext;
  class PrintContext;
  class InputContext;
  class InCaseContext;
  class LoopContext;
  class FunctionContext;
  class FunctionCallContext;
  class ListContext;
  class AcessListContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrintContext *print();
    antlr4::tree::TerminalNode *SC();
    AssignmentContext *assignment();
    InputContext *input();
    LoopContext *loop();
    InCaseContext *inCase();
    FunctionContext *function();
    FunctionCallContext *functionCall();
    ListContext *list();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *RETURN_TYPE();
    antlr4::tree::TerminalNode *EQUAL();
    TermContext *term();
    InputContext *input();
    AcessListContext *acessList();
    FunctionCallContext *functionCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *EQUAL();
    TermContext *term();
    AcessListContext *acessList();
    FunctionCallContext *functionCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactContext *fact();
    TermContext *term();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();
  TermContext* term(int precedence);
  class  FactContext : public antlr4::ParserRuleContext {
  public:
    FactContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpoContext *expo();
    FactContext *fact();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactContext* fact();
  FactContext* fact(int precedence);
  class  ExpoContext : public antlr4::ParserRuleContext {
  public:
    ExpoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpParContext *opPar();
    antlr4::tree::TerminalNode *POW();
    ExpoContext *expo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpoContext* expo();

  class  OpParContext : public antlr4::ParserRuleContext {
  public:
    OpParContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPAR();
    TermContext *term();
    antlr4::tree::TerminalNode *CPAR();
    TypeSpecifierContext *typeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpParContext* opPar();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPAR();
    antlr4::tree::TerminalNode *CPAR();
    TermContext *term();
    AcessListContext *acessList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintContext* print();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  InCaseContext : public antlr4::ParserRuleContext {
  public:
    InCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPAR();
    antlr4::tree::TerminalNode *CPAR();
    std::vector<antlr4::tree::TerminalNode *> OBRA();
    antlr4::tree::TerminalNode* OBRA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CBRA();
    antlr4::tree::TerminalNode* CBRA(size_t i);
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    antlr4::tree::TerminalNode *OPERATOR();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InCaseContext* inCase();

  class  LoopContext : public antlr4::ParserRuleContext {
  public:
    LoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPAR();
    antlr4::tree::TerminalNode *CPAR();
    antlr4::tree::TerminalNode *OBRA();
    antlr4::tree::TerminalNode *CBRA();
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    antlr4::tree::TerminalNode *OPERATOR();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopContext* loop();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    antlr4::tree::TerminalNode *OPAR();
    antlr4::tree::TerminalNode *CPAR();
    std::vector<antlr4::tree::TerminalNode *> RETURN_TYPE();
    antlr4::tree::TerminalNode* RETURN_TYPE(size_t i);
    antlr4::tree::TerminalNode *OBRA();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *CBRA();
    antlr4::tree::TerminalNode *TYPE();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    antlr4::tree::TerminalNode *OPAR();
    antlr4::tree::TerminalNode *CPAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  ListContext : public antlr4::ParserRuleContext {
  public:
    ListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *RETURN_TYPE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *OKEY();
    antlr4::tree::TerminalNode *CKEY();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLOAT();
    antlr4::tree::TerminalNode* FLOAT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BOOL();
    antlr4::tree::TerminalNode* BOOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListContext* list();

  class  AcessListContext : public antlr4::ParserRuleContext {
  public:
    AcessListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *OKEY();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *CKEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AcessListContext* acessList();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool termSempred(TermContext *_localctx, size_t predicateIndex);
  bool factSempred(FactContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

