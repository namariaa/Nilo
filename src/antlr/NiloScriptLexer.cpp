
// Generated from NiloScript.g4 by ANTLR 4.13.2


#include "NiloScriptLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct NiloScriptLexerStaticData final {
  NiloScriptLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NiloScriptLexerStaticData(const NiloScriptLexerStaticData&) = delete;
  NiloScriptLexerStaticData(NiloScriptLexerStaticData&&) = delete;
  NiloScriptLexerStaticData& operator=(const NiloScriptLexerStaticData&) = delete;
  NiloScriptLexerStaticData& operator=(NiloScriptLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag niloscriptlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NiloScriptLexerStaticData> niloscriptlexerLexerStaticData = nullptr;

void niloscriptlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (niloscriptlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(niloscriptlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NiloScriptLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "INT", "OPERATOR", "VAR", "STRING", "COMMENT", 
      "TAB", "ENTER", "SPACE", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,21,151,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,12,4,12,77,
  	8,12,11,12,12,12,78,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	3,13,105,8,13,1,14,4,14,108,8,14,11,14,12,14,109,1,15,1,15,5,15,114,8,
  	15,10,15,12,15,117,9,15,1,15,1,15,1,16,1,16,1,16,1,16,4,16,125,8,16,11,
  	16,12,16,126,1,16,1,16,1,17,4,17,132,8,17,11,17,12,17,133,1,18,4,18,137,
  	8,18,11,18,12,18,138,1,19,1,19,1,19,1,19,1,20,4,20,146,8,20,11,20,12,
  	20,147,1,20,1,20,0,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,
  	21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,1,0,
  	7,1,0,48,57,3,0,65,90,95,95,97,122,1,0,34,34,2,0,10,10,13,13,1,0,9,9,
  	3,0,9,10,13,13,32,32,2,0,9,10,12,13,160,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,
  	0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,
  	0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,
  	1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,
  	0,0,0,39,1,0,0,0,0,41,1,0,0,0,1,43,1,0,0,0,3,45,1,0,0,0,5,47,1,0,0,0,
  	7,49,1,0,0,0,9,51,1,0,0,0,11,53,1,0,0,0,13,56,1,0,0,0,15,58,1,0,0,0,17,
  	60,1,0,0,0,19,66,1,0,0,0,21,71,1,0,0,0,23,73,1,0,0,0,25,76,1,0,0,0,27,
  	104,1,0,0,0,29,107,1,0,0,0,31,111,1,0,0,0,33,120,1,0,0,0,35,131,1,0,0,
  	0,37,136,1,0,0,0,39,140,1,0,0,0,41,145,1,0,0,0,43,44,5,61,0,0,44,2,1,
  	0,0,0,45,46,5,43,0,0,46,4,1,0,0,0,47,48,5,45,0,0,48,6,1,0,0,0,49,50,5,
  	42,0,0,50,8,1,0,0,0,51,52,5,47,0,0,52,10,1,0,0,0,53,54,5,42,0,0,54,55,
  	5,42,0,0,55,12,1,0,0,0,56,57,5,40,0,0,57,14,1,0,0,0,58,59,5,41,0,0,59,
  	16,1,0,0,0,60,61,5,112,0,0,61,62,5,114,0,0,62,63,5,105,0,0,63,64,5,110,
  	0,0,64,65,5,116,0,0,65,18,1,0,0,0,66,67,5,99,0,0,67,68,5,97,0,0,68,69,
  	5,115,0,0,69,70,5,101,0,0,70,20,1,0,0,0,71,72,5,123,0,0,72,22,1,0,0,0,
  	73,74,5,125,0,0,74,24,1,0,0,0,75,77,7,0,0,0,76,75,1,0,0,0,77,78,1,0,0,
  	0,78,76,1,0,0,0,78,79,1,0,0,0,79,26,1,0,0,0,80,81,5,101,0,0,81,82,5,113,
  	0,0,82,83,5,117,0,0,83,84,5,97,0,0,84,105,5,108,0,0,85,86,5,100,0,0,86,
  	87,5,105,0,0,87,88,5,115,0,0,88,89,5,116,0,0,89,90,5,105,0,0,90,91,5,
  	110,0,0,91,92,5,99,0,0,92,105,5,116,0,0,93,94,5,98,0,0,94,95,5,105,0,
  	0,95,96,5,103,0,0,96,97,5,103,0,0,97,98,5,101,0,0,98,105,5,114,0,0,99,
  	100,5,109,0,0,100,101,5,105,0,0,101,102,5,110,0,0,102,103,5,111,0,0,103,
  	105,5,114,0,0,104,80,1,0,0,0,104,85,1,0,0,0,104,93,1,0,0,0,104,99,1,0,
  	0,0,105,28,1,0,0,0,106,108,7,1,0,0,107,106,1,0,0,0,108,109,1,0,0,0,109,
  	107,1,0,0,0,109,110,1,0,0,0,110,30,1,0,0,0,111,115,5,34,0,0,112,114,8,
  	2,0,0,113,112,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,1,0,0,0,
  	116,118,1,0,0,0,117,115,1,0,0,0,118,119,5,34,0,0,119,32,1,0,0,0,120,121,
  	5,58,0,0,121,122,5,41,0,0,122,124,1,0,0,0,123,125,8,3,0,0,124,123,1,0,
  	0,0,125,126,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,128,
  	129,6,16,0,0,129,34,1,0,0,0,130,132,7,4,0,0,131,130,1,0,0,0,132,133,1,
  	0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,36,1,0,0,0,135,137,7,3,0,0,
  	136,135,1,0,0,0,137,138,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,139,38,
  	1,0,0,0,140,141,7,5,0,0,141,142,1,0,0,0,142,143,6,19,0,0,143,40,1,0,0,
  	0,144,146,7,6,0,0,145,144,1,0,0,0,146,147,1,0,0,0,147,145,1,0,0,0,147,
  	148,1,0,0,0,148,149,1,0,0,0,149,150,6,20,0,0,150,42,1,0,0,0,9,0,78,104,
  	109,115,126,133,138,147,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  niloscriptlexerLexerStaticData = std::move(staticData);
}

}

NiloScriptLexer::NiloScriptLexer(CharStream *input) : Lexer(input) {
  NiloScriptLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *niloscriptlexerLexerStaticData->atn, niloscriptlexerLexerStaticData->decisionToDFA, niloscriptlexerLexerStaticData->sharedContextCache);
}

NiloScriptLexer::~NiloScriptLexer() {
  delete _interpreter;
}

std::string NiloScriptLexer::getGrammarFileName() const {
  return "NiloScript.g4";
}

const std::vector<std::string>& NiloScriptLexer::getRuleNames() const {
  return niloscriptlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& NiloScriptLexer::getChannelNames() const {
  return niloscriptlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& NiloScriptLexer::getModeNames() const {
  return niloscriptlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& NiloScriptLexer::getVocabulary() const {
  return niloscriptlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NiloScriptLexer::getSerializedATN() const {
  return niloscriptlexerLexerStaticData->serializedATN;
}

const atn::ATN& NiloScriptLexer::getATN() const {
  return *niloscriptlexerLexerStaticData->atn;
}




void NiloScriptLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  niloscriptlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(niloscriptlexerLexerOnceFlag, niloscriptlexerLexerInitialize);
#endif
}
