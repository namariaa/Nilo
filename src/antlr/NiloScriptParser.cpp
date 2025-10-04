
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
      "", "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'", "'case'", 
      "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "INT", "OPERATOR", 
      "VAR", "STRING", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,20,109,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,1,0,5,0,19,8,0,10,0,12,0,22,9,0,4,0,24,8,0,11,0,12,0,25,1,0,
  	1,0,1,1,1,1,1,1,1,1,3,1,34,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,5,3,49,8,3,10,3,12,3,52,9,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,5,4,63,8,4,10,4,12,4,66,9,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,
  	5,76,8,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,91,8,
  	7,10,7,12,7,94,9,7,1,7,4,7,97,8,7,11,7,12,7,98,1,7,5,7,102,8,7,10,7,12,
  	7,105,9,7,1,7,1,7,1,7,0,2,6,8,8,0,2,4,6,8,10,12,14,0,0,116,0,23,1,0,0,
  	0,2,33,1,0,0,0,4,35,1,0,0,0,6,39,1,0,0,0,8,53,1,0,0,0,10,75,1,0,0,0,12,
  	77,1,0,0,0,14,82,1,0,0,0,16,20,3,2,1,0,17,19,5,18,0,0,18,17,1,0,0,0,19,
  	22,1,0,0,0,20,18,1,0,0,0,20,21,1,0,0,0,21,24,1,0,0,0,22,20,1,0,0,0,23,
  	16,1,0,0,0,24,25,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,27,1,0,0,0,27,
  	28,5,0,0,1,28,1,1,0,0,0,29,34,3,6,3,0,30,34,3,12,6,0,31,34,3,4,2,0,32,
  	34,3,14,7,0,33,29,1,0,0,0,33,30,1,0,0,0,33,31,1,0,0,0,33,32,1,0,0,0,34,
  	3,1,0,0,0,35,36,5,14,0,0,36,37,5,1,0,0,37,38,3,6,3,0,38,5,1,0,0,0,39,
  	40,6,3,-1,0,40,41,3,8,4,0,41,50,1,0,0,0,42,43,10,3,0,0,43,44,5,2,0,0,
  	44,49,3,8,4,0,45,46,10,2,0,0,46,47,5,3,0,0,47,49,3,8,4,0,48,42,1,0,0,
  	0,48,45,1,0,0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,7,1,0,0,
  	0,52,50,1,0,0,0,53,54,6,4,-1,0,54,55,3,10,5,0,55,64,1,0,0,0,56,57,10,
  	3,0,0,57,58,5,4,0,0,58,63,3,10,5,0,59,60,10,2,0,0,60,61,5,5,0,0,61,63,
  	3,10,5,0,62,56,1,0,0,0,62,59,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,64,65,
  	1,0,0,0,65,9,1,0,0,0,66,64,1,0,0,0,67,68,5,6,0,0,68,69,3,6,3,0,69,70,
  	5,7,0,0,70,76,1,0,0,0,71,76,5,12,0,0,72,76,5,14,0,0,73,76,5,15,0,0,74,
  	76,5,16,0,0,75,67,1,0,0,0,75,71,1,0,0,0,75,72,1,0,0,0,75,73,1,0,0,0,75,
  	74,1,0,0,0,76,11,1,0,0,0,77,78,5,8,0,0,78,79,5,6,0,0,79,80,3,6,3,0,80,
  	81,5,7,0,0,81,13,1,0,0,0,82,83,5,9,0,0,83,84,5,6,0,0,84,85,3,6,3,0,85,
  	86,5,13,0,0,86,87,3,6,3,0,87,88,5,7,0,0,88,96,5,10,0,0,89,91,5,18,0,0,
  	90,89,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,
  	94,92,1,0,0,0,95,97,3,2,1,0,96,92,1,0,0,0,97,98,1,0,0,0,98,96,1,0,0,0,
  	98,99,1,0,0,0,99,103,1,0,0,0,100,102,5,18,0,0,101,100,1,0,0,0,102,105,
  	1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,106,1,0,0,0,105,103,1,0,0,
  	0,106,107,5,11,0,0,107,15,1,0,0,0,11,20,25,33,48,50,62,64,75,92,98,103
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

tree::TerminalNode* NiloScriptParser::ProgramContext::EOF() {
  return getToken(NiloScriptParser::EOF, 0);
}

