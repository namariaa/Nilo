
// Generated from NiloScript.g4 by ANTLR 4.13.2


#include "NiloScriptListener.h"
#include "NiloScriptVisitor.h"

#include "NiloScriptParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NiloScriptParserStaticData final {
  NiloScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NiloScriptParserStaticData(const NiloScriptParserStaticData&) = delete;
  NiloScriptParserStaticData(NiloScriptParserStaticData&&) = delete;
  NiloScriptParserStaticData& operator=(const NiloScriptParserStaticData&) = delete;
  NiloScriptParserStaticData& operator=(NiloScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag niloscriptParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NiloScriptParserStaticData> niloscriptParserStaticData = nullptr;

void niloscriptParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (niloscriptParserStaticData != nullptr) {
    return;
  }
#else
  assert(niloscriptParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NiloScriptParserStaticData>(
    std::vector<std::string>{
      "program", "code", "assignment", "expression", "term", "fact", "print", 
      "inCase"
    },
    std::vector<std::string>{
      "", "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'", "'case'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "INT", "VAR", "STRING", "COMMENT", 
      "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,17,78,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,24,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,39,8,3,10,3,12,3,42,9,3,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,5,4,53,8,4,10,4,12,4,56,9,4,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,3,5,66,8,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,0,2,
  	6,8,8,0,2,4,6,8,10,12,14,0,0,80,0,16,1,0,0,0,2,23,1,0,0,0,4,25,1,0,0,
  	0,6,29,1,0,0,0,8,43,1,0,0,0,10,65,1,0,0,0,12,67,1,0,0,0,14,72,1,0,0,0,
  	16,17,3,2,1,0,17,18,5,0,0,1,18,1,1,0,0,0,19,24,3,6,3,0,20,24,3,12,6,0,
  	21,24,3,4,2,0,22,24,3,14,7,0,23,19,1,0,0,0,23,20,1,0,0,0,23,21,1,0,0,
  	0,23,22,1,0,0,0,24,3,1,0,0,0,25,26,5,11,0,0,26,27,5,1,0,0,27,28,3,6,3,
  	0,28,5,1,0,0,0,29,30,6,3,-1,0,30,31,3,8,4,0,31,40,1,0,0,0,32,33,10,3,
  	0,0,33,34,5,2,0,0,34,39,3,8,4,0,35,36,10,2,0,0,36,37,5,3,0,0,37,39,3,
  	8,4,0,38,32,1,0,0,0,38,35,1,0,0,0,39,42,1,0,0,0,40,38,1,0,0,0,40,41,1,
  	0,0,0,41,7,1,0,0,0,42,40,1,0,0,0,43,44,6,4,-1,0,44,45,3,10,5,0,45,54,
  	1,0,0,0,46,47,10,3,0,0,47,48,5,4,0,0,48,53,3,10,5,0,49,50,10,2,0,0,50,
  	51,5,5,0,0,51,53,3,10,5,0,52,46,1,0,0,0,52,49,1,0,0,0,53,56,1,0,0,0,54,
  	52,1,0,0,0,54,55,1,0,0,0,55,9,1,0,0,0,56,54,1,0,0,0,57,58,5,6,0,0,58,
  	59,3,6,3,0,59,60,5,7,0,0,60,66,1,0,0,0,61,66,5,10,0,0,62,66,5,11,0,0,
  	63,66,5,12,0,0,64,66,5,13,0,0,65,57,1,0,0,0,65,61,1,0,0,0,65,62,1,0,0,
  	0,65,63,1,0,0,0,65,64,1,0,0,0,66,11,1,0,0,0,67,68,5,8,0,0,68,69,5,6,0,
  	0,69,70,3,6,3,0,70,71,5,7,0,0,71,13,1,0,0,0,72,73,5,9,0,0,73,74,5,6,0,
  	0,74,75,3,6,3,0,75,76,5,7,0,0,76,15,1,0,0,0,6,23,38,40,52,54,65
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  niloscriptParserStaticData = std::move(staticData);
}

}

NiloScriptParser::NiloScriptParser(TokenStream *input) : NiloScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NiloScriptParser::NiloScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NiloScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *niloscriptParserStaticData->atn, niloscriptParserStaticData->decisionToDFA, niloscriptParserStaticData->sharedContextCache, options);
}

