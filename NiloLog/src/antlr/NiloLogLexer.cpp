
// Generated from NiloLog.g4 by ANTLR 4.13.2


#include "NiloLogLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct NiloLogLexerStaticData final {
  NiloLogLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NiloLogLexerStaticData(const NiloLogLexerStaticData&) = delete;
  NiloLogLexerStaticData(NiloLogLexerStaticData&&) = delete;
  NiloLogLexerStaticData& operator=(const NiloLogLexerStaticData&) = delete;
  NiloLogLexerStaticData& operator=(NiloLogLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag nilologlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NiloLogLexerStaticData> nilologlexerLexerStaticData = nullptr;

void nilologlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (nilologlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(nilologlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NiloLogLexerStaticData>(
    std::vector<std::string>{
      "STRING", "BOOL", "INT", "FLOAT", "NILOCODE", "PHASE", "SHOW", "OPAR", 
      "CPAR", "OBRA", "CBRA", "OKEY", "CKEY", "OASTSLA", "CASTSLA", "ENTRY", 
      "PROGRAM", "COLON", "LEXER", "PARSER", "IR", "TAB", "ENTER", "SPACE", 
      "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "'exiba'", "'('", "')'", "'{'", "'}'", 
      "'['", "']'", "'/*'", "'*/'", "'entrada'", "'programa'", "':'", "'lexer'", 
      "'parser'", "'representa\\u00E7\\u00E3o intermedi\\u00E1ria'"
    },
    std::vector<std::string>{
      "", "STRING", "BOOL", "INT", "FLOAT", "NILOCODE", "PHASE", "SHOW", 
      "OPAR", "CPAR", "OBRA", "CBRA", "OKEY", "CKEY", "OASTSLA", "CASTSLA", 
      "ENTRY", "PROGRAM", "COLON", "LEXER", "PARSER", "IR", "TAB", "ENTER", 
      "SPACE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,25,214,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,5,0,54,8,0,10,0,12,0,57,9,
  	0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	3,1,76,8,1,1,2,4,2,79,8,2,11,2,12,2,80,1,3,4,3,84,8,3,11,3,12,3,85,1,
  	3,1,3,4,3,90,8,3,11,3,12,3,91,1,4,1,4,5,4,96,8,4,10,4,12,4,99,9,4,1,4,
  	1,4,1,5,1,5,1,5,3,5,106,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,21,4,21,193,8,21,11,21,12,21,194,1,21,1,21,1,22,4,22,
  	200,8,22,11,22,12,22,201,1,23,1,23,1,23,1,23,1,24,4,24,209,8,24,11,24,
  	12,24,210,1,24,1,24,1,97,0,25,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,
  	19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,1,0,6,1,0,34,34,1,0,48,57,1,0,9,9,2,0,10,10,
  	13,13,3,0,9,10,13,13,32,32,2,0,9,10,12,13,224,0,1,1,0,0,0,0,3,1,0,0,0,
  	0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,
  	0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,
  	0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,
  	37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,
  	0,0,0,0,49,1,0,0,0,1,51,1,0,0,0,3,75,1,0,0,0,5,78,1,0,0,0,7,83,1,0,0,
  	0,9,93,1,0,0,0,11,105,1,0,0,0,13,107,1,0,0,0,15,113,1,0,0,0,17,115,1,
  	0,0,0,19,117,1,0,0,0,21,119,1,0,0,0,23,121,1,0,0,0,25,123,1,0,0,0,27,
  	125,1,0,0,0,29,128,1,0,0,0,31,131,1,0,0,0,33,139,1,0,0,0,35,148,1,0,0,
  	0,37,150,1,0,0,0,39,156,1,0,0,0,41,163,1,0,0,0,43,192,1,0,0,0,45,199,
  	1,0,0,0,47,203,1,0,0,0,49,208,1,0,0,0,51,55,5,34,0,0,52,54,8,0,0,0,53,
  	52,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,58,1,0,0,0,57,
  	55,1,0,0,0,58,59,5,34,0,0,59,2,1,0,0,0,60,61,5,118,0,0,61,62,5,101,0,
  	0,62,63,5,114,0,0,63,64,5,100,0,0,64,65,5,97,0,0,65,66,5,100,0,0,66,67,
  	5,101,0,0,67,68,5,105,0,0,68,69,5,114,0,0,69,76,5,111,0,0,70,71,5,102,
  	0,0,71,72,5,97,0,0,72,73,5,108,0,0,73,74,5,115,0,0,74,76,5,111,0,0,75,
  	60,1,0,0,0,75,70,1,0,0,0,76,4,1,0,0,0,77,79,7,1,0,0,78,77,1,0,0,0,79,
  	80,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,6,1,0,0,0,82,84,7,1,0,0,83,
  	82,1,0,0,0,84,85,1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,87,1,0,0,0,87,
  	89,5,46,0,0,88,90,7,1,0,0,89,88,1,0,0,0,90,91,1,0,0,0,91,89,1,0,0,0,91,
  	92,1,0,0,0,92,8,1,0,0,0,93,97,3,27,13,0,94,96,9,0,0,0,95,94,1,0,0,0,96,
  	99,1,0,0,0,97,98,1,0,0,0,97,95,1,0,0,0,98,100,1,0,0,0,99,97,1,0,0,0,100,
  	101,3,29,14,0,101,10,1,0,0,0,102,106,3,37,18,0,103,106,3,39,19,0,104,
  	106,3,41,20,0,105,102,1,0,0,0,105,103,1,0,0,0,105,104,1,0,0,0,106,12,
  	1,0,0,0,107,108,5,101,0,0,108,109,5,120,0,0,109,110,5,105,0,0,110,111,
  	5,98,0,0,111,112,5,97,0,0,112,14,1,0,0,0,113,114,5,40,0,0,114,16,1,0,
  	0,0,115,116,5,41,0,0,116,18,1,0,0,0,117,118,5,123,0,0,118,20,1,0,0,0,
  	119,120,5,125,0,0,120,22,1,0,0,0,121,122,5,91,0,0,122,24,1,0,0,0,123,
  	124,5,93,0,0,124,26,1,0,0,0,125,126,5,47,0,0,126,127,5,42,0,0,127,28,
  	1,0,0,0,128,129,5,42,0,0,129,130,5,47,0,0,130,30,1,0,0,0,131,132,5,101,
  	0,0,132,133,5,110,0,0,133,134,5,116,0,0,134,135,5,114,0,0,135,136,5,97,
  	0,0,136,137,5,100,0,0,137,138,5,97,0,0,138,32,1,0,0,0,139,140,5,112,0,
  	0,140,141,5,114,0,0,141,142,5,111,0,0,142,143,5,103,0,0,143,144,5,114,
  	0,0,144,145,5,97,0,0,145,146,5,109,0,0,146,147,5,97,0,0,147,34,1,0,0,
  	0,148,149,5,58,0,0,149,36,1,0,0,0,150,151,5,108,0,0,151,152,5,101,0,0,
  	152,153,5,120,0,0,153,154,5,101,0,0,154,155,5,114,0,0,155,38,1,0,0,0,
  	156,157,5,112,0,0,157,158,5,97,0,0,158,159,5,114,0,0,159,160,5,115,0,
  	0,160,161,5,101,0,0,161,162,5,114,0,0,162,40,1,0,0,0,163,164,5,114,0,
  	0,164,165,5,101,0,0,165,166,5,112,0,0,166,167,5,114,0,0,167,168,5,101,
  	0,0,168,169,5,115,0,0,169,170,5,101,0,0,170,171,5,110,0,0,171,172,5,116,
  	0,0,172,173,5,97,0,0,173,174,5,231,0,0,174,175,5,227,0,0,175,176,5,111,
  	0,0,176,177,5,32,0,0,177,178,5,105,0,0,178,179,5,110,0,0,179,180,5,116,
  	0,0,180,181,5,101,0,0,181,182,5,114,0,0,182,183,5,109,0,0,183,184,5,101,
  	0,0,184,185,5,100,0,0,185,186,5,105,0,0,186,187,5,225,0,0,187,188,5,114,
  	0,0,188,189,5,105,0,0,189,190,5,97,0,0,190,42,1,0,0,0,191,193,7,2,0,0,
  	192,191,1,0,0,0,193,194,1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,196,
  	1,0,0,0,196,197,6,21,0,0,197,44,1,0,0,0,198,200,7,3,0,0,199,198,1,0,0,
  	0,200,201,1,0,0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,46,1,0,0,0,203,
  	204,7,4,0,0,204,205,1,0,0,0,205,206,6,23,0,0,206,48,1,0,0,0,207,209,7,
  	5,0,0,208,207,1,0,0,0,209,210,1,0,0,0,210,208,1,0,0,0,210,211,1,0,0,0,
  	211,212,1,0,0,0,212,213,6,24,0,0,213,50,1,0,0,0,11,0,55,75,80,85,91,97,
  	105,194,201,210,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  nilologlexerLexerStaticData = std::move(staticData);
}

}

NiloLogLexer::NiloLogLexer(CharStream *input) : Lexer(input) {
  NiloLogLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *nilologlexerLexerStaticData->atn, nilologlexerLexerStaticData->decisionToDFA, nilologlexerLexerStaticData->sharedContextCache);
}

NiloLogLexer::~NiloLogLexer() {
  delete _interpreter;
}

std::string NiloLogLexer::getGrammarFileName() const {
  return "NiloLog.g4";
}

const std::vector<std::string>& NiloLogLexer::getRuleNames() const {
  return nilologlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& NiloLogLexer::getChannelNames() const {
  return nilologlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& NiloLogLexer::getModeNames() const {
  return nilologlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& NiloLogLexer::getVocabulary() const {
  return nilologlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NiloLogLexer::getSerializedATN() const {
  return nilologlexerLexerStaticData->serializedATN;
}

const atn::ATN& NiloLogLexer::getATN() const {
  return *nilologlexerLexerStaticData->atn;
}




void NiloLogLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  nilologlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(nilologlexerLexerOnceFlag, nilologlexerLexerInitialize);
#endif
}
