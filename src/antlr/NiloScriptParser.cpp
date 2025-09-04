
// Generated from NiloScript.g4 by ANTLR 4.9.2


#include "NiloScriptListener.h"
#include "NiloScriptVisitor.h"

#include "NiloScriptParser.h"


using namespace antlrcpp;
using namespace antlr4;

NiloScriptParser::NiloScriptParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

NiloScriptParser::~NiloScriptParser() {
  delete _interpreter;
}

std::string NiloScriptParser::getGrammarFileName() const {
  return "NiloScript.g4";
}

const std::vector<std::string>& NiloScriptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& NiloScriptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- RootContext ------------------------------------------------------------------

NiloScriptParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::ExpressionContext* NiloScriptParser::RootContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}

NiloScriptParser::PrintContext* NiloScriptParser::RootContext::print() {
  return getRuleContext<NiloScriptParser::PrintContext>(0);
}


size_t NiloScriptParser::RootContext::getRuleIndex() const {
  return NiloScriptParser::RuleRoot;
}

void NiloScriptParser::RootContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot(this);
}

void NiloScriptParser::RootContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot(this);
}


antlrcpp::Any NiloScriptParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitRoot(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::RootContext* NiloScriptParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 0, NiloScriptParser::RuleRoot);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(12);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NiloScriptParser::T__4:
      case NiloScriptParser::INT:
      case NiloScriptParser::VAR:
      case NiloScriptParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(10);
        expression(0);
        break;
      }

      case NiloScriptParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(11);
        print();
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


antlrcpp::Any NiloScriptParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
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
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, NiloScriptParser::RuleExpression, precedence);

    

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
    setState(15);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(25);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(23);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(17);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(18);
          match(NiloScriptParser::T__0);
          setState(19);
          term(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(20);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(21);
          match(NiloScriptParser::T__1);
          setState(22);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(27);
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


antlrcpp::Any NiloScriptParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
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
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, NiloScriptParser::RuleTerm, precedence);

    

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
    setState(29);
    fact();
    _ctx->stop = _input->LT(-1);
    setState(39);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(37);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(31);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(32);
          match(NiloScriptParser::T__2);
          setState(33);
          fact();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(34);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(35);
          match(NiloScriptParser::T__3);
          setState(36);
          fact();
          break;
        }

        default:
          break;
        } 
      }
      setState(41);
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


antlrcpp::Any NiloScriptParser::FactContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitFact(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::FactContext* NiloScriptParser::fact() {
  FactContext *_localctx = _tracker.createInstance<FactContext>(_ctx, getState());
  enterRule(_localctx, 6, NiloScriptParser::RuleFact);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NiloScriptParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        match(NiloScriptParser::T__4);
        setState(43);
        expression(0);
        setState(44);
        match(NiloScriptParser::T__5);
        break;
      }

      case NiloScriptParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(46);
        match(NiloScriptParser::INT);
        break;
      }

      case NiloScriptParser::VAR: {
        enterOuterAlt(_localctx, 3);
        setState(47);
        match(NiloScriptParser::VAR);
        break;
      }

      case NiloScriptParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(48);
        match(NiloScriptParser::STRING);
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


antlrcpp::Any NiloScriptParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::PrintContext* NiloScriptParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 8, NiloScriptParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(NiloScriptParser::T__6);
    setState(52);
    match(NiloScriptParser::T__4);
    setState(53);
    expression(0);
    setState(54);
    match(NiloScriptParser::T__5);
   
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
    case 1: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 2: return termSempred(dynamic_cast<TermContext *>(context), predicateIndex);

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

// Static vars and initialization.
std::vector<dfa::DFA> NiloScriptParser::_decisionToDFA;
atn::PredictionContextCache NiloScriptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN NiloScriptParser::_atn;
std::vector<uint16_t> NiloScriptParser::_serializedATN;

std::vector<std::string> NiloScriptParser::_ruleNames = {
  "root", "expression", "term", "fact", "print"
};

std::vector<std::string> NiloScriptParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'"
};

