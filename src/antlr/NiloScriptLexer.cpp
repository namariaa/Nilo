
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
      "INT", "VAR", "STRING", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'", "'case'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "INT", "VAR", "STRING", "COMMENT", 
      "TAB", "ENTER", "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,17,114,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,4,9,62,8,
  	9,11,9,12,9,63,1,10,4,10,67,8,10,11,10,12,10,68,1,11,1,11,5,11,73,8,11,
  	10,11,12,11,76,9,11,1,11,1,11,1,12,1,12,1,12,1,12,4,12,84,8,12,11,12,
  	12,12,85,1,12,1,12,1,13,4,13,91,8,13,11,13,12,13,92,1,13,1,13,1,14,4,
  	14,98,8,14,11,14,12,14,99,1,14,1,14,1,15,1,15,1,15,1,15,1,16,4,16,109,
  	8,16,11,16,12,16,110,1,16,1,16,0,0,17,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,1,0,7,1,0,48,57,
  	3,0,65,90,95,95,97,122,1,0,34,34,2,0,10,10,13,13,1,0,9,9,3,0,9,10,13,
  	13,32,32,2,0,9,10,12,13,120,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,
  	1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,1,35,1,0,0,0,3,37,1,0,0,0,5,39,1,0,
  	0,0,7,41,1,0,0,0,9,43,1,0,0,0,11,45,1,0,0,0,13,47,1,0,0,0,15,49,1,0,0,
  	0,17,55,1,0,0,0,19,61,1,0,0,0,21,66,1,0,0,0,23,70,1,0,0,0,25,79,1,0,0,
  	0,27,90,1,0,0,0,29,97,1,0,0,0,31,103,1,0,0,0,33,108,1,0,0,0,35,36,5,61,
  	0,0,36,2,1,0,0,0,37,38,5,43,0,0,38,4,1,0,0,0,39,40,5,45,0,0,40,6,1,0,
  	0,0,41,42,5,42,0,0,42,8,1,0,0,0,43,44,5,47,0,0,44,10,1,0,0,0,45,46,5,
  	40,0,0,46,12,1,0,0,0,47,48,5,41,0,0,48,14,1,0,0,0,49,50,5,112,0,0,50,
  	51,5,114,0,0,51,52,5,105,0,0,52,53,5,110,0,0,53,54,5,116,0,0,54,16,1,
  	0,0,0,55,56,5,99,0,0,56,57,5,97,0,0,57,58,5,115,0,0,58,59,5,101,0,0,59,
  	18,1,0,0,0,60,62,7,0,0,0,61,60,1,0,0,0,62,63,1,0,0,0,63,61,1,0,0,0,63,
  	64,1,0,0,0,64,20,1,0,0,0,65,67,7,1,0,0,66,65,1,0,0,0,67,68,1,0,0,0,68,
  	66,1,0,0,0,68,69,1,0,0,0,69,22,1,0,0,0,70,74,5,34,0,0,71,73,8,2,0,0,72,
  	71,1,0,0,0,73,76,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,77,1,0,0,0,76,
  	74,1,0,0,0,77,78,5,34,0,0,78,24,1,0,0,0,79,80,5,58,0,0,80,81,5,41,0,0,
  	81,83,1,0,0,0,82,84,8,3,0,0,83,82,1,0,0,0,84,85,1,0,0,0,85,83,1,0,0,0,
  	85,86,1,0,0,0,86,87,1,0,0,0,87,88,6,12,0,0,88,26,1,0,0,0,89,91,7,4,0,
  	0,90,89,1,0,0,0,91,92,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,94,1,0,0,
  	0,94,95,6,13,0,0,95,28,1,0,0,0,96,98,7,3,0,0,97,96,1,0,0,0,98,99,1,0,
  	0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,101,1,0,0,0,101,102,6,14,0,0,102,
  	30,1,0,0,0,103,104,7,5,0,0,104,105,1,0,0,0,105,106,6,15,0,0,106,32,1,
  	0,0,0,107,109,7,6,0,0,108,107,1,0,0,0,109,110,1,0,0,0,110,108,1,0,0,0,
  	110,111,1,0,0,0,111,112,1,0,0,0,112,113,6,16,0,0,113,34,1,0,0,0,8,0,63,
  	68,74,85,92,99,110,1,6,0,0
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