std::vector<NiloScriptParser::CodeContext *> NiloScriptParser::ProgramContext::code() {
  return getRuleContexts<NiloScriptParser::CodeContext>();
}

NiloScriptParser::CodeContext* NiloScriptParser::ProgramContext::code(size_t i) {
  return getRuleContext<NiloScriptParser::CodeContext>(i);
}

std::vector<tree::TerminalNode *> NiloScriptParser::ProgramContext::ENTER() {
  return getTokens(NiloScriptParser::ENTER);
}

tree::TerminalNode* NiloScriptParser::ProgramContext::ENTER(size_t i) {
  return getToken(NiloScriptParser::ENTER, i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(16);
      code();
      setState(20);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NiloScriptParser::ENTER) {
        setState(17);
        match(NiloScriptParser::ENTER);
        setState(22);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 119616) != 0));
    setState(27);
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
    setState(33);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(29);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(30);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(31);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(32);
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
    setState(35);
    match(NiloScriptParser::VAR);
    setState(36);
    match(NiloScriptParser::T__0);
    setState(37);
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
    setState(40);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(50);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(48);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(42);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(43);
          match(NiloScriptParser::T__1);
          setState(44);
          term(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(45);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(46);
          match(NiloScriptParser::T__2);
          setState(47);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(52);
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
    setState(54);
    fact();
    _ctx->stop = _input->LT(-1);
    setState(64);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(62);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(56);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(57);
          match(NiloScriptParser::T__3);
          setState(58);
          fact();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(59);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(60);
          match(NiloScriptParser::T__4);
          setState(61);
          fact();
          break;
        }

        default:
          break;
        } 
      }
      setState(66);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
    setState(75);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NiloScriptParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(67);
        match(NiloScriptParser::T__5);
        setState(68);
        expression(0);
        setState(69);
        match(NiloScriptParser::T__6);
        break;
      }

      case NiloScriptParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(71);
        match(NiloScriptParser::INT);
        break;
      }

      case NiloScriptParser::VAR: {
        enterOuterAlt(_localctx, 3);
        setState(72);
        match(NiloScriptParser::VAR);
        break;
      }

      case NiloScriptParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(73);
        match(NiloScriptParser::STRING);
        break;
      }

      case NiloScriptParser::COMMENT: {
        enterOuterAlt(_localctx, 5);
        setState(74);
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
    setState(77);
    match(NiloScriptParser::T__7);
    setState(78);
    match(NiloScriptParser::T__5);
    setState(79);
    expression(0);
    setState(80);
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

std::vector<NiloScriptParser::ExpressionContext *> NiloScriptParser::InCaseContext::expression() {
  return getRuleContexts<NiloScriptParser::ExpressionContext>();
}

NiloScriptParser::ExpressionContext* NiloScriptParser::InCaseContext::expression(size_t i) {
  return getRuleContext<NiloScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* NiloScriptParser::InCaseContext::OPERATOR() {
  return getToken(NiloScriptParser::OPERATOR, 0);
}

std::vector<NiloScriptParser::CodeContext *> NiloScriptParser::InCaseContext::code() {
  return getRuleContexts<NiloScriptParser::CodeContext>();
}

NiloScriptParser::CodeContext* NiloScriptParser::InCaseContext::code(size_t i) {
  return getRuleContext<NiloScriptParser::CodeContext>(i);
}

std::vector<tree::TerminalNode *> NiloScriptParser::InCaseContext::ENTER() {
  return getTokens(NiloScriptParser::ENTER);
}

tree::TerminalNode* NiloScriptParser::InCaseContext::ENTER(size_t i) {
  return getToken(NiloScriptParser::ENTER, i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(NiloScriptParser::T__8);
    setState(83);
    match(NiloScriptParser::T__5);
    setState(84);
    expression(0);
    setState(85);
    match(NiloScriptParser::OPERATOR);
    setState(86);
    expression(0);
    setState(87);
    match(NiloScriptParser::T__6);
    setState(88);
    match(NiloScriptParser::T__9);
    setState(96); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(92);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == NiloScriptParser::ENTER) {
                setState(89);
                match(NiloScriptParser::ENTER);
                setState(94);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(95);
              code();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(98); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NiloScriptParser::ENTER) {
      setState(100);
      match(NiloScriptParser::ENTER);
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(106);
    match(NiloScriptParser::T__10);
   
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