std::vector<std::string> NiloScriptParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "INT", "VAR", "STRING", "TAB", "ENTER", 
  "WHITESPACE"
};

dfa::Vocabulary NiloScriptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> NiloScriptParser::_tokenNames;

NiloScriptParser::Initializer::Initializer() {
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
       0x3, 0xf, 0x3b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 
       0x2, 0x5, 0x2, 0xf, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 
       0x1a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1d, 0xb, 0x3, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x7, 0x4, 0x28, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2b, 0xb, 
       0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x5, 0x5, 0x34, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x2, 0x4, 0x4, 0x6, 0x7, 0x2, 0x4, 
       0x6, 0x8, 0xa, 0x2, 0x2, 0x2, 0x3d, 0x2, 0xe, 0x3, 0x2, 0x2, 0x2, 
       0x4, 0x10, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x8, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0xa, 0x35, 0x3, 0x2, 0x2, 0x2, 0xc, 0xf, 
       0x5, 0x4, 0x3, 0x2, 0xd, 0xf, 0x5, 0xa, 0x6, 0x2, 0xe, 0xc, 0x3, 
       0x2, 0x2, 0x2, 0xe, 0xd, 0x3, 0x2, 0x2, 0x2, 0xf, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x10, 0x11, 0x8, 0x3, 0x1, 0x2, 0x11, 0x12, 0x5, 0x6, 0x4, 
       0x2, 0x12, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0xc, 0x5, 0x2, 0x2, 
       0x14, 0x15, 0x7, 0x3, 0x2, 0x2, 0x15, 0x1a, 0x5, 0x6, 0x4, 0x2, 0x16, 
       0x17, 0xc, 0x4, 0x2, 0x2, 0x17, 0x18, 0x7, 0x4, 0x2, 0x2, 0x18, 0x1a, 
       0x5, 0x6, 0x4, 0x2, 0x19, 0x13, 0x3, 0x2, 0x2, 0x2, 0x19, 0x16, 0x3, 
       0x2, 0x2, 0x2, 0x1a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x5, 0x3, 0x2, 0x2, 
       0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x8, 0x4, 0x1, 0x2, 
       0x1f, 0x20, 0x5, 0x8, 0x5, 0x2, 0x20, 0x29, 0x3, 0x2, 0x2, 0x2, 0x21, 
       0x22, 0xc, 0x5, 0x2, 0x2, 0x22, 0x23, 0x7, 0x5, 0x2, 0x2, 0x23, 0x28, 
       0x5, 0x8, 0x5, 0x2, 0x24, 0x25, 0xc, 0x4, 0x2, 0x2, 0x25, 0x26, 0x7, 
       0x6, 0x2, 0x2, 0x26, 0x28, 0x5, 0x8, 0x5, 0x2, 0x27, 0x21, 0x3, 0x2, 
       0x2, 0x2, 0x27, 0x24, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 
       0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 
       0x2a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x2d, 0x7, 0x7, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x4, 0x3, 0x2, 0x2e, 0x2f, 
       0x7, 0x8, 0x2, 0x2, 0x2f, 0x34, 0x3, 0x2, 0x2, 0x2, 0x30, 0x34, 0x7, 
       0xa, 0x2, 0x2, 0x31, 0x34, 0x7, 0xb, 0x2, 0x2, 0x32, 0x34, 0x7, 0xc, 
       0x2, 0x2, 0x33, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x33, 0x30, 0x3, 0x2, 0x2, 
       0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 
       0x34, 0x9, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x9, 0x2, 0x2, 0x36, 
       0x37, 0x7, 0x7, 0x2, 0x2, 0x37, 0x38, 0x5, 0x4, 0x3, 0x2, 0x38, 0x39, 
       0x7, 0x8, 0x2, 0x2, 0x39, 0xb, 0x3, 0x2, 0x2, 0x2, 0x8, 0xe, 0x19, 
       0x1b, 0x27, 0x29, 0x33, 
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

NiloScriptParser::Initializer NiloScriptParser::_init;
