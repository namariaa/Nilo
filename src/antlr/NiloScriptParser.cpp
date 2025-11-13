
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
      "print", "inCase", "input", "loop"
    },
    std::vector<std::string>{
      "", "'mostrar'", "'caso'", "'{'", "'}'", "'enquanto'", "", "", "", 
      "", "'+'", "'-'", "'*'", "'/'", "'**'", "", "'='", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "INT", "FLOAT", "VAR", "STRING", "PLUS", "MINUS", 
      "MUL", "DIV", "POW", "OPERATOR", "EQUAL", "OPAR", "CPAR", "READ", 
      "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,133,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,5,0,25,8,0,10,0,12,0,28,9,0,4,
  	0,30,8,0,11,0,12,0,31,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,42,8,1,1,2,
  	1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,57,8,3,10,3,12,3,
  	60,9,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,71,8,4,10,4,12,4,74,9,
  	4,1,5,1,5,1,5,1,5,1,5,3,5,81,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,
  	91,8,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,4,8,106,8,
  	8,11,8,12,8,107,1,8,1,8,1,9,3,9,113,8,9,1,9,1,9,3,9,117,8,9,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,4,10,127,8,10,11,10,12,10,128,1,10,1,10,
  	1,10,0,2,6,8,11,0,2,4,6,8,10,12,14,16,18,20,0,0,141,0,29,1,0,0,0,2,41,
  	1,0,0,0,4,43,1,0,0,0,6,47,1,0,0,0,8,61,1,0,0,0,10,80,1,0,0,0,12,90,1,
  	0,0,0,14,92,1,0,0,0,16,97,1,0,0,0,18,112,1,0,0,0,20,118,1,0,0,0,22,26,
  	3,2,1,0,23,25,5,22,0,0,24,23,1,0,0,0,25,28,1,0,0,0,26,24,1,0,0,0,26,27,
  	1,0,0,0,27,30,1,0,0,0,28,26,1,0,0,0,29,22,1,0,0,0,30,31,1,0,0,0,31,29,
  	1,0,0,0,31,32,1,0,0,0,32,33,1,0,0,0,33,34,5,0,0,1,34,1,1,0,0,0,35,42,
  	3,6,3,0,36,42,3,14,7,0,37,42,3,4,2,0,38,42,3,18,9,0,39,42,3,20,10,0,40,
  	42,3,16,8,0,41,35,1,0,0,0,41,36,1,0,0,0,41,37,1,0,0,0,41,38,1,0,0,0,41,
  	39,1,0,0,0,41,40,1,0,0,0,42,3,1,0,0,0,43,44,5,8,0,0,44,45,5,16,0,0,45,
  	46,3,6,3,0,46,5,1,0,0,0,47,48,6,3,-1,0,48,49,3,8,4,0,49,58,1,0,0,0,50,
  	51,10,3,0,0,51,52,5,10,0,0,52,57,3,8,4,0,53,54,10,2,0,0,54,55,5,11,0,
  	0,55,57,3,8,4,0,56,50,1,0,0,0,56,53,1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,
  	0,58,59,1,0,0,0,59,7,1,0,0,0,60,58,1,0,0,0,61,62,6,4,-1,0,62,63,3,10,
  	5,0,63,72,1,0,0,0,64,65,10,3,0,0,65,66,5,12,0,0,66,71,3,10,5,0,67,68,
  	10,2,0,0,68,69,5,13,0,0,69,71,3,10,5,0,70,64,1,0,0,0,70,67,1,0,0,0,71,
  	74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,9,1,0,0,0,74,72,1,0,0,0,75,
  	76,3,12,6,0,76,77,5,14,0,0,77,78,3,10,5,0,78,81,1,0,0,0,79,81,3,12,6,
  	0,80,75,1,0,0,0,80,79,1,0,0,0,81,11,1,0,0,0,82,83,5,17,0,0,83,84,3,6,
  	3,0,84,85,5,18,0,0,85,91,1,0,0,0,86,91,5,6,0,0,87,91,5,8,0,0,88,91,5,
  	9,0,0,89,91,5,20,0,0,90,82,1,0,0,0,90,86,1,0,0,0,90,87,1,0,0,0,90,88,
  	1,0,0,0,90,89,1,0,0,0,91,13,1,0,0,0,92,93,5,1,0,0,93,94,5,17,0,0,94,95,
  	3,6,3,0,95,96,5,18,0,0,96,15,1,0,0,0,97,98,5,2,0,0,98,99,5,17,0,0,99,
  	100,3,6,3,0,100,101,5,15,0,0,101,102,3,6,3,0,102,103,5,18,0,0,103,105,
  	5,3,0,0,104,106,3,2,1,0,105,104,1,0,0,0,106,107,1,0,0,0,107,105,1,0,0,
  	0,107,108,1,0,0,0,108,109,1,0,0,0,109,110,5,4,0,0,110,17,1,0,0,0,111,
  	113,5,8,0,0,112,111,1,0,0,0,112,113,1,0,0,0,113,114,1,0,0,0,114,116,5,
  	16,0,0,115,117,5,19,0,0,116,115,1,0,0,0,116,117,1,0,0,0,117,19,1,0,0,
  	0,118,119,5,5,0,0,119,120,5,17,0,0,120,121,3,6,3,0,121,122,5,15,0,0,122,
  	123,3,6,3,0,123,124,5,18,0,0,124,126,5,3,0,0,125,127,3,2,1,0,126,125,
  	1,0,0,0,127,128,1,0,0,0,128,126,1,0,0,0,128,129,1,0,0,0,129,130,1,0,0,
  	0,130,131,5,4,0,0,131,21,1,0,0,0,13,26,31,41,56,58,70,72,80,90,107,112,
  	116,128
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
    setState(29); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      code();
      setState(26);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NiloScriptParser::ENTER) {
        setState(23);
        match(NiloScriptParser::ENTER);
        setState(28);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(31); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1246054) != 0));
    setState(33);
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