NiloScriptParser::~NiloScriptParser() {
  delete _interpreter;
}

const atn::ATN& NiloScriptParser::getATN() const {
  return *niloscriptParserStaticData->atn;
}

std::string NiloScriptParser::getGrammarFileName() const {
  return "NiloScript.g4";
}

const std::vector<std::string>& NiloScriptParser::getRuleNames() const {
  return niloscriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& NiloScriptParser::getVocabulary() const {
  return niloscriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NiloScriptParser::getSerializedATN() const {
  return niloscriptParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

NiloScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::CodeContext* NiloScriptParser::ProgramContext::code() {
  return getRuleContext<NiloScriptParser::CodeContext>(0);
}

tree::TerminalNode* NiloScriptParser::ProgramContext::EOF() {
  return getToken(NiloScriptParser::EOF, 0);
}


size_t NiloScriptParser::ProgramContext::getRuleIndex() const {
  return NiloScriptParser::RuleProgram;
}

void NiloScriptParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void NiloScriptParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any NiloScriptParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::ProgramContext* NiloScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, NiloScriptParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    code();
    setState(17);
    match(NiloScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

NiloScriptParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::ExpressionContext* NiloScriptParser::CodeContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}

NiloScriptParser::PrintContext* NiloScriptParser::CodeContext::print() {
  return getRuleContext<NiloScriptParser::PrintContext>(0);
}

NiloScriptParser::AssignmentContext* NiloScriptParser::CodeContext::assignment() {
  return getRuleContext<NiloScriptParser::AssignmentContext>(0);
}

NiloScriptParser::InCaseContext* NiloScriptParser::CodeContext::inCase() {
  return getRuleContext<NiloScriptParser::InCaseContext>(0);
}


size_t NiloScriptParser::CodeContext::getRuleIndex() const {
  return NiloScriptParser::RuleCode;
}

void NiloScriptParser::CodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCode(this);
}

void NiloScriptParser::CodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCode(this);
}


std::any NiloScriptParser::CodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitCode(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::CodeContext* NiloScriptParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 2, NiloScriptParser::RuleCode);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(23);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(19);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(20);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(21);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(22);
      inCase();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

NiloScriptParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::AssignmentContext::VAR() {
  return getToken(NiloScriptParser::VAR, 0);
}

NiloScriptParser::ExpressionContext* NiloScriptParser::AssignmentContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}


size_t NiloScriptParser::AssignmentContext::getRuleIndex() const {
  return NiloScriptParser::RuleAssignment;
}

void NiloScriptParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void NiloScriptParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any NiloScriptParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::AssignmentContext* NiloScriptParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, NiloScriptParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    match(NiloScriptParser::VAR);
    setState(26);
    match(NiloScriptParser::T__0);
    setState(27);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

NiloScriptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::TermContext* NiloScriptParser::ExpressionContext::term() {
  return getRuleContext<NiloScriptParser::TermContext>(0);
}

NiloScriptParser::ExpressionContext* NiloScriptParser::ExpressionContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}


size_t NiloScriptParser::ExpressionContext::getRuleIndex() const {
  return NiloScriptParser::RuleExpression;
}

void NiloScriptParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void NiloScriptParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any NiloScriptParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


NiloScriptParser::ExpressionContext* NiloScriptParser::expression() {
   return expression(0);
}

NiloScriptParser::ExpressionContext* NiloScriptParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NiloScriptParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  NiloScriptParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, NiloScriptParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(30);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(40);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(38);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(32);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(33);
          match(NiloScriptParser::T__1);
          setState(34);
          term(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(35);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(36);
          match(NiloScriptParser::T__2);
          setState(37);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(42);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

NiloScriptParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::FactContext* NiloScriptParser::TermContext::fact() {
  return getRuleContext<NiloScriptParser::FactContext>(0);
}

NiloScriptParser::TermContext* NiloScriptParser::TermContext::term() {
  return getRuleContext<NiloScriptParser::TermContext>(0);
}


size_t NiloScriptParser::TermContext::getRuleIndex() const {
  return NiloScriptParser::RuleTerm;
}

void NiloScriptParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void NiloScriptParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


std::any NiloScriptParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}


