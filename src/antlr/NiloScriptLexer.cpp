
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
      "T__9", "INT", "VAR", "STRING", "OPERATOR", "COMMENT", "TAB", "ENTER", 
      "SPACE", "WHITESPACE", "EQUALITY", "DIFFERENT", "BIG", "MINOR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'", "'case'", 
      "'):'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "INT", "VAR", "STRING", 
      "OPERATOR", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,19,163,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,10,4,10,77,
  	8,10,11,10,12,10,78,1,11,4,11,82,8,11,11,11,12,11,83,1,12,1,12,5,12,88,
  	8,12,10,12,12,12,91,9,12,1,12,1,12,1,13,1,13,1,13,1,13,3,13,99,8,13,1,
  	14,1,14,1,14,1,14,4,14,105,8,14,11,14,12,14,106,1,14,1,14,1,15,4,15,112,
  	8,15,11,15,12,15,113,1,15,1,15,1,16,4,16,119,8,16,11,16,12,16,120,1,16,
  	1,16,1,17,1,17,1,17,1,17,1,18,4,18,130,8,18,11,18,12,18,131,1,18,1,18,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,
  	0,0,23,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,0,41,0,43,0,45,0,1,0,7,1,0,48,
  	57,3,0,65,90,95,95,97,122,1,0,34,34,2,0,10,10,13,13,1,0,9,9,3,0,9,10,
  	13,13,32,32,2,0,9,10,12,13,168,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,1,47,
  	1,0,0,0,3,49,1,0,0,0,5,51,1,0,0,0,7,53,1,0,0,0,9,55,1,0,0,0,11,57,1,0,
  	0,0,13,59,1,0,0,0,15,61,1,0,0,0,17,67,1,0,0,0,19,72,1,0,0,0,21,76,1,0,
  	0,0,23,81,1,0,0,0,25,85,1,0,0,0,27,98,1,0,0,0,29,100,1,0,0,0,31,111,1,
  	0,0,0,33,118,1,0,0,0,35,124,1,0,0,0,37,129,1,0,0,0,39,135,1,0,0,0,41,
  	141,1,0,0,0,43,150,1,0,0,0,45,157,1,0,0,0,47,48,5,61,0,0,48,2,1,0,0,0,
  	49,50,5,43,0,0,50,4,1,0,0,0,51,52,5,45,0,0,52,6,1,0,0,0,53,54,5,42,0,
  	0,54,8,1,0,0,0,55,56,5,47,0,0,56,10,1,0,0,0,57,58,5,40,0,0,58,12,1,0,
  	0,0,59,60,5,41,0,0,60,14,1,0,0,0,61,62,5,112,0,0,62,63,5,114,0,0,63,64,
  	5,105,0,0,64,65,5,110,0,0,65,66,5,116,0,0,66,16,1,0,0,0,67,68,5,99,0,
  	0,68,69,5,97,0,0,69,70,5,115,0,0,70,71,5,101,0,0,71,18,1,0,0,0,72,73,
  	5,41,0,0,73,74,5,58,0,0,74,20,1,0,0,0,75,77,7,0,0,0,76,75,1,0,0,0,77,
  	78,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,22,1,0,0,0,80,82,7,1,0,0,81,
  	80,1,0,0,0,82,83,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,24,1,0,0,0,85,
  	89,5,34,0,0,86,88,8,2,0,0,87,86,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,0,89,
  	90,1,0,0,0,90,92,1,0,0,0,91,89,1,0,0,0,92,93,5,34,0,0,93,26,1,0,0,0,94,
  	99,3,39,19,0,95,99,3,41,20,0,96,99,3,43,21,0,97,99,3,45,22,0,98,94,1,
  	0,0,0,98,95,1,0,0,0,98,96,1,0,0,0,98,97,1,0,0,0,99,28,1,0,0,0,100,101,
  	5,58,0,0,101,102,5,41,0,0,102,104,1,0,0,0,103,105,8,3,0,0,104,103,1,0,
  	0,0,105,106,1,0,0,0,106,104,1,0,0,0,106,107,1,0,0,0,107,108,1,0,0,0,108,
  	109,6,14,0,0,109,30,1,0,0,0,110,112,7,4,0,0,111,110,1,0,0,0,112,113,1,
  	0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,115,1,0,0,0,115,116,6,15,0,
  	0,116,32,1,0,0,0,117,119,7,3,0,0,118,117,1,0,0,0,119,120,1,0,0,0,120,
  	118,1,0,0,0,120,121,1,0,0,0,121,122,1,0,0,0,122,123,6,16,0,0,123,34,1,
  	0,0,0,124,125,7,5,0,0,125,126,1,0,0,0,126,127,6,17,0,0,127,36,1,0,0,0,
  	128,130,7,6,0,0,129,128,1,0,0,0,130,131,1,0,0,0,131,129,1,0,0,0,131,132,
  	1,0,0,0,132,133,1,0,0,0,133,134,6,18,0,0,134,38,1,0,0,0,135,136,5,101,
  	0,0,136,137,5,113,0,0,137,138,5,117,0,0,138,139,5,97,0,0,139,140,5,108,
  	0,0,140,40,1,0,0,0,141,142,5,100,0,0,142,143,5,105,0,0,143,144,5,115,
  	0,0,144,145,5,116,0,0,145,146,5,105,0,0,146,147,5,110,0,0,147,148,5,99,
  	0,0,148,149,5,116,0,0,149,42,1,0,0,0,150,151,5,98,0,0,151,152,5,105,0,
  	0,152,153,5,103,0,0,153,154,5,103,0,0,154,155,5,101,0,0,155,156,5,114,
  	0,0,156,44,1,0,0,0,157,158,5,109,0,0,158,159,5,105,0,0,159,160,5,110,
  	0,0,160,161,5,111,0,0,161,162,5,114,0,0,162,46,1,0,0,0,9,0,78,83,89,98,
  	106,113,120,131,1,6,0,0
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
