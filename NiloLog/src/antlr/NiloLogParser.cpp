
// Generated from NiloLog.g4 by ANTLR 4.13.2


#include "NiloLogListener.h"
#include "NiloLogVisitor.h"

#include "NiloLogParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NiloLogParserStaticData final {
  NiloLogParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NiloLogParserStaticData(const NiloLogParserStaticData&) = delete;
  NiloLogParserStaticData(NiloLogParserStaticData&&) = delete;
  NiloLogParserStaticData& operator=(const NiloLogParserStaticData&) = delete;
  NiloLogParserStaticData& operator=(NiloLogParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag nilologParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NiloLogParserStaticData> nilologParserStaticData = nullptr;

void nilologParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (nilologParserStaticData != nullptr) {
    return;
  }
#else
  assert(nilologParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NiloLogParserStaticData>(
    std::vector<std::string>{
      "stmts", "log", "input", "program"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "'exiba'", "'('", "')'", "'{'", "'}'", 
      "'['", "']'", "'/*'", "'*/'", "'PDF'", "'PNG'", "'entrada'", "':'", 
      "'em'", "'lexer'", "'parser'", "'representa\\u00E7\\u00E3o intermedi\\u00E1ria'"
    },
    std::vector<std::string>{
      "", "STRING", "BOOL", "INT", "FLOAT", "NILOCODE", "FORMAT", "PHASE", 
      "SHOW", "OPAR", "CPAR", "OBRA", "CBRA", "OKEY", "CKEY", "OASTSLA", 
      "CASTSLA", "PDF", "PNG", "ENTRY", "COLON", "IN", "LEXER", "PARSER", 
      "IR", "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,40,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,20,8,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,4,2,30,8,2,
  	11,2,12,2,31,1,2,1,2,1,2,1,3,1,3,1,3,1,3,0,0,4,0,2,4,6,0,1,1,0,1,4,37,
  	0,8,1,0,0,0,2,11,1,0,0,0,4,25,1,0,0,0,6,36,1,0,0,0,8,9,3,2,1,0,9,10,5,
  	0,0,1,10,1,1,0,0,0,11,12,5,8,0,0,12,13,5,9,0,0,13,14,5,7,0,0,14,15,5,
  	10,0,0,15,16,5,21,0,0,16,17,5,6,0,0,17,19,5,11,0,0,18,20,3,4,2,0,19,18,
  	1,0,0,0,19,20,1,0,0,0,20,21,1,0,0,0,21,22,5,26,0,0,22,23,3,6,3,0,23,24,
  	5,12,0,0,24,3,1,0,0,0,25,26,5,19,0,0,26,27,5,20,0,0,27,29,5,13,0,0,28,
  	30,7,0,0,0,29,28,1,0,0,0,30,31,1,0,0,0,31,29,1,0,0,0,31,32,1,0,0,0,32,
  	33,1,0,0,0,33,34,5,14,0,0,34,35,5,26,0,0,35,5,1,0,0,0,36,37,5,5,0,0,37,
  	38,5,26,0,0,38,7,1,0,0,0,2,19,31
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  nilologParserStaticData = std::move(staticData);
}

}

NiloLogParser::NiloLogParser(TokenStream *input) : NiloLogParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NiloLogParser::NiloLogParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NiloLogParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *nilologParserStaticData->atn, nilologParserStaticData->decisionToDFA, nilologParserStaticData->sharedContextCache, options);
}

NiloLogParser::~NiloLogParser() {
  delete _interpreter;
}

const atn::ATN& NiloLogParser::getATN() const {
  return *nilologParserStaticData->atn;
}

std::string NiloLogParser::getGrammarFileName() const {
  return "NiloLog.g4";
}

const std::vector<std::string>& NiloLogParser::getRuleNames() const {
  return nilologParserStaticData->ruleNames;
}

const dfa::Vocabulary& NiloLogParser::getVocabulary() const {
  return nilologParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NiloLogParser::getSerializedATN() const {
  return nilologParserStaticData->serializedATN;
}


//----------------- StmtsContext ------------------------------------------------------------------

NiloLogParser::StmtsContext::StmtsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloLogParser::LogContext* NiloLogParser::StmtsContext::log() {
  return getRuleContext<NiloLogParser::LogContext>(0);
}

tree::TerminalNode* NiloLogParser::StmtsContext::EOF() {
  return getToken(NiloLogParser::EOF, 0);
}


size_t NiloLogParser::StmtsContext::getRuleIndex() const {
  return NiloLogParser::RuleStmts;
}

void NiloLogParser::StmtsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloLogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmts(this);
}

void NiloLogParser::StmtsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloLogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmts(this);
}


std::any NiloLogParser::StmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloLogVisitor*>(visitor))
    return parserVisitor->visitStmts(this);
  else
    return visitor->visitChildren(this);
}