NiloScriptParser::TermContext* NiloScriptParser::term() {
   return term(0);
}

NiloScriptParser::TermContext* NiloScriptParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NiloScriptParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  NiloScriptParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, NiloScriptParser::RuleTerm, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(44);
    fact();
    _ctx->stop = _input->LT(-1);
    setState(54);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(52);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(46);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(47);
          match(NiloScriptParser::T__3);
          setState(48);
          fact();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(49);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(50);
          match(NiloScriptParser::T__4);
          setState(51);
          fact();
          break;
        }

        default:
          break;
        } 
      }
      setState(56);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FactContext ------------------------------------------------------------------

NiloScriptParser::FactContext::FactContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::ExpressionContext* NiloScriptParser::FactContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* NiloScriptParser::FactContext::INT() {
  return getToken(NiloScriptParser::INT, 0);
}

tree::TerminalNode* NiloScriptParser::FactContext::VAR() {
  return getToken(NiloScriptParser::VAR, 0);
}

tree::TerminalNode* NiloScriptParser::FactContext::STRING() {
  return getToken(NiloScriptParser::STRING, 0);
}

tree::TerminalNode* NiloScriptParser::FactContext::COMMENT() {
  return getToken(NiloScriptParser::COMMENT, 0);
}


size_t NiloScriptParser::FactContext::getRuleIndex() const {
  return NiloScriptParser::RuleFact;
}

void NiloScriptParser::FactContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFact(this);
}

void NiloScriptParser::FactContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFact(this);
}


std::any NiloScriptParser::FactContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitFact(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::FactContext* NiloScriptParser::fact() {
  FactContext *_localctx = _tracker.createInstance<FactContext>(_ctx, getState());
  enterRule(_localctx, 10, NiloScriptParser::RuleFact);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NiloScriptParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(57);
        match(NiloScriptParser::T__5);
        setState(58);
        expression(0);
        setState(59);
        match(NiloScriptParser::T__6);
        break;
      }

      case NiloScriptParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(61);
        match(NiloScriptParser::INT);
        break;
      }

      case NiloScriptParser::VAR: {
        enterOuterAlt(_localctx, 3);
        setState(62);
        match(NiloScriptParser::VAR);
        break;
      }

      case NiloScriptParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(63);
        match(NiloScriptParser::STRING);
        break;
      }

      case NiloScriptParser::COMMENT: {
        enterOuterAlt(_localctx, 5);
        setState(64);
        match(NiloScriptParser::COMMENT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

NiloScriptParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::ExpressionContext* NiloScriptParser::PrintContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}


size_t NiloScriptParser::PrintContext::getRuleIndex() const {
  return NiloScriptParser::RulePrint;
}

void NiloScriptParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void NiloScriptParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


std::any NiloScriptParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::PrintContext* NiloScriptParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 12, NiloScriptParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(NiloScriptParser::T__7);
    setState(68);
    match(NiloScriptParser::T__5);
    setState(69);
    expression(0);
    setState(70);
    match(NiloScriptParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InCaseContext ------------------------------------------------------------------

NiloScriptParser::InCaseContext::InCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::ExpressionContext* NiloScriptParser::InCaseContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}


size_t NiloScriptParser::InCaseContext::getRuleIndex() const {
  return NiloScriptParser::RuleInCase;
}

void NiloScriptParser::InCaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInCase(this);
}

void NiloScriptParser::InCaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInCase(this);
}


std::any NiloScriptParser::InCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitInCase(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::InCaseContext* NiloScriptParser::inCase() {
  InCaseContext *_localctx = _tracker.createInstance<InCaseContext>(_ctx, getState());
  enterRule(_localctx, 14, NiloScriptParser::RuleInCase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(NiloScriptParser::T__8);
    setState(73);
    match(NiloScriptParser::T__5);
    setState(74);
    expression(0);
    setState(75);
    match(NiloScriptParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool NiloScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 4: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NiloScriptParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool NiloScriptParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void NiloScriptParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  niloscriptParserInitialize();
#else
  ::antlr4::internal::call_once(niloscriptParserOnceFlag, niloscriptParserInitialize);
#endif
}
