// Generated from /home/namaria/Gram-tica-com-ANTLR/src/antlr/NiloScript.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class NiloScriptLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, INT=13, OPERATOR=14, VAR=15, STRING=16, COMMENT=17, 
		TAB=18, ENTER=19, SPACE=20, WHITESPACE=21;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "INT", "OPERATOR", "VAR", "STRING", "COMMENT", 
			"TAB", "ENTER", "SPACE", "WHITESPACE"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'='", "'+'", "'-'", "'*'", "'/'", "'**'", "'('", "')'", "'print'", 
			"'case'", "'{'", "'}'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "INT", "OPERATOR", "VAR", "STRING", "COMMENT", "TAB", "ENTER", 
			"SPACE", "WHITESPACE"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public NiloScriptLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "NiloScript.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u0015\u0097\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0004\fM\b\f\u000b"+
		"\f\f\fN\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0003\ri\b"+
		"\r\u0001\u000e\u0004\u000el\b\u000e\u000b\u000e\f\u000em\u0001\u000f\u0001"+
		"\u000f\u0005\u000fr\b\u000f\n\u000f\f\u000fu\t\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0004\u0010}\b"+
		"\u0010\u000b\u0010\f\u0010~\u0001\u0010\u0001\u0010\u0001\u0011\u0004"+
		"\u0011\u0084\b\u0011\u000b\u0011\f\u0011\u0085\u0001\u0012\u0004\u0012"+
		"\u0089\b\u0012\u000b\u0012\f\u0012\u008a\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0014\u0004\u0014\u0092\b\u0014\u000b\u0014\f"+
		"\u0014\u0093\u0001\u0014\u0001\u0014\u0000\u0000\u0015\u0001\u0001\u0003"+
		"\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011"+
		"\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0010"+
		"!\u0011#\u0012%\u0013\'\u0014)\u0015\u0001\u0000\u0007\u0001\u000009\u0003"+
		"\u0000AZ__az\u0001\u0000\"\"\u0002\u0000\n\n\r\r\u0001\u0000\t\t\u0003"+
		"\u0000\t\n\r\r  \u0002\u0000\t\n\f\r\u00a0\u0000\u0001\u0001\u0000\u0000"+
		"\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000"+
		"\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000"+
		"\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000"+
		"\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000"+
		"\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000"+
		"\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000\u0000"+
		"\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000\u0000\u0000"+
		"\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001"+
		"\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'\u0001\u0000"+
		"\u0000\u0000\u0000)\u0001\u0000\u0000\u0000\u0001+\u0001\u0000\u0000\u0000"+
		"\u0003-\u0001\u0000\u0000\u0000\u0005/\u0001\u0000\u0000\u0000\u00071"+
		"\u0001\u0000\u0000\u0000\t3\u0001\u0000\u0000\u0000\u000b5\u0001\u0000"+
		"\u0000\u0000\r8\u0001\u0000\u0000\u0000\u000f:\u0001\u0000\u0000\u0000"+
		"\u0011<\u0001\u0000\u0000\u0000\u0013B\u0001\u0000\u0000\u0000\u0015G"+
		"\u0001\u0000\u0000\u0000\u0017I\u0001\u0000\u0000\u0000\u0019L\u0001\u0000"+
		"\u0000\u0000\u001bh\u0001\u0000\u0000\u0000\u001dk\u0001\u0000\u0000\u0000"+
		"\u001fo\u0001\u0000\u0000\u0000!x\u0001\u0000\u0000\u0000#\u0083\u0001"+
		"\u0000\u0000\u0000%\u0088\u0001\u0000\u0000\u0000\'\u008c\u0001\u0000"+
		"\u0000\u0000)\u0091\u0001\u0000\u0000\u0000+,\u0005=\u0000\u0000,\u0002"+
		"\u0001\u0000\u0000\u0000-.\u0005+\u0000\u0000.\u0004\u0001\u0000\u0000"+
		"\u0000/0\u0005-\u0000\u00000\u0006\u0001\u0000\u0000\u000012\u0005*\u0000"+
		"\u00002\b\u0001\u0000\u0000\u000034\u0005/\u0000\u00004\n\u0001\u0000"+
		"\u0000\u000056\u0005*\u0000\u000067\u0005*\u0000\u00007\f\u0001\u0000"+
		"\u0000\u000089\u0005(\u0000\u00009\u000e\u0001\u0000\u0000\u0000:;\u0005"+
		")\u0000\u0000;\u0010\u0001\u0000\u0000\u0000<=\u0005p\u0000\u0000=>\u0005"+
		"r\u0000\u0000>?\u0005i\u0000\u0000?@\u0005n\u0000\u0000@A\u0005t\u0000"+
		"\u0000A\u0012\u0001\u0000\u0000\u0000BC\u0005c\u0000\u0000CD\u0005a\u0000"+
		"\u0000DE\u0005s\u0000\u0000EF\u0005e\u0000\u0000F\u0014\u0001\u0000\u0000"+
		"\u0000GH\u0005{\u0000\u0000H\u0016\u0001\u0000\u0000\u0000IJ\u0005}\u0000"+
		"\u0000J\u0018\u0001\u0000\u0000\u0000KM\u0007\u0000\u0000\u0000LK\u0001"+
		"\u0000\u0000\u0000MN\u0001\u0000\u0000\u0000NL\u0001\u0000\u0000\u0000"+
		"NO\u0001\u0000\u0000\u0000O\u001a\u0001\u0000\u0000\u0000PQ\u0005e\u0000"+
		"\u0000QR\u0005q\u0000\u0000RS\u0005u\u0000\u0000ST\u0005a\u0000\u0000"+
		"Ti\u0005l\u0000\u0000UV\u0005d\u0000\u0000VW\u0005i\u0000\u0000WX\u0005"+
		"s\u0000\u0000XY\u0005t\u0000\u0000YZ\u0005i\u0000\u0000Z[\u0005n\u0000"+
		"\u0000[\\\u0005c\u0000\u0000\\i\u0005t\u0000\u0000]^\u0005b\u0000\u0000"+
		"^_\u0005i\u0000\u0000_`\u0005g\u0000\u0000`a\u0005g\u0000\u0000ab\u0005"+
		"e\u0000\u0000bi\u0005r\u0000\u0000cd\u0005m\u0000\u0000de\u0005i\u0000"+
		"\u0000ef\u0005n\u0000\u0000fg\u0005o\u0000\u0000gi\u0005r\u0000\u0000"+
		"hP\u0001\u0000\u0000\u0000hU\u0001\u0000\u0000\u0000h]\u0001\u0000\u0000"+
		"\u0000hc\u0001\u0000\u0000\u0000i\u001c\u0001\u0000\u0000\u0000jl\u0007"+
		"\u0001\u0000\u0000kj\u0001\u0000\u0000\u0000lm\u0001\u0000\u0000\u0000"+
		"mk\u0001\u0000\u0000\u0000mn\u0001\u0000\u0000\u0000n\u001e\u0001\u0000"+
		"\u0000\u0000os\u0005\"\u0000\u0000pr\b\u0002\u0000\u0000qp\u0001\u0000"+
		"\u0000\u0000ru\u0001\u0000\u0000\u0000sq\u0001\u0000\u0000\u0000st\u0001"+
		"\u0000\u0000\u0000tv\u0001\u0000\u0000\u0000us\u0001\u0000\u0000\u0000"+
		"vw\u0005\"\u0000\u0000w \u0001\u0000\u0000\u0000xy\u0005:\u0000\u0000"+
		"yz\u0005)\u0000\u0000z|\u0001\u0000\u0000\u0000{}\b\u0003\u0000\u0000"+
		"|{\u0001\u0000\u0000\u0000}~\u0001\u0000\u0000\u0000~|\u0001\u0000\u0000"+
		"\u0000~\u007f\u0001\u0000\u0000\u0000\u007f\u0080\u0001\u0000\u0000\u0000"+
		"\u0080\u0081\u0006\u0010\u0000\u0000\u0081\"\u0001\u0000\u0000\u0000\u0082"+
		"\u0084\u0007\u0004\u0000\u0000\u0083\u0082\u0001\u0000\u0000\u0000\u0084"+
		"\u0085\u0001\u0000\u0000\u0000\u0085\u0083\u0001\u0000\u0000\u0000\u0085"+
		"\u0086\u0001\u0000\u0000\u0000\u0086$\u0001\u0000\u0000\u0000\u0087\u0089"+
		"\u0007\u0003\u0000\u0000\u0088\u0087\u0001\u0000\u0000\u0000\u0089\u008a"+
		"\u0001\u0000\u0000\u0000\u008a\u0088\u0001\u0000\u0000\u0000\u008a\u008b"+
		"\u0001\u0000\u0000\u0000\u008b&\u0001\u0000\u0000\u0000\u008c\u008d\u0007"+
		"\u0005\u0000\u0000\u008d\u008e\u0001\u0000\u0000\u0000\u008e\u008f\u0006"+
		"\u0013\u0000\u0000\u008f(\u0001\u0000\u0000\u0000\u0090\u0092\u0007\u0006"+
		"\u0000\u0000\u0091\u0090\u0001\u0000\u0000\u0000\u0092\u0093\u0001\u0000"+
		"\u0000\u0000\u0093\u0091\u0001\u0000\u0000\u0000\u0093\u0094\u0001\u0000"+
		"\u0000\u0000\u0094\u0095\u0001\u0000\u0000\u0000\u0095\u0096\u0006\u0014"+
		"\u0000\u0000\u0096*\u0001\u0000\u0000\u0000\t\u0000Nhms~\u0085\u008a\u0093"+
		"\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}