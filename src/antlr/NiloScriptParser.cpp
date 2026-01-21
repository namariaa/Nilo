
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
      "program", "stmt", "assignment", "expression", "term", "fact", "expo", 
      "opPar", "typeSpecifier", "print", "input", "inCase", "loop", "function", 
      "functionCall", "list", "acessList"
    },
    std::vector<std::string>{
      "", "'mostrar'", "'caso'", "'sen\\u00E3o'", "'enquanto'", "'funcionalidade'", 
      "','", "'retorne'", "'+'", "'-'", "'*'", "'/'", "'%'", "'**'", "", 
      "", "", "", "", "", "", "", "'='", "'('", "')'", "'{'", "'}'", "'['", 
      "']'", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "PLUS", "MINUS", "MUL", "DIV", "MOD", 
      "POW", "OPERATOR", "INT", "FLOAT", "VAR", "STRING", "BOOL", "TYPE", 
      "RETURN_TYPE", "EQUAL", "OPAR", "CPAR", "OBRA", "CBRA", "OKEY", "CKEY", 
      "SC", "READ", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,35,249,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,4,0,36,8,0,11,0,12,0,37,1,0,1,0,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,3,1,64,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,73,8,2,1,3,1,3,1,3,
  	1,3,1,3,3,3,80,8,3,1,4,1,4,1,4,1,4,1,4,1,4,5,4,88,8,4,10,4,12,4,91,9,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,99,8,5,10,5,12,5,102,9,5,1,6,1,6,1,6,1,
  	6,1,6,3,6,109,8,6,1,7,1,7,1,7,1,7,1,7,3,7,116,8,7,1,8,1,8,1,9,1,9,1,9,
  	1,9,3,9,124,8,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,4,11,140,8,11,11,11,12,11,141,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,4,11,155,8,11,11,11,12,11,156,1,11,1,11,
  	1,11,1,11,4,11,163,8,11,11,11,12,11,164,1,11,1,11,3,11,169,8,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,4,12,180,8,12,11,12,12,12,181,
  	1,12,1,12,1,13,1,13,1,13,1,13,1,13,3,13,191,8,13,1,13,1,13,1,13,5,13,
  	196,8,13,10,13,12,13,199,9,13,1,13,1,13,1,13,1,13,4,13,205,8,13,11,13,
  	12,13,206,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,3,14,217,8,14,1,14,
  	1,14,5,14,221,8,14,10,14,12,14,224,9,14,1,14,1,14,1,15,1,15,1,15,1,15,
  	1,15,3,15,233,8,15,1,15,1,15,5,15,237,8,15,10,15,12,15,240,9,15,1,15,
  	1,15,1,16,1,16,1,16,1,16,1,16,1,16,0,2,8,10,17,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,0,5,1,0,8,9,1,0,10,12,1,0,15,19,2,0,17,17,20,
  	20,2,0,15,16,18,19,263,0,35,1,0,0,0,2,63,1,0,0,0,4,65,1,0,0,0,6,74,1,
  	0,0,0,8,81,1,0,0,0,10,92,1,0,0,0,12,108,1,0,0,0,14,115,1,0,0,0,16,117,
  	1,0,0,0,18,119,1,0,0,0,20,127,1,0,0,0,22,168,1,0,0,0,24,170,1,0,0,0,26,
  	185,1,0,0,0,28,213,1,0,0,0,30,227,1,0,0,0,32,243,1,0,0,0,34,36,3,2,1,
  	0,35,34,1,0,0,0,36,37,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,39,1,0,0,
  	0,39,40,5,0,0,1,40,1,1,0,0,0,41,42,3,18,9,0,42,43,5,29,0,0,43,64,1,0,
  	0,0,44,45,3,4,2,0,45,46,5,29,0,0,46,64,1,0,0,0,47,48,3,20,10,0,48,49,
  	5,29,0,0,49,64,1,0,0,0,50,64,3,24,12,0,51,64,3,22,11,0,52,64,3,26,13,
  	0,53,54,3,28,14,0,54,55,5,29,0,0,55,64,1,0,0,0,56,57,3,30,15,0,57,58,
  	5,29,0,0,58,64,1,0,0,0,59,60,3,6,3,0,60,61,5,29,0,0,61,64,1,0,0,0,62,
  	64,5,31,0,0,63,41,1,0,0,0,63,44,1,0,0,0,63,47,1,0,0,0,63,50,1,0,0,0,63,
  	51,1,0,0,0,63,52,1,0,0,0,63,53,1,0,0,0,63,56,1,0,0,0,63,59,1,0,0,0,63,
  	62,1,0,0,0,64,3,1,0,0,0,65,66,5,17,0,0,66,67,5,21,0,0,67,72,5,22,0,0,
  	68,73,3,8,4,0,69,73,3,20,10,0,70,73,3,32,16,0,71,73,3,28,14,0,72,68,1,
  	0,0,0,72,69,1,0,0,0,72,70,1,0,0,0,72,71,1,0,0,0,73,5,1,0,0,0,74,75,5,
  	17,0,0,75,79,5,22,0,0,76,80,3,8,4,0,77,80,3,32,16,0,78,80,3,28,14,0,79,
  	76,1,0,0,0,79,77,1,0,0,0,79,78,1,0,0,0,80,7,1,0,0,0,81,82,6,4,-1,0,82,
  	83,3,10,5,0,83,89,1,0,0,0,84,85,10,2,0,0,85,86,7,0,0,0,86,88,3,10,5,0,
  	87,84,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,9,1,0,0,0,
  	91,89,1,0,0,0,92,93,6,5,-1,0,93,94,3,12,6,0,94,100,1,0,0,0,95,96,10,2,
  	0,0,96,97,7,1,0,0,97,99,3,12,6,0,98,95,1,0,0,0,99,102,1,0,0,0,100,98,
  	1,0,0,0,100,101,1,0,0,0,101,11,1,0,0,0,102,100,1,0,0,0,103,104,3,14,7,
  	0,104,105,5,13,0,0,105,106,3,12,6,0,106,109,1,0,0,0,107,109,3,14,7,0,
  	108,103,1,0,0,0,108,107,1,0,0,0,109,13,1,0,0,0,110,111,5,23,0,0,111,112,
  	3,8,4,0,112,113,5,24,0,0,113,116,1,0,0,0,114,116,3,16,8,0,115,110,1,0,
  	0,0,115,114,1,0,0,0,116,15,1,0,0,0,117,118,7,2,0,0,118,17,1,0,0,0,119,
  	120,5,1,0,0,120,123,5,23,0,0,121,124,3,8,4,0,122,124,3,32,16,0,123,121,
  	1,0,0,0,123,122,1,0,0,0,124,125,1,0,0,0,125,126,5,24,0,0,126,19,1,0,0,
  	0,127,128,5,30,0,0,128,129,5,29,0,0,129,21,1,0,0,0,130,131,5,2,0,0,131,
  	132,5,23,0,0,132,133,3,8,4,0,133,134,5,14,0,0,134,135,3,8,4,0,135,136,
  	1,0,0,0,136,137,5,24,0,0,137,139,5,25,0,0,138,140,3,2,1,0,139,138,1,0,
  	0,0,140,141,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,143,1,0,0,0,143,
  	144,5,26,0,0,144,169,1,0,0,0,145,146,5,2,0,0,146,147,5,23,0,0,147,148,
  	3,8,4,0,148,149,5,14,0,0,149,150,3,8,4,0,150,151,1,0,0,0,151,152,5,24,
  	0,0,152,154,5,25,0,0,153,155,3,2,1,0,154,153,1,0,0,0,155,156,1,0,0,0,
  	156,154,1,0,0,0,156,157,1,0,0,0,157,158,1,0,0,0,158,159,5,26,0,0,159,
  	160,5,3,0,0,160,162,5,25,0,0,161,163,3,2,1,0,162,161,1,0,0,0,163,164,
  	1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,166,1,0,0,0,166,167,5,26,
  	0,0,167,169,1,0,0,0,168,130,1,0,0,0,168,145,1,0,0,0,169,23,1,0,0,0,170,
  	171,5,4,0,0,171,172,5,23,0,0,172,173,3,8,4,0,173,174,5,14,0,0,174,175,
  	3,8,4,0,175,176,1,0,0,0,176,177,5,24,0,0,177,179,5,25,0,0,178,180,3,2,
  	1,0,179,178,1,0,0,0,180,181,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,
  	183,1,0,0,0,183,184,5,26,0,0,184,25,1,0,0,0,185,186,5,5,0,0,186,187,5,
  	17,0,0,187,190,5,23,0,0,188,189,5,17,0,0,189,191,5,21,0,0,190,188,1,0,
  	0,0,190,191,1,0,0,0,191,197,1,0,0,0,192,193,5,6,0,0,193,194,5,17,0,0,
  	194,196,5,21,0,0,195,192,1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,197,
  	198,1,0,0,0,198,200,1,0,0,0,199,197,1,0,0,0,200,201,5,24,0,0,201,202,
  	5,21,0,0,202,204,5,25,0,0,203,205,3,2,1,0,204,203,1,0,0,0,205,206,1,0,
  	0,0,206,204,1,0,0,0,206,207,1,0,0,0,207,208,1,0,0,0,208,209,5,7,0,0,209,
  	210,7,3,0,0,210,211,5,29,0,0,211,212,5,26,0,0,212,27,1,0,0,0,213,214,
  	5,17,0,0,214,216,5,23,0,0,215,217,5,17,0,0,216,215,1,0,0,0,216,217,1,
  	0,0,0,217,222,1,0,0,0,218,219,5,6,0,0,219,221,5,17,0,0,220,218,1,0,0,
  	0,221,224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,225,1,0,0,0,224,
  	222,1,0,0,0,225,226,5,24,0,0,226,29,1,0,0,0,227,228,5,17,0,0,228,229,
  	5,21,0,0,229,230,5,22,0,0,230,232,5,27,0,0,231,233,7,4,0,0,232,231,1,
  	0,0,0,232,233,1,0,0,0,233,238,1,0,0,0,234,235,5,6,0,0,235,237,7,4,0,0,
  	236,234,1,0,0,0,237,240,1,0,0,0,238,236,1,0,0,0,238,239,1,0,0,0,239,241,
  	1,0,0,0,240,238,1,0,0,0,241,242,5,28,0,0,242,31,1,0,0,0,243,244,5,17,
  	0,0,244,245,5,27,0,0,245,246,5,15,0,0,246,247,5,28,0,0,247,33,1,0,0,0,
  	21,37,63,72,79,89,100,108,115,123,141,156,164,168,181,190,197,206,216,
  	222,232,238
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

std::vector<NiloScriptParser::StmtContext *> NiloScriptParser::ProgramContext::stmt() {
  return getRuleContexts<NiloScriptParser::StmtContext>();
}

NiloScriptParser::StmtContext* NiloScriptParser::ProgramContext::stmt(size_t i) {
  return getRuleContext<NiloScriptParser::StmtContext>(i);
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
    setState(35); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(34);
      stmt();
      setState(37); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3221356598) != 0));
    setState(39);
    match(NiloScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

NiloScriptParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::PrintContext* NiloScriptParser::StmtContext::print() {
  return getRuleContext<NiloScriptParser::PrintContext>(0);
}

tree::TerminalNode* NiloScriptParser::StmtContext::SC() {
  return getToken(NiloScriptParser::SC, 0);
}

NiloScriptParser::AssignmentContext* NiloScriptParser::StmtContext::assignment() {
  return getRuleContext<NiloScriptParser::AssignmentContext>(0);
}

NiloScriptParser::InputContext* NiloScriptParser::StmtContext::input() {
  return getRuleContext<NiloScriptParser::InputContext>(0);
}

NiloScriptParser::LoopContext* NiloScriptParser::StmtContext::loop() {
  return getRuleContext<NiloScriptParser::LoopContext>(0);
}

NiloScriptParser::InCaseContext* NiloScriptParser::StmtContext::inCase() {
  return getRuleContext<NiloScriptParser::InCaseContext>(0);
}

NiloScriptParser::FunctionContext* NiloScriptParser::StmtContext::function() {
  return getRuleContext<NiloScriptParser::FunctionContext>(0);
}

NiloScriptParser::FunctionCallContext* NiloScriptParser::StmtContext::functionCall() {
  return getRuleContext<NiloScriptParser::FunctionCallContext>(0);
}

NiloScriptParser::ListContext* NiloScriptParser::StmtContext::list() {
  return getRuleContext<NiloScriptParser::ListContext>(0);
}

NiloScriptParser::ExpressionContext* NiloScriptParser::StmtContext::expression() {
  return getRuleContext<NiloScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* NiloScriptParser::StmtContext::COMMENT() {
  return getToken(NiloScriptParser::COMMENT, 0);
}


size_t NiloScriptParser::StmtContext::getRuleIndex() const {
  return NiloScriptParser::RuleStmt;
}

void NiloScriptParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void NiloScriptParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


std::any NiloScriptParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::StmtContext* NiloScriptParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, NiloScriptParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(41);
      print();
      setState(42);
      match(NiloScriptParser::SC);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(44);
      assignment();
      setState(45);
      match(NiloScriptParser::SC);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(47);
      input();
      setState(48);
      match(NiloScriptParser::SC);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(50);
      loop();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(51);
      inCase();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(52);
      function();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(53);
      functionCall();
      setState(54);
      match(NiloScriptParser::SC);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(56);
      list();
      setState(57);
      match(NiloScriptParser::SC);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(59);
      expression();
      setState(60);
      match(NiloScriptParser::SC);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(62);
      match(NiloScriptParser::COMMENT);
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

tree::TerminalNode* NiloScriptParser::AssignmentContext::RETURN_TYPE() {
  return getToken(NiloScriptParser::RETURN_TYPE, 0);
}

tree::TerminalNode* NiloScriptParser::AssignmentContext::EQUAL() {
  return getToken(NiloScriptParser::EQUAL, 0);
}

NiloScriptParser::TermContext* NiloScriptParser::AssignmentContext::term() {
  return getRuleContext<NiloScriptParser::TermContext>(0);
}

NiloScriptParser::InputContext* NiloScriptParser::AssignmentContext::input() {
  return getRuleContext<NiloScriptParser::InputContext>(0);
}

NiloScriptParser::AcessListContext* NiloScriptParser::AssignmentContext::acessList() {
  return getRuleContext<NiloScriptParser::AcessListContext>(0);
}

NiloScriptParser::FunctionCallContext* NiloScriptParser::AssignmentContext::functionCall() {
  return getRuleContext<NiloScriptParser::FunctionCallContext>(0);
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
    setState(65);
    match(NiloScriptParser::VAR);
    setState(66);
    match(NiloScriptParser::RETURN_TYPE);
    setState(67);
    match(NiloScriptParser::EQUAL);
    setState(72);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(68);
      term(0);
      break;
    }

    case 2: {
      setState(69);
      input();
      break;
    }

    case 3: {
      setState(70);
      acessList();
      break;
    }

    case 4: {
      setState(71);
      functionCall();
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

//----------------- ExpressionContext ------------------------------------------------------------------

NiloScriptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::ExpressionContext::VAR() {
  return getToken(NiloScriptParser::VAR, 0);
}

tree::TerminalNode* NiloScriptParser::ExpressionContext::EQUAL() {
  return getToken(NiloScriptParser::EQUAL, 0);
}

NiloScriptParser::TermContext* NiloScriptParser::ExpressionContext::term() {
  return getRuleContext<NiloScriptParser::TermContext>(0);
}

NiloScriptParser::AcessListContext* NiloScriptParser::ExpressionContext::acessList() {
  return getRuleContext<NiloScriptParser::AcessListContext>(0);
}

NiloScriptParser::FunctionCallContext* NiloScriptParser::ExpressionContext::functionCall() {
  return getRuleContext<NiloScriptParser::FunctionCallContext>(0);
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
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, NiloScriptParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(NiloScriptParser::VAR);
    setState(75);
    match(NiloScriptParser::EQUAL);
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(76);
      term(0);
      break;
    }

    case 2: {
      setState(77);
      acessList();
      break;
    }

    case 3: {
      setState(78);
      functionCall();
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

tree::TerminalNode* NiloScriptParser::TermContext::PLUS() {
  return getToken(NiloScriptParser::PLUS, 0);
}

tree::TerminalNode* NiloScriptParser::TermContext::MINUS() {
  return getToken(NiloScriptParser::MINUS, 0);
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

    size_t _la = 0;

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
    setState(82);
    fact(0);
    _ctx->stop = _input->LT(-1);
    setState(89);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(84);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(85);
        _la = _input->LA(1);
        if (!(_la == NiloScriptParser::PLUS

        || _la == NiloScriptParser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(86);
        fact(0); 
      }
      setState(91);
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

NiloScriptParser::ExpoContext* NiloScriptParser::FactContext::expo() {
  return getRuleContext<NiloScriptParser::ExpoContext>(0);
}

NiloScriptParser::FactContext* NiloScriptParser::FactContext::fact() {
  return getRuleContext<NiloScriptParser::FactContext>(0);
}

tree::TerminalNode* NiloScriptParser::FactContext::MUL() {
  return getToken(NiloScriptParser::MUL, 0);
}

tree::TerminalNode* NiloScriptParser::FactContext::DIV() {
  return getToken(NiloScriptParser::DIV, 0);
}

tree::TerminalNode* NiloScriptParser::FactContext::MOD() {
  return getToken(NiloScriptParser::MOD, 0);
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
   return fact(0);
}

NiloScriptParser::FactContext* NiloScriptParser::fact(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NiloScriptParser::FactContext *_localctx = _tracker.createInstance<FactContext>(_ctx, parentState);
  NiloScriptParser::FactContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, NiloScriptParser::RuleFact, precedence);

    size_t _la = 0;

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
    setState(93);
    expo();
    _ctx->stop = _input->LT(-1);
    setState(100);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<FactContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFact);
        setState(95);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(96);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 7168) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(97);
        expo(); 
      }
      setState(102);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpoContext ------------------------------------------------------------------

NiloScriptParser::ExpoContext::ExpoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NiloScriptParser::OpParContext* NiloScriptParser::ExpoContext::opPar() {
  return getRuleContext<NiloScriptParser::OpParContext>(0);
}

tree::TerminalNode* NiloScriptParser::ExpoContext::POW() {
  return getToken(NiloScriptParser::POW, 0);
}

NiloScriptParser::ExpoContext* NiloScriptParser::ExpoContext::expo() {
  return getRuleContext<NiloScriptParser::ExpoContext>(0);
}


size_t NiloScriptParser::ExpoContext::getRuleIndex() const {
  return NiloScriptParser::RuleExpo;
}

void NiloScriptParser::ExpoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpo(this);
}

void NiloScriptParser::ExpoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpo(this);
}


std::any NiloScriptParser::ExpoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitExpo(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::ExpoContext* NiloScriptParser::expo() {
  ExpoContext *_localctx = _tracker.createInstance<ExpoContext>(_ctx, getState());
  enterRule(_localctx, 12, NiloScriptParser::RuleExpo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(103);
      opPar();

      setState(104);
      match(NiloScriptParser::POW);
      setState(105);
      expo();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(107);
      opPar();
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

//----------------- OpParContext ------------------------------------------------------------------

NiloScriptParser::OpParContext::OpParContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::OpParContext::OPAR() {
  return getToken(NiloScriptParser::OPAR, 0);
}

NiloScriptParser::TermContext* NiloScriptParser::OpParContext::term() {
  return getRuleContext<NiloScriptParser::TermContext>(0);
}

tree::TerminalNode* NiloScriptParser::OpParContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
}

NiloScriptParser::TypeSpecifierContext* NiloScriptParser::OpParContext::typeSpecifier() {
  return getRuleContext<NiloScriptParser::TypeSpecifierContext>(0);
}


size_t NiloScriptParser::OpParContext::getRuleIndex() const {
  return NiloScriptParser::RuleOpPar;
}

void NiloScriptParser::OpParContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpPar(this);
}

void NiloScriptParser::OpParContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpPar(this);
}


std::any NiloScriptParser::OpParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitOpPar(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::OpParContext* NiloScriptParser::opPar() {
  OpParContext *_localctx = _tracker.createInstance<OpParContext>(_ctx, getState());
  enterRule(_localctx, 14, NiloScriptParser::RuleOpPar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NiloScriptParser::OPAR: {
        enterOuterAlt(_localctx, 1);
        setState(110);
        match(NiloScriptParser::OPAR);
        setState(111);
        term(0);
        setState(112);
        match(NiloScriptParser::CPAR);
        break;
      }

      case NiloScriptParser::INT:
      case NiloScriptParser::FLOAT:
      case NiloScriptParser::VAR:
      case NiloScriptParser::STRING:
      case NiloScriptParser::BOOL: {
        enterOuterAlt(_localctx, 2);
        setState(114);
        typeSpecifier();
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

//----------------- TypeSpecifierContext ------------------------------------------------------------------

NiloScriptParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::TypeSpecifierContext::INT() {
  return getToken(NiloScriptParser::INT, 0);
}

tree::TerminalNode* NiloScriptParser::TypeSpecifierContext::VAR() {
  return getToken(NiloScriptParser::VAR, 0);
}

tree::TerminalNode* NiloScriptParser::TypeSpecifierContext::STRING() {
  return getToken(NiloScriptParser::STRING, 0);
}

tree::TerminalNode* NiloScriptParser::TypeSpecifierContext::BOOL() {
  return getToken(NiloScriptParser::BOOL, 0);
}

tree::TerminalNode* NiloScriptParser::TypeSpecifierContext::FLOAT() {
  return getToken(NiloScriptParser::FLOAT, 0);
}


size_t NiloScriptParser::TypeSpecifierContext::getRuleIndex() const {
  return NiloScriptParser::RuleTypeSpecifier;
}

void NiloScriptParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void NiloScriptParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


std::any NiloScriptParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::TypeSpecifierContext* NiloScriptParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 16, NiloScriptParser::RuleTypeSpecifier);
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
    setState(117);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1015808) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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

tree::TerminalNode* NiloScriptParser::PrintContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
}

NiloScriptParser::TermContext* NiloScriptParser::PrintContext::term() {
  return getRuleContext<NiloScriptParser::TermContext>(0);
}

NiloScriptParser::AcessListContext* NiloScriptParser::PrintContext::acessList() {
  return getRuleContext<NiloScriptParser::AcessListContext>(0);
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
  enterRule(_localctx, 18, NiloScriptParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(NiloScriptParser::T__0);
    setState(120);
    match(NiloScriptParser::OPAR);
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(121);
      term(0);
      break;
    }

    case 2: {
      setState(122);
      acessList();
      break;
    }

    default:
      break;
    }
    setState(125);
    match(NiloScriptParser::CPAR);
   
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

tree::TerminalNode* NiloScriptParser::InputContext::READ() {
  return getToken(NiloScriptParser::READ, 0);
}

tree::TerminalNode* NiloScriptParser::InputContext::SC() {
  return getToken(NiloScriptParser::SC, 0);
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
  enterRule(_localctx, 20, NiloScriptParser::RuleInput);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(NiloScriptParser::READ);
    setState(128);
    match(NiloScriptParser::SC);
   
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

tree::TerminalNode* NiloScriptParser::InCaseContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
}

std::vector<tree::TerminalNode *> NiloScriptParser::InCaseContext::OBRA() {
  return getTokens(NiloScriptParser::OBRA);
}

tree::TerminalNode* NiloScriptParser::InCaseContext::OBRA(size_t i) {
  return getToken(NiloScriptParser::OBRA, i);
}

std::vector<tree::TerminalNode *> NiloScriptParser::InCaseContext::CBRA() {
  return getTokens(NiloScriptParser::CBRA);
}

tree::TerminalNode* NiloScriptParser::InCaseContext::CBRA(size_t i) {
  return getToken(NiloScriptParser::CBRA, i);
}

std::vector<NiloScriptParser::TermContext *> NiloScriptParser::InCaseContext::term() {
  return getRuleContexts<NiloScriptParser::TermContext>();
}

NiloScriptParser::TermContext* NiloScriptParser::InCaseContext::term(size_t i) {
  return getRuleContext<NiloScriptParser::TermContext>(i);
}

tree::TerminalNode* NiloScriptParser::InCaseContext::OPERATOR() {
  return getToken(NiloScriptParser::OPERATOR, 0);
}

std::vector<NiloScriptParser::StmtContext *> NiloScriptParser::InCaseContext::stmt() {
  return getRuleContexts<NiloScriptParser::StmtContext>();
}

NiloScriptParser::StmtContext* NiloScriptParser::InCaseContext::stmt(size_t i) {
  return getRuleContext<NiloScriptParser::StmtContext>(i);
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
  enterRule(_localctx, 22, NiloScriptParser::RuleInCase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      match(NiloScriptParser::T__1);
      setState(131);
      match(NiloScriptParser::OPAR);

      setState(132);
      term(0);
      setState(133);
      match(NiloScriptParser::OPERATOR);
      setState(134);
      term(0);
      setState(136);
      match(NiloScriptParser::CPAR);
      setState(137);
      match(NiloScriptParser::OBRA);
      setState(139); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(138);
        stmt();
        setState(141); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3221356598) != 0));
      setState(143);
      match(NiloScriptParser::CBRA);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      match(NiloScriptParser::T__1);
      setState(146);
      match(NiloScriptParser::OPAR);

      setState(147);
      term(0);
      setState(148);
      match(NiloScriptParser::OPERATOR);
      setState(149);
      term(0);
      setState(151);
      match(NiloScriptParser::CPAR);
      setState(152);
      match(NiloScriptParser::OBRA);
      setState(154); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(153);
        stmt();
        setState(156); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3221356598) != 0));
      setState(158);
      match(NiloScriptParser::CBRA);
      setState(159);
      match(NiloScriptParser::T__2);
      setState(160);
      match(NiloScriptParser::OBRA);
      setState(162); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(161);
        stmt();
        setState(164); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3221356598) != 0));
      setState(166);
      match(NiloScriptParser::CBRA);
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

