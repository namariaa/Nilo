
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
      "program", "code", "assignment", "expression", "term", "pot", "fact", 
      "print", "inCase"
    },
    std::vector<std::string>{
      "", "'='", "'+'", "'-'", "'*'", "'/'", "'**'", "'('", "')'", "'print'", 
      "'case'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "INT", "OPERATOR", 
      "VAR", "STRING", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,122,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,5,0,21,8,0,10,0,12,0,24,9,0,4,0,26,8,0,11,0,12,
  	0,27,1,0,1,0,1,1,1,1,1,1,1,1,3,1,36,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,5,3,51,8,3,10,3,12,3,54,9,3,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,5,4,65,8,4,10,4,12,4,68,9,4,1,5,1,5,1,5,1,5,1,5,1,5,5,
  	5,76,8,5,10,5,12,5,79,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,89,8,6,
  	1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,104,8,8,10,8,
  	12,8,107,9,8,1,8,4,8,110,8,8,11,8,12,8,111,1,8,5,8,115,8,8,10,8,12,8,
  	118,9,8,1,8,1,8,1,8,0,3,6,8,10,9,0,2,4,6,8,10,12,14,16,0,0,129,0,25,1,
  	0,0,0,2,35,1,0,0,0,4,37,1,0,0,0,6,41,1,0,0,0,8,55,1,0,0,0,10,69,1,0,0,
  	0,12,88,1,0,0,0,14,90,1,0,0,0,16,95,1,0,0,0,18,22,3,2,1,0,19,21,5,19,
  	0,0,20,19,1,0,0,0,21,24,1,0,0,0,22,20,1,0,0,0,22,23,1,0,0,0,23,26,1,0,
  	0,0,24,22,1,0,0,0,25,18,1,0,0,0,26,27,1,0,0,0,27,25,1,0,0,0,27,28,1,0,
  	0,0,28,29,1,0,0,0,29,30,5,0,0,1,30,1,1,0,0,0,31,36,3,6,3,0,32,36,3,14,
  	7,0,33,36,3,4,2,0,34,36,3,16,8,0,35,31,1,0,0,0,35,32,1,0,0,0,35,33,1,
  	0,0,0,35,34,1,0,0,0,36,3,1,0,0,0,37,38,5,15,0,0,38,39,5,1,0,0,39,40,3,
  	6,3,0,40,5,1,0,0,0,41,42,6,3,-1,0,42,43,3,8,4,0,43,52,1,0,0,0,44,45,10,
  	3,0,0,45,46,5,2,0,0,46,51,3,8,4,0,47,48,10,2,0,0,48,49,5,3,0,0,49,51,
  	3,8,4,0,50,44,1,0,0,0,50,47,1,0,0,0,51,54,1,0,0,0,52,50,1,0,0,0,52,53,
  	1,0,0,0,53,7,1,0,0,0,54,52,1,0,0,0,55,56,6,4,-1,0,56,57,3,10,5,0,57,66,
  	1,0,0,0,58,59,10,3,0,0,59,60,5,4,0,0,60,65,3,10,5,0,61,62,10,2,0,0,62,
  	63,5,5,0,0,63,65,3,10,5,0,64,58,1,0,0,0,64,61,1,0,0,0,65,68,1,0,0,0,66,
  	64,1,0,0,0,66,67,1,0,0,0,67,9,1,0,0,0,68,66,1,0,0,0,69,70,6,5,-1,0,70,
  	71,3,12,6,0,71,77,1,0,0,0,72,73,10,2,0,0,73,74,5,6,0,0,74,76,3,12,6,0,
  	75,72,1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,11,1,0,0,0,
  	79,77,1,0,0,0,80,81,5,7,0,0,81,82,3,6,3,0,82,83,5,8,0,0,83,89,1,0,0,0,
  	84,89,5,13,0,0,85,89,5,15,0,0,86,89,5,16,0,0,87,89,5,17,0,0,88,80,1,0,
  	0,0,88,84,1,0,0,0,88,85,1,0,0,0,88,86,1,0,0,0,88,87,1,0,0,0,89,13,1,0,
  	0,0,90,91,5,9,0,0,91,92,5,7,0,0,92,93,3,6,3,0,93,94,5,8,0,0,94,15,1,0,
  	0,0,95,96,5,10,0,0,96,97,5,7,0,0,97,98,3,6,3,0,98,99,5,14,0,0,99,100,
  	3,6,3,0,100,101,5,8,0,0,101,109,5,11,0,0,102,104,5,19,0,0,103,102,1,0,
  	0,0,104,107,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,
  	105,1,0,0,0,108,110,3,2,1,0,109,105,1,0,0,0,110,111,1,0,0,0,111,109,1,
  	0,0,0,111,112,1,0,0,0,112,116,1,0,0,0,113,115,5,19,0,0,114,113,1,0,0,
  	0,115,118,1,0,0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,119,1,0,0,0,118,
  	116,1,0,0,0,119,120,5,12,0,0,120,17,1,0,0,0,12,22,27,35,50,52,64,66,77,
  	88,105,111,116
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
    setState(25); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(18);
      code();
      setState(22);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NiloScriptParser::ENTER) {
        setState(19);
        match(NiloScriptParser::ENTER);
        setState(24);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(27); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 239232) != 0));
    setState(29);
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
    setState(35);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(31);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(32);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(33);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(34);
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
    setState(37);
    match(NiloScriptParser::VAR);
    setState(38);
    match(NiloScriptParser::T__0);
    setState(39);
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
    setState(42);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(52);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(50);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(44);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(45);
          match(NiloScriptParser::T__1);
          setState(46);
          term(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(47);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(48);
          match(NiloScriptParser::T__2);
          setState(49);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(54);
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

NiloScriptParser::PotContext* NiloScriptParser::TermContext::pot() {
  return getRuleContext<NiloScriptParser::PotContext>(0);
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
    setState(56);
    pot(0);
    _ctx->stop = _input->LT(-1);
    setState(66);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(64);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(58);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(59);
          match(NiloScriptParser::T__3);
          setState(60);
          pot(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(61);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(62);
          match(NiloScriptParser::T__4);
          setState(63);
          pot(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(68);
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

//----------------- PotContext ------------------------------------------------------------------

NiloScriptParser::PotContext::PotContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::FactContext* NiloScriptParser::PotContext::fact() {
  return getRuleContext<NiloScriptParser::FactContext>(0);
}

NiloScriptParser::PotContext* NiloScriptParser::PotContext::pot() {
  return getRuleContext<NiloScriptParser::PotContext>(0);
}


size_t NiloScriptParser::PotContext::getRuleIndex() const {
  return NiloScriptParser::RulePot;
}

void NiloScriptParser::PotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPot(this);
}

void NiloScriptParser::PotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPot(this);
}


std::any NiloScriptParser::PotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitPot(this);
  else
    return visitor->visitChildren(this);
}


NiloScriptParser::PotContext* NiloScriptParser::pot() {
   return pot(0);
}

NiloScriptParser::PotContext* NiloScriptParser::pot(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NiloScriptParser::PotContext *_localctx = _tracker.createInstance<PotContext>(_ctx, parentState);
  NiloScriptParser::PotContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, NiloScriptParser::RulePot, precedence);

    

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
    setState(70);
    fact();
    _ctx->stop = _input->LT(-1);
    setState(77);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PotContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePot);
        setState(72);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(73);
        match(NiloScriptParser::T__5);
        setState(74);
        fact(); 
      }
      setState(79);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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
  enterRule(_localctx, 12, NiloScriptParser::RuleFact);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NiloScriptParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(80);
        match(NiloScriptParser::T__6);
        setState(81);
        expression(0);
        setState(82);
        match(NiloScriptParser::T__7);
        break;
      }

      case NiloScriptParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(84);
        match(NiloScriptParser::INT);
        break;
      }

      case NiloScriptParser::VAR: {
        enterOuterAlt(_localctx, 3);
        setState(85);
        match(NiloScriptParser::VAR);
        break;
      }

      case NiloScriptParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(86);
        match(NiloScriptParser::STRING);
        break;
      }

      case NiloScriptParser::COMMENT: {
        enterOuterAlt(_localctx, 5);
        setState(87);
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
  enterRule(_localctx, 14, NiloScriptParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(NiloScriptParser::T__8);
    setState(91);
    match(NiloScriptParser::T__6);
    setState(92);
    expression(0);
    setState(93);
    match(NiloScriptParser::T__7);
   
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
  enterRule(_localctx, 16, NiloScriptParser::RuleInCase);
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
    setState(95);
    match(NiloScriptParser::T__9);
    setState(96);
    match(NiloScriptParser::T__6);
    setState(97);
    expression(0);
    setState(98);
    match(NiloScriptParser::OPERATOR);
    setState(99);
    expression(0);
    setState(100);
    match(NiloScriptParser::T__7);
    setState(101);
    match(NiloScriptParser::T__10);
    setState(109); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(105);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == NiloScriptParser::ENTER) {
                setState(102);
                match(NiloScriptParser::ENTER);
                setState(107);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(108);
              code();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(111); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(116);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NiloScriptParser::ENTER) {
      setState(113);
      match(NiloScriptParser::ENTER);
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(119);
    match(NiloScriptParser::T__11);
   
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
    case 5: return potSempred(antlrcpp::downCast<PotContext *>(context), predicateIndex);

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

bool NiloScriptParser::potSempred(PotContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 2);

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