NiloLogParser::StmtsContext* NiloLogParser::stmts() {
  StmtsContext *_localctx = _tracker.createInstance<StmtsContext>(_ctx, getState());
  enterRule(_localctx, 0, NiloLogParser::RuleStmts);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    log();
    setState(9);
    match(NiloLogParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogContext ------------------------------------------------------------------

NiloLogParser::LogContext::LogContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloLogParser::LogContext::SHOW() {
  return getToken(NiloLogParser::SHOW, 0);
}

tree::TerminalNode* NiloLogParser::LogContext::OPAR() {
  return getToken(NiloLogParser::OPAR, 0);
}

tree::TerminalNode* NiloLogParser::LogContext::PHASE() {
  return getToken(NiloLogParser::PHASE, 0);
}

tree::TerminalNode* NiloLogParser::LogContext::CPAR() {
  return getToken(NiloLogParser::CPAR, 0);
}

tree::TerminalNode* NiloLogParser::LogContext::IN() {
  return getToken(NiloLogParser::IN, 0);
}

tree::TerminalNode* NiloLogParser::LogContext::FORMAT() {
  return getToken(NiloLogParser::FORMAT, 0);
}

tree::TerminalNode* NiloLogParser::LogContext::OBRA() {
  return getToken(NiloLogParser::OBRA, 0);
}

tree::TerminalNode* NiloLogParser::LogContext::ENTER() {
  return getToken(NiloLogParser::ENTER, 0);
}

NiloLogParser::ProgramContext* NiloLogParser::LogContext::program() {
  return getRuleContext<NiloLogParser::ProgramContext>(0);
}

tree::TerminalNode* NiloLogParser::LogContext::CBRA() {
  return getToken(NiloLogParser::CBRA, 0);
}

NiloLogParser::InputContext* NiloLogParser::LogContext::input() {
  return getRuleContext<NiloLogParser::InputContext>(0);
}


size_t NiloLogParser::LogContext::getRuleIndex() const {
  return NiloLogParser::RuleLog;
}

void NiloLogParser::LogContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloLogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLog(this);
}

void NiloLogParser::LogContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloLogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLog(this);
}


std::any NiloLogParser::LogContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloLogVisitor*>(visitor))
    return parserVisitor->visitLog(this);
  else
    return visitor->visitChildren(this);
}

NiloLogParser::LogContext* NiloLogParser::log() {
  LogContext *_localctx = _tracker.createInstance<LogContext>(_ctx, getState());
  enterRule(_localctx, 2, NiloLogParser::RuleLog);
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
    setState(11);
    match(NiloLogParser::SHOW);
    setState(12);
    match(NiloLogParser::OPAR);
    setState(13);
    match(NiloLogParser::PHASE);
    setState(14);
    match(NiloLogParser::CPAR);
    setState(15);
    match(NiloLogParser::IN);
    setState(16);
    match(NiloLogParser::FORMAT);
    setState(17);
    match(NiloLogParser::OBRA);
    setState(19);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NiloLogParser::ENTRY) {
      setState(18);
      input();
    }
    setState(21);
    match(NiloLogParser::ENTER);
    setState(22);
    program();
    setState(23);
    match(NiloLogParser::CBRA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

NiloLogParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloLogParser::InputContext::ENTRY() {
  return getToken(NiloLogParser::ENTRY, 0);
}

tree::TerminalNode* NiloLogParser::InputContext::COLON() {
  return getToken(NiloLogParser::COLON, 0);
}

tree::TerminalNode* NiloLogParser::InputContext::OKEY() {
  return getToken(NiloLogParser::OKEY, 0);
}

tree::TerminalNode* NiloLogParser::InputContext::CKEY() {
  return getToken(NiloLogParser::CKEY, 0);
}

tree::TerminalNode* NiloLogParser::InputContext::ENTER() {
  return getToken(NiloLogParser::ENTER, 0);
}

std::vector<tree::TerminalNode *> NiloLogParser::InputContext::STRING() {
  return getTokens(NiloLogParser::STRING);
}

tree::TerminalNode* NiloLogParser::InputContext::STRING(size_t i) {
  return getToken(NiloLogParser::STRING, i);
}

std::vector<tree::TerminalNode *> NiloLogParser::InputContext::BOOL() {
  return getTokens(NiloLogParser::BOOL);
}

tree::TerminalNode* NiloLogParser::InputContext::BOOL(size_t i) {
  return getToken(NiloLogParser::BOOL, i);
}

std::vector<tree::TerminalNode *> NiloLogParser::InputContext::INT() {
  return getTokens(NiloLogParser::INT);
}

tree::TerminalNode* NiloLogParser::InputContext::INT(size_t i) {
  return getToken(NiloLogParser::INT, i);
}

std::vector<tree::TerminalNode *> NiloLogParser::InputContext::FLOAT() {
  return getTokens(NiloLogParser::FLOAT);
}

tree::TerminalNode* NiloLogParser::InputContext::FLOAT(size_t i) {
  return getToken(NiloLogParser::FLOAT, i);
}


size_t NiloLogParser::InputContext::getRuleIndex() const {
  return NiloLogParser::RuleInput;
}

void NiloLogParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloLogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void NiloLogParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloLogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


std::any NiloLogParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloLogVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

NiloLogParser::InputContext* NiloLogParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 4, NiloLogParser::RuleInput);
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
    match(NiloLogParser::ENTRY);
    setState(26);
    match(NiloLogParser::COLON);
    setState(27);
    match(NiloLogParser::OKEY);
    setState(29); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(28);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(31); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 30) != 0));
    setState(33);
    match(NiloLogParser::CKEY);
    setState(34);
    match(NiloLogParser::ENTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

NiloLogParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloLogParser::ProgramContext::NILOCODE() {
  return getToken(NiloLogParser::NILOCODE, 0);
}

tree::TerminalNode* NiloLogParser::ProgramContext::ENTER() {
  return getToken(NiloLogParser::ENTER, 0);
}


size_t NiloLogParser::ProgramContext::getRuleIndex() const {
  return NiloLogParser::RuleProgram;
}

void NiloLogParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloLogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void NiloLogParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloLogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any NiloLogParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloLogVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

NiloLogParser::ProgramContext* NiloLogParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 6, NiloLogParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(NiloLogParser::NILOCODE);
    setState(37);
    match(NiloLogParser::ENTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void NiloLogParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  nilologParserInitialize();
#else
  ::antlr4::internal::call_once(nilologParserOnceFlag, nilologParserInitialize);
#endif
}