NiloScriptParser::InputContext* NiloScriptParser::CodeContext::input() {
  return getRuleContext<NiloScriptParser::InputContext>(0);
}

NiloScriptParser::LoopContext* NiloScriptParser::CodeContext::loop() {
  return getRuleContext<NiloScriptParser::LoopContext>(0);
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
    setState(41);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(35);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(36);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(37);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(38);
      input();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(39);
      loop();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(40);
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

tree::TerminalNode* NiloScriptParser::AssignmentContext::EQUAL() {
  return getToken(NiloScriptParser::EQUAL, 0);
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
    setState(43);
    match(NiloScriptParser::VAR);
    setState(44);
    match(NiloScriptParser::EQUAL);
    setState(45);
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

tree::TerminalNode* NiloScriptParser::ExpressionContext::PLUS() {
  return getToken(NiloScriptParser::PLUS, 0);
}

tree::TerminalNode* NiloScriptParser::ExpressionContext::MINUS() {
  return getToken(NiloScriptParser::MINUS, 0);
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
    setState(48);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(58);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(56);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(50);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(51);
          match(NiloScriptParser::PLUS);
          setState(52);
          term(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(53);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(54);
          match(NiloScriptParser::MINUS);
          setState(55);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(60);
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

tree::TerminalNode* NiloScriptParser::TermContext::MUL() {
  return getToken(NiloScriptParser::MUL, 0);
}

tree::TerminalNode* NiloScriptParser::TermContext::DIV() {
  return getToken(NiloScriptParser::DIV, 0);
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
    setState(62);
    pot();
    _ctx->stop = _input->LT(-1);
    setState(72);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(70);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(64);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(65);
          match(NiloScriptParser::MUL);
          setState(66);
          pot();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(67);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(68);
          match(NiloScriptParser::DIV);
          setState(69);
          pot();
          break;
        }

        default:
          break;
        } 
      }
      setState(74);
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

tree::TerminalNode* NiloScriptParser::PotContext::POW() {
  return getToken(NiloScriptParser::POW, 0);
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
  PotContext *_localctx = _tracker.createInstance<PotContext>(_ctx, getState());
  enterRule(_localctx, 10, NiloScriptParser::RulePot);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(75);
      fact();

      setState(76);
      match(NiloScriptParser::POW);
      setState(77);
      pot();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(79);
      fact();
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

//----------------- FactContext ------------------------------------------------------------------

NiloScriptParser::FactContext::FactContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::FactContext::OPAR() {
  return getToken(NiloScriptParser::OPAR, 0);
}

NiloScriptParser::ExpressionContext* NiloScriptParser::FactContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* NiloScriptParser::FactContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
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
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NiloScriptParser::OPAR: {
        enterOuterAlt(_localctx, 1);
        setState(82);
        match(NiloScriptParser::OPAR);
        setState(83);
        expression(0);
        setState(84);
        match(NiloScriptParser::CPAR);
        break;
      }

      case NiloScriptParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(86);
        match(NiloScriptParser::INT);
        break;
      }

      case NiloScriptParser::VAR: {
        enterOuterAlt(_localctx, 3);
        setState(87);
        match(NiloScriptParser::VAR);
        break;
      }

      case NiloScriptParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(88);
        match(NiloScriptParser::STRING);
        break;
      }

      case NiloScriptParser::COMMENT: {
        enterOuterAlt(_localctx, 5);
        setState(89);
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

tree::TerminalNode* NiloScriptParser::PrintContext::OPAR() {
  return getToken(NiloScriptParser::OPAR, 0);
}

NiloScriptParser::ExpressionContext* NiloScriptParser::PrintContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* NiloScriptParser::PrintContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
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
    setState(92);
    match(NiloScriptParser::T__0);
    setState(93);
    match(NiloScriptParser::OPAR);
    setState(94);
    expression(0);
    setState(95);
    match(NiloScriptParser::CPAR);
   
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

tree::TerminalNode* NiloScriptParser::InCaseContext::OPAR() {
  return getToken(NiloScriptParser::OPAR, 0);
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

tree::TerminalNode* NiloScriptParser::InCaseContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
}

std::vector<NiloScriptParser::CodeContext *> NiloScriptParser::InCaseContext::code() {
  return getRuleContexts<NiloScriptParser::CodeContext>();
}

NiloScriptParser::CodeContext* NiloScriptParser::InCaseContext::code(size_t i) {
  return getRuleContext<NiloScriptParser::CodeContext>(i);
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
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(NiloScriptParser::T__1);
    setState(98);
    match(NiloScriptParser::OPAR);
    setState(99);
    expression(0);
    setState(100);
    match(NiloScriptParser::OPERATOR);
    setState(101);
    expression(0);
    setState(102);
    match(NiloScriptParser::CPAR);
    setState(103);
    match(NiloScriptParser::T__2);
    setState(105); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(104);
      code();
      setState(107); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1246054) != 0));
    setState(109);
    match(NiloScriptParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

NiloScriptParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::InputContext::EQUAL() {
  return getToken(NiloScriptParser::EQUAL, 0);
}

tree::TerminalNode* NiloScriptParser::InputContext::VAR() {
  return getToken(NiloScriptParser::VAR, 0);
}

tree::TerminalNode* NiloScriptParser::InputContext::READ() {
  return getToken(NiloScriptParser::READ, 0);
}


size_t NiloScriptParser::InputContext::getRuleIndex() const {
  return NiloScriptParser::RuleInput;
}

void NiloScriptParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void NiloScriptParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


std::any NiloScriptParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::InputContext* NiloScriptParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 18, NiloScriptParser::RuleInput);
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
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NiloScriptParser::VAR) {
      setState(111);
      match(NiloScriptParser::VAR);
    }
    setState(114);
    match(NiloScriptParser::EQUAL);
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NiloScriptParser::READ) {
      setState(115);
      match(NiloScriptParser::READ);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

NiloScriptParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::LoopContext::OPAR() {
  return getToken(NiloScriptParser::OPAR, 0);
}

std::vector<NiloScriptParser::ExpressionContext *> NiloScriptParser::LoopContext::expression() {
  return getRuleContexts<NiloScriptParser::ExpressionContext>();
}

NiloScriptParser::ExpressionContext* NiloScriptParser::LoopContext::expression(size_t i) {
  return getRuleContext<NiloScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* NiloScriptParser::LoopContext::OPERATOR() {
  return getToken(NiloScriptParser::OPERATOR, 0);
}

tree::TerminalNode* NiloScriptParser::LoopContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
}

std::vector<NiloScriptParser::CodeContext *> NiloScriptParser::LoopContext::code() {
  return getRuleContexts<NiloScriptParser::CodeContext>();
}

NiloScriptParser::CodeContext* NiloScriptParser::LoopContext::code(size_t i) {
  return getRuleContext<NiloScriptParser::CodeContext>(i);
}


size_t NiloScriptParser::LoopContext::getRuleIndex() const {
  return NiloScriptParser::RuleLoop;
}

void NiloScriptParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void NiloScriptParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}


std::any NiloScriptParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::LoopContext* NiloScriptParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 20, NiloScriptParser::RuleLoop);
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
    setState(118);
    match(NiloScriptParser::T__4);
    setState(119);
    match(NiloScriptParser::OPAR);
    setState(120);
    expression(0);
    setState(121);
    match(NiloScriptParser::OPERATOR);
    setState(122);
    expression(0);
    setState(123);
    match(NiloScriptParser::CPAR);
    setState(124);
    match(NiloScriptParser::T__2);
    setState(126); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(125);
      code();
      setState(128); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1246054) != 0));
    setState(130);
    match(NiloScriptParser::T__3);
   
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