//----------------- LoopContext ------------------------------------------------------------------

NiloScriptParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::LoopContext::OPAR() {
  return getToken(NiloScriptParser::OPAR, 0);
}

tree::TerminalNode* NiloScriptParser::LoopContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
}

tree::TerminalNode* NiloScriptParser::LoopContext::OBRA() {
  return getToken(NiloScriptParser::OBRA, 0);
}

tree::TerminalNode* NiloScriptParser::LoopContext::CBRA() {
  return getToken(NiloScriptParser::CBRA, 0);
}

std::vector<NiloScriptParser::TermContext *> NiloScriptParser::LoopContext::term() {
  return getRuleContexts<NiloScriptParser::TermContext>();
}

NiloScriptParser::TermContext* NiloScriptParser::LoopContext::term(size_t i) {
  return getRuleContext<NiloScriptParser::TermContext>(i);
}

tree::TerminalNode* NiloScriptParser::LoopContext::OPERATOR() {
  return getToken(NiloScriptParser::OPERATOR, 0);
}

std::vector<NiloScriptParser::StmtContext *> NiloScriptParser::LoopContext::stmt() {
  return getRuleContexts<NiloScriptParser::StmtContext>();
}

NiloScriptParser::StmtContext* NiloScriptParser::LoopContext::stmt(size_t i) {
  return getRuleContext<NiloScriptParser::StmtContext>(i);
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
  enterRule(_localctx, 24, NiloScriptParser::RuleLoop);
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
    setState(170);
    match(NiloScriptParser::T__3);
    setState(171);
    match(NiloScriptParser::OPAR);

    setState(172);
    term(0);
    setState(173);
    match(NiloScriptParser::OPERATOR);
    setState(174);
    term(0);
    setState(176);
    match(NiloScriptParser::CPAR);
    setState(177);
    match(NiloScriptParser::OBRA);
    setState(179); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(178);
      stmt();
      setState(181); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3221356598) != 0));
    setState(183);
    match(NiloScriptParser::CBRA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

NiloScriptParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NiloScriptParser::FunctionContext::VAR() {
  return getTokens(NiloScriptParser::VAR);
}

tree::TerminalNode* NiloScriptParser::FunctionContext::VAR(size_t i) {
  return getToken(NiloScriptParser::VAR, i);
}

tree::TerminalNode* NiloScriptParser::FunctionContext::OPAR() {
  return getToken(NiloScriptParser::OPAR, 0);
}

tree::TerminalNode* NiloScriptParser::FunctionContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
}

