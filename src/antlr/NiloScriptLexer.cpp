
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
      "T__9", "INT", "OPERATOR", "VAR", "STRING", "COMMENT", "TAB", "ENTER", 
      "SPACE", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'", "'case'", 
      "':'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "INT", "OPERATOR", "VAR", 
      "STRING", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,19,142,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,
  	8,1,8,1,9,1,9,1,10,4,10,68,8,10,11,10,12,10,69,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,3,11,96,8,11,1,12,4,12,99,8,12,11,12,12,12,
  	100,1,13,1,13,5,13,105,8,13,10,13,12,13,108,9,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,4,14,116,8,14,11,14,12,14,117,1,14,1,14,1,15,4,15,123,8,15,
  	11,15,12,15,124,1,16,4,16,128,8,16,11,16,12,16,129,1,17,1,17,1,17,1,17,
  	1,18,4,18,137,8,18,11,18,12,18,138,1,18,1,18,0,0,19,1,1,3,2,5,3,7,4,9,
  	5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,
  	35,18,37,19,1,0,7,1,0,48,57,3,0,65,90,95,95,97,122,1,0,34,34,2,0,10,10,
  	13,13,1,0,9,9,3,0,9,10,13,13,32,32,2,0,9,10,12,13,151,0,1,1,0,0,0,0,3,
  	1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
  	0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,
  	1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,
  	0,0,0,37,1,0,0,0,1,39,1,0,0,0,3,41,1,0,0,0,5,43,1,0,0,0,7,45,1,0,0,0,
  	9,47,1,0,0,0,11,49,1,0,0,0,13,51,1,0,0,0,15,53,1,0,0,0,17,59,1,0,0,0,
  	19,64,1,0,0,0,21,67,1,0,0,0,23,95,1,0,0,0,25,98,1,0,0,0,27,102,1,0,0,
  	0,29,111,1,0,0,0,31,122,1,0,0,0,33,127,1,0,0,0,35,131,1,0,0,0,37,136,
  	1,0,0,0,39,40,5,61,0,0,40,2,1,0,0,0,41,42,5,43,0,0,42,4,1,0,0,0,43,44,
  	5,45,0,0,44,6,1,0,0,0,45,46,5,42,0,0,46,8,1,0,0,0,47,48,5,47,0,0,48,10,
  	1,0,0,0,49,50,5,40,0,0,50,12,1,0,0,0,51,52,5,41,0,0,52,14,1,0,0,0,53,
  	54,5,112,0,0,54,55,5,114,0,0,55,56,5,105,0,0,56,57,5,110,0,0,57,58,5,
  	116,0,0,58,16,1,0,0,0,59,60,5,99,0,0,60,61,5,97,0,0,61,62,5,115,0,0,62,
  	63,5,101,0,0,63,18,1,0,0,0,64,65,5,58,0,0,65,20,1,0,0,0,66,68,7,0,0,0,
  	67,66,1,0,0,0,68,69,1,0,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,22,1,0,0,0,
  	71,72,5,101,0,0,72,73,5,113,0,0,73,74,5,117,0,0,74,75,5,97,0,0,75,96,
  	5,108,0,0,76,77,5,100,0,0,77,78,5,105,0,0,78,79,5,115,0,0,79,80,5,116,
  	0,0,80,81,5,105,0,0,81,82,5,110,0,0,82,83,5,99,0,0,83,96,5,116,0,0,84,
  	85,5,98,0,0,85,86,5,105,0,0,86,87,5,103,0,0,87,88,5,103,0,0,88,89,5,101,
  	0,0,89,96,5,114,0,0,90,91,5,109,0,0,91,92,5,105,0,0,92,93,5,110,0,0,93,
  	94,5,111,0,0,94,96,5,114,0,0,95,71,1,0,0,0,95,76,1,0,0,0,95,84,1,0,0,
  	0,95,90,1,0,0,0,96,24,1,0,0,0,97,99,7,1,0,0,98,97,1,0,0,0,99,100,1,0,
  	0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,26,1,0,0,0,102,106,5,34,0,0,103,
  	105,8,2,0,0,104,103,1,0,0,0,105,108,1,0,0,0,106,104,1,0,0,0,106,107,1,
  	0,0,0,107,109,1,0,0,0,108,106,1,0,0,0,109,110,5,34,0,0,110,28,1,0,0,0,
  	111,112,5,58,0,0,112,113,5,41,0,0,113,115,1,0,0,0,114,116,8,3,0,0,115,
  	114,1,0,0,0,116,117,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,119,1,
  	0,0,0,119,120,6,14,0,0,120,30,1,0,0,0,121,123,7,4,0,0,122,121,1,0,0,0,
  	123,124,1,0,0,0,124,122,1,0,0,0,124,125,1,0,0,0,125,32,1,0,0,0,126,128,
  	7,3,0,0,127,126,1,0,0,0,128,129,1,0,0,0,129,127,1,0,0,0,129,130,1,0,0,
  	0,130,34,1,0,0,0,131,132,7,5,0,0,132,133,1,0,0,0,133,134,6,17,0,0,134,
  	36,1,0,0,0,135,137,7,6,0,0,136,135,1,0,0,0,137,138,1,0,0,0,138,136,1,
  	0,0,0,138,139,1,0,0,0,139,140,1,0,0,0,140,141,6,18,0,0,141,38,1,0,0,0,
  	9,0,69,95,100,106,117,124,129,138,1,6,0,0
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
