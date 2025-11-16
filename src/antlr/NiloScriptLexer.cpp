
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
      "T__0", "T__1", "T__2", "T__3", "T__4", "INT", "FLOAT", "VAR", "STRING", 
      "PLUS", "MINUS", "MUL", "DIV", "POW", "OPERATOR", "EQUAL", "OPAR", 
      "CPAR", "READ", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,24,221,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,
  	1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,4,5,77,
  	8,5,11,5,12,5,78,1,6,4,6,82,8,6,11,6,12,6,83,1,6,4,6,87,8,6,11,6,12,6,
  	88,1,6,4,6,92,8,6,11,6,12,6,93,1,7,4,7,97,8,7,11,7,12,7,98,1,8,1,8,5,
  	8,103,8,8,10,8,12,8,106,9,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,
  	1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	3,14,145,8,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,3,18,189,8,18,1,19,1,19,1,19,1,19,4,19,195,8,19,11,19,
  	12,19,196,1,19,1,19,1,20,4,20,202,8,20,11,20,12,20,203,1,21,4,21,207,
  	8,21,11,21,12,21,208,1,22,1,22,1,22,1,22,1,23,4,23,216,8,23,11,23,12,
  	23,217,1,23,1,23,0,0,24,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,
  	21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,
  	22,45,23,47,24,1,0,7,1,0,48,57,3,0,65,90,95,95,97,122,1,0,34,34,2,0,10,
  	10,13,13,1,0,9,9,3,0,9,10,13,13,32,32,2,0,9,10,12,13,235,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
  	0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,
  	1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,
  	0,0,0,47,1,0,0,0,1,49,1,0,0,0,3,57,1,0,0,0,5,62,1,0,0,0,7,64,1,0,0,0,
  	9,66,1,0,0,0,11,76,1,0,0,0,13,81,1,0,0,0,15,96,1,0,0,0,17,100,1,0,0,0,
  	19,109,1,0,0,0,21,111,1,0,0,0,23,113,1,0,0,0,25,115,1,0,0,0,27,117,1,
  	0,0,0,29,144,1,0,0,0,31,146,1,0,0,0,33,148,1,0,0,0,35,150,1,0,0,0,37,
  	188,1,0,0,0,39,190,1,0,0,0,41,201,1,0,0,0,43,206,1,0,0,0,45,210,1,0,0,
  	0,47,215,1,0,0,0,49,50,5,109,0,0,50,51,5,111,0,0,51,52,5,115,0,0,52,53,
  	5,116,0,0,53,54,5,114,0,0,54,55,5,97,0,0,55,56,5,114,0,0,56,2,1,0,0,0,
  	57,58,5,99,0,0,58,59,5,97,0,0,59,60,5,115,0,0,60,61,5,111,0,0,61,4,1,
  	0,0,0,62,63,5,123,0,0,63,6,1,0,0,0,64,65,5,125,0,0,65,8,1,0,0,0,66,67,
  	5,101,0,0,67,68,5,110,0,0,68,69,5,113,0,0,69,70,5,117,0,0,70,71,5,97,
  	0,0,71,72,5,110,0,0,72,73,5,116,0,0,73,74,5,111,0,0,74,10,1,0,0,0,75,
  	77,7,0,0,0,76,75,1,0,0,0,77,78,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,
  	12,1,0,0,0,80,82,7,0,0,0,81,80,1,0,0,0,82,83,1,0,0,0,83,81,1,0,0,0,83,
  	84,1,0,0,0,84,86,1,0,0,0,85,87,5,44,0,0,86,85,1,0,0,0,87,88,1,0,0,0,88,
  	86,1,0,0,0,88,89,1,0,0,0,89,91,1,0,0,0,90,92,7,0,0,0,91,90,1,0,0,0,92,
  	93,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,14,1,0,0,0,95,97,7,1,0,0,96,
  	95,1,0,0,0,97,98,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,16,1,0,0,0,100,
  	104,5,34,0,0,101,103,8,2,0,0,102,101,1,0,0,0,103,106,1,0,0,0,104,102,
  	1,0,0,0,104,105,1,0,0,0,105,107,1,0,0,0,106,104,1,0,0,0,107,108,5,34,
  	0,0,108,18,1,0,0,0,109,110,5,43,0,0,110,20,1,0,0,0,111,112,5,45,0,0,112,
  	22,1,0,0,0,113,114,5,42,0,0,114,24,1,0,0,0,115,116,5,47,0,0,116,26,1,
  	0,0,0,117,118,5,42,0,0,118,119,5,42,0,0,119,28,1,0,0,0,120,121,5,105,
  	0,0,121,122,5,103,0,0,122,123,5,117,0,0,123,124,5,97,0,0,124,145,5,108,
  	0,0,125,126,5,100,0,0,126,127,5,105,0,0,127,128,5,102,0,0,128,129,5,101,
  	0,0,129,130,5,114,0,0,130,131,5,101,0,0,131,132,5,110,0,0,132,133,5,116,
  	0,0,133,145,5,101,0,0,134,135,5,109,0,0,135,136,5,97,0,0,136,137,5,105,
  	0,0,137,138,5,111,0,0,138,145,5,114,0,0,139,140,5,109,0,0,140,141,5,101,
  	0,0,141,142,5,110,0,0,142,143,5,111,0,0,143,145,5,114,0,0,144,120,1,0,
  	0,0,144,125,1,0,0,0,144,134,1,0,0,0,144,139,1,0,0,0,145,30,1,0,0,0,146,
  	147,5,61,0,0,147,32,1,0,0,0,148,149,5,40,0,0,149,34,1,0,0,0,150,151,5,
  	41,0,0,151,36,1,0,0,0,152,153,5,112,0,0,153,154,5,101,0,0,154,155,5,103,
  	0,0,155,156,5,97,0,0,156,157,5,73,0,0,157,158,5,110,0,0,158,159,5,116,
  	0,0,159,160,5,101,0,0,160,161,5,105,0,0,161,162,5,114,0,0,162,189,5,111,
  	0,0,163,164,5,112,0,0,164,165,5,101,0,0,165,166,5,103,0,0,166,167,5,97,
  	0,0,167,168,5,70,0,0,168,169,5,108,0,0,169,170,5,117,0,0,170,171,5,116,
  	0,0,171,172,5,117,0,0,172,173,5,97,0,0,173,174,5,110,0,0,174,175,5,116,
  	0,0,175,189,5,101,0,0,176,177,5,112,0,0,177,178,5,101,0,0,178,179,5,103,
  	0,0,179,180,5,97,0,0,180,181,5,67,0,0,181,182,5,97,0,0,182,183,5,114,
  	0,0,183,184,5,97,0,0,184,185,5,99,0,0,185,186,5,116,0,0,186,187,5,101,
  	0,0,187,189,5,114,0,0,188,152,1,0,0,0,188,163,1,0,0,0,188,176,1,0,0,0,
  	189,38,1,0,0,0,190,191,5,58,0,0,191,192,5,41,0,0,192,194,1,0,0,0,193,
  	195,8,3,0,0,194,193,1,0,0,0,195,196,1,0,0,0,196,194,1,0,0,0,196,197,1,
  	0,0,0,197,198,1,0,0,0,198,199,6,19,0,0,199,40,1,0,0,0,200,202,7,4,0,0,
  	201,200,1,0,0,0,202,203,1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,42,
  	1,0,0,0,205,207,7,3,0,0,206,205,1,0,0,0,207,208,1,0,0,0,208,206,1,0,0,
  	0,208,209,1,0,0,0,209,44,1,0,0,0,210,211,7,5,0,0,211,212,1,0,0,0,212,
  	213,6,22,0,0,213,46,1,0,0,0,214,216,7,6,0,0,215,214,1,0,0,0,216,217,1,
  	0,0,0,217,215,1,0,0,0,217,218,1,0,0,0,218,219,1,0,0,0,219,220,6,23,0,
  	0,220,48,1,0,0,0,13,0,78,83,88,93,98,104,144,188,196,203,208,217,1,6,
  	0,0
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