std::vector<tree::TerminalNode *> NiloScriptParser::FunctionContext::RETURN_TYPE() {
  return getTokens(NiloScriptParser::RETURN_TYPE);
}

tree::TerminalNode* NiloScriptParser::FunctionContext::RETURN_TYPE(size_t i) {
  return getToken(NiloScriptParser::RETURN_TYPE, i);
}

tree::TerminalNode* NiloScriptParser::FunctionContext::OBRA() {
  return getToken(NiloScriptParser::OBRA, 0);
}

tree::TerminalNode* NiloScriptParser::FunctionContext::SC() {
  return getToken(NiloScriptParser::SC, 0);
}

tree::TerminalNode* NiloScriptParser::FunctionContext::CBRA() {
  return getToken(NiloScriptParser::CBRA, 0);
}

tree::TerminalNode* NiloScriptParser::FunctionContext::TYPE() {
  return getToken(NiloScriptParser::TYPE, 0);
}

std::vector<NiloScriptParser::StmtContext *> NiloScriptParser::FunctionContext::stmt() {
  return getRuleContexts<NiloScriptParser::StmtContext>();
}

NiloScriptParser::StmtContext* NiloScriptParser::FunctionContext::stmt(size_t i) {
  return getRuleContext<NiloScriptParser::StmtContext>(i);
}


