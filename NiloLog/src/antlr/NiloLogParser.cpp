
// Generated from NiloLog.g4 by ANTLR 4.9.2


#include "NiloLogListener.h"
#include "NiloLogVisitor.h"

#include "NiloLogParser.h"


using namespace antlrcpp;
using namespace antlr4;

NiloLogParser::NiloLogParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

NiloLogParser::~NiloLogParser() {
  delete _interpreter;
}

std::string NiloLogParser::getGrammarFileName() const {
  return "NiloLog.g4";
}

const std::vector<std::string>& NiloLogParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& NiloLogParser::getVocabulary() const {
  return _vocabulary;
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


antlrcpp::Any NiloLogParser::StmtsContext::accept(tree::ParseTreeVisitor *visitor) {
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


antlrcpp::Any NiloLogParser::LogContext::accept(tree::ParseTreeVisitor *visitor) {
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


antlrcpp::Any NiloLogParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
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
        ((1ULL << _la) & ((1ULL << NiloLogParser::STRING)
        | (1ULL << NiloLogParser::BOOL)
        | (1ULL << NiloLogParser::INT)
        | (1ULL << NiloLogParser::FLOAT))) != 0))) {
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
      ((1ULL << _la) & ((1ULL << NiloLogParser::STRING)
      | (1ULL << NiloLogParser::BOOL)
      | (1ULL << NiloLogParser::INT)
      | (1ULL << NiloLogParser::FLOAT))) != 0));
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


antlrcpp::Any NiloLogParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
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

// Static vars and initialization.
std::vector<dfa::DFA> NiloLogParser::_decisionToDFA;
atn::PredictionContextCache NiloLogParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN NiloLogParser::_atn;
std::vector<uint16_t> NiloLogParser::_serializedATN;

std::vector<std::string> NiloLogParser::_ruleNames = {
  "stmts", "log", "input", "program"
};

std::vector<std::string> NiloLogParser::_literalNames = {
  "", "", "", "", "", "", "", "", "'exiba'", "'('", "')'", "'{'", "'}'", 
  "'['", "']'", "'/*'", "'*/'", "'PDF'", "'PNG'", "'entrada'", "':'", "'em'", 
  "'lexer'", "'parser'", "'representa\u00E7\u00E3o intermedi\u00E1ria'"
};

std::vector<std::string> NiloLogParser::_symbolicNames = {
  "", "STRING", "BOOL", "INT", "FLOAT", "NILOCODE", "FORMAT", "PHASE", "SHOW", 
  "OPAR", "CPAR", "OBRA", "CBRA", "OKEY", "CKEY", "OASTSLA", "CASTSLA", 
  "PDF", "PNG", "ENTRY", "COLON", "IN", "LEXER", "PARSER", "IR", "TAB", 
  "ENTER", "SPACE", "WHITESPACE"
};

dfa::Vocabulary NiloLogParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> NiloLogParser::_tokenNames;

NiloLogParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x1e, 0x2a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x5, 0x3, 0x16, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x20, 
       0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x21, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x2, 0x2, 0x6, 0x2, 0x4, 
       0x6, 0x8, 0x2, 0x3, 0x3, 0x2, 0x3, 0x6, 0x2, 0x27, 0x2, 0xa, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1b, 0x3, 0x2, 
       0x2, 0x2, 0x8, 0x26, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x5, 0x4, 0x3, 
       0x2, 0xb, 0xc, 0x7, 0x2, 0x2, 0x3, 0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 
       0xd, 0xe, 0x7, 0xa, 0x2, 0x2, 0xe, 0xf, 0x7, 0xb, 0x2, 0x2, 0xf, 
       0x10, 0x7, 0x9, 0x2, 0x2, 0x10, 0x11, 0x7, 0xc, 0x2, 0x2, 0x11, 0x12, 
       0x7, 0x17, 0x2, 0x2, 0x12, 0x13, 0x7, 0x8, 0x2, 0x2, 0x13, 0x15, 
       0x7, 0xd, 0x2, 0x2, 0x14, 0x16, 0x5, 0x6, 0x4, 0x2, 0x15, 0x14, 0x3, 
       0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0x17, 0x18, 0x7, 0x1c, 0x2, 0x2, 0x18, 0x19, 0x5, 0x8, 
       0x5, 0x2, 0x19, 0x1a, 0x7, 0xe, 0x2, 0x2, 0x1a, 0x5, 0x3, 0x2, 0x2, 
       0x2, 0x1b, 0x1c, 0x7, 0x15, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x16, 0x2, 
       0x2, 0x1d, 0x1f, 0x7, 0xf, 0x2, 0x2, 0x1e, 0x20, 0x9, 0x2, 0x2, 0x2, 
       0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x10, 0x2, 0x2, 0x24, 0x25, 
       0x7, 0x1c, 0x2, 0x2, 0x25, 0x7, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x7, 
       0x7, 0x2, 0x2, 0x27, 0x28, 0x7, 0x1c, 0x2, 0x2, 0x28, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0x15, 0x21, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

NiloLogParser::Initializer NiloLogParser::_init;