size_t NiloScriptParser::FunctionContext::getRuleIndex() const {
  return NiloScriptParser::RuleFunction;
}

void NiloScriptParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void NiloScriptParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any NiloScriptParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::FunctionContext* NiloScriptParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 26, NiloScriptParser::RuleFunction);
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
    setState(185);
    match(NiloScriptParser::T__4);
    setState(186);
    match(NiloScriptParser::VAR);
    setState(187);
    match(NiloScriptParser::OPAR);
    setState(190);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NiloScriptParser::VAR) {
      setState(188);
      match(NiloScriptParser::VAR);
      setState(189);
      match(NiloScriptParser::RETURN_TYPE);
    }
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NiloScriptParser::T__5) {
      setState(192);
      match(NiloScriptParser::T__5);
      setState(193);
      match(NiloScriptParser::VAR);
      setState(194);
      match(NiloScriptParser::RETURN_TYPE);
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(200);
    match(NiloScriptParser::CPAR);
    setState(201);
    match(NiloScriptParser::RETURN_TYPE);
    setState(202);
    match(NiloScriptParser::OBRA);
    setState(204); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(203);
      stmt();
      setState(206); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3221356598) != 0));
    setState(208);
    match(NiloScriptParser::T__6);
    setState(209);
    _la = _input->LA(1);
    if (!(_la == NiloScriptParser::VAR

    || _la == NiloScriptParser::TYPE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(210);
    match(NiloScriptParser::SC);
    setState(211);
    match(NiloScriptParser::CBRA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

NiloScriptParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NiloScriptParser::FunctionCallContext::VAR() {
  return getTokens(NiloScriptParser::VAR);
}

tree::TerminalNode* NiloScriptParser::FunctionCallContext::VAR(size_t i) {
  return getToken(NiloScriptParser::VAR, i);
}

tree::TerminalNode* NiloScriptParser::FunctionCallContext::OPAR() {
  return getToken(NiloScriptParser::OPAR, 0);
}

tree::TerminalNode* NiloScriptParser::FunctionCallContext::CPAR() {
  return getToken(NiloScriptParser::CPAR, 0);
}


size_t NiloScriptParser::FunctionCallContext::getRuleIndex() const {
  return NiloScriptParser::RuleFunctionCall;
}

void NiloScriptParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void NiloScriptParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any NiloScriptParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::FunctionCallContext* NiloScriptParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 28, NiloScriptParser::RuleFunctionCall);
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
    setState(213);
    match(NiloScriptParser::VAR);
    setState(214);
    match(NiloScriptParser::OPAR);
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NiloScriptParser::VAR) {
      setState(215);
      match(NiloScriptParser::VAR);
    }
    setState(222);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NiloScriptParser::T__5) {
      setState(218);
      match(NiloScriptParser::T__5);
      setState(219);
      match(NiloScriptParser::VAR);
      setState(224);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(225);
    match(NiloScriptParser::CPAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

NiloScriptParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::ListContext::VAR() {
  return getToken(NiloScriptParser::VAR, 0);
}

tree::TerminalNode* NiloScriptParser::ListContext::RETURN_TYPE() {
  return getToken(NiloScriptParser::RETURN_TYPE, 0);
}

tree::TerminalNode* NiloScriptParser::ListContext::EQUAL() {
  return getToken(NiloScriptParser::EQUAL, 0);
}

tree::TerminalNode* NiloScriptParser::ListContext::OKEY() {
  return getToken(NiloScriptParser::OKEY, 0);
}

tree::TerminalNode* NiloScriptParser::ListContext::CKEY() {
  return getToken(NiloScriptParser::CKEY, 0);
}

std::vector<tree::TerminalNode *> NiloScriptParser::ListContext::INT() {
  return getTokens(NiloScriptParser::INT);
}

tree::TerminalNode* NiloScriptParser::ListContext::INT(size_t i) {
  return getToken(NiloScriptParser::INT, i);
}

std::vector<tree::TerminalNode *> NiloScriptParser::ListContext::FLOAT() {
  return getTokens(NiloScriptParser::FLOAT);
}

tree::TerminalNode* NiloScriptParser::ListContext::FLOAT(size_t i) {
  return getToken(NiloScriptParser::FLOAT, i);
}

std::vector<tree::TerminalNode *> NiloScriptParser::ListContext::STRING() {
  return getTokens(NiloScriptParser::STRING);
}

tree::TerminalNode* NiloScriptParser::ListContext::STRING(size_t i) {
  return getToken(NiloScriptParser::STRING, i);
}

std::vector<tree::TerminalNode *> NiloScriptParser::ListContext::BOOL() {
  return getTokens(NiloScriptParser::BOOL);
}

tree::TerminalNode* NiloScriptParser::ListContext::BOOL(size_t i) {
  return getToken(NiloScriptParser::BOOL, i);
}


size_t NiloScriptParser::ListContext::getRuleIndex() const {
  return NiloScriptParser::RuleList;
}

void NiloScriptParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void NiloScriptParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}


std::any NiloScriptParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::ListContext* NiloScriptParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 30, NiloScriptParser::RuleList);
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
    setState(227);
    match(NiloScriptParser::VAR);
    setState(228);
    match(NiloScriptParser::RETURN_TYPE);
    setState(229);
    match(NiloScriptParser::EQUAL);
    setState(230);
    match(NiloScriptParser::OKEY);
    setState(232);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 884736) != 0)) {
      setState(231);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 884736) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(238);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NiloScriptParser::T__5) {
      setState(234);
      match(NiloScriptParser::T__5);
      setState(235);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 884736) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(240);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(241);
    match(NiloScriptParser::CKEY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AcessListContext ------------------------------------------------------------------

NiloScriptParser::AcessListContext::AcessListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NiloScriptParser::AcessListContext::VAR() {
  return getToken(NiloScriptParser::VAR, 0);
}

tree::TerminalNode* NiloScriptParser::AcessListContext::OKEY() {
  return getToken(NiloScriptParser::OKEY, 0);
}

tree::TerminalNode* NiloScriptParser::AcessListContext::INT() {
  return getToken(NiloScriptParser::INT, 0);
}

tree::TerminalNode* NiloScriptParser::AcessListContext::CKEY() {
  return getToken(NiloScriptParser::CKEY, 0);
}


size_t NiloScriptParser::AcessListContext::getRuleIndex() const {
  return NiloScriptParser::RuleAcessList;
}

void NiloScriptParser::AcessListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcessList(this);
}

void NiloScriptParser::AcessListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NiloScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcessList(this);
}


std::any NiloScriptParser::AcessListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NiloScriptVisitor*>(visitor))
    return parserVisitor->visitAcessList(this);
  else
    return visitor->visitChildren(this);
}

NiloScriptParser::AcessListContext* NiloScriptParser::acessList() {
  AcessListContext *_localctx = _tracker.createInstance<AcessListContext>(_ctx, getState());
  enterRule(_localctx, 32, NiloScriptParser::RuleAcessList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(NiloScriptParser::VAR);
    setState(244);
    match(NiloScriptParser::OKEY);
    setState(245);
    match(NiloScriptParser::INT);
    setState(246);
    match(NiloScriptParser::CKEY);
   
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
    case 4: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);
    case 5: return factSempred(antlrcpp::downCast<FactContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NiloScriptParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool NiloScriptParser::factSempred(FactContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

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
