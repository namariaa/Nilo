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
		T__9=10, T__10=11, INT=12, OPERATOR=13, VAR=14, STRING=15, COMMENT=16, 
		TAB=17, ENTER=18, SPACE=19, WHITESPACE=20;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "INT", "OPERATOR", "VAR", "STRING", "COMMENT", "TAB", 
			"ENTER", "SPACE", "WHITESPACE"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'", "'case'", 
			"'{'", "'}'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			"INT", "OPERATOR", "VAR", "STRING", "COMMENT", "TAB", "ENTER", "SPACE", 
			"WHITESPACE"
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
		"\u0004\u0000\u0014\u0092\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\n\u0001"+
		"\n\u0001\u000b\u0004\u000bH\b\u000b\u000b\u000b\f\u000bI\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\fd\b\f\u0001\r\u0004\rg\b\r\u000b"+
		"\r\f\rh\u0001\u000e\u0001\u000e\u0005\u000em\b\u000e\n\u000e\f\u000ep"+
		"\t\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0004\u000fx\b\u000f\u000b\u000f\f\u000fy\u0001\u000f\u0001\u000f"+
		"\u0001\u0010\u0004\u0010\u007f\b\u0010\u000b\u0010\f\u0010\u0080\u0001"+
		"\u0011\u0004\u0011\u0084\b\u0011\u000b\u0011\f\u0011\u0085\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0013\u0004\u0013\u008d\b\u0013"+
		"\u000b\u0013\f\u0013\u008e\u0001\u0013\u0001\u0013\u0000\u0000\u0014\u0001"+
		"\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007"+
		"\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d"+
		"\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014\u0001\u0000\u0007\u0001"+
		"\u000009\u0003\u0000AZ__az\u0001\u0000\"\"\u0002\u0000\n\n\r\r\u0001\u0000"+
		"\t\t\u0003\u0000\t\n\r\r  \u0002\u0000\t\n\f\r\u009b\u0000\u0001\u0001"+
		"\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001"+
		"\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000"+
		"\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000"+
		"\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000"+
		"\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000"+
		"\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000"+
		"\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000"+
		"\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000"+
		"\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'"+
		"\u0001\u0000\u0000\u0000\u0001)\u0001\u0000\u0000\u0000\u0003+\u0001\u0000"+
		"\u0000\u0000\u0005-\u0001\u0000\u0000\u0000\u0007/\u0001\u0000\u0000\u0000"+
		"\t1\u0001\u0000\u0000\u0000\u000b3\u0001\u0000\u0000\u0000\r5\u0001\u0000"+
		"\u0000\u0000\u000f7\u0001\u0000\u0000\u0000\u0011=\u0001\u0000\u0000\u0000"+
		"\u0013B\u0001\u0000\u0000\u0000\u0015D\u0001\u0000\u0000\u0000\u0017G"+
		"\u0001\u0000\u0000\u0000\u0019c\u0001\u0000\u0000\u0000\u001bf\u0001\u0000"+
		"\u0000\u0000\u001dj\u0001\u0000\u0000\u0000\u001fs\u0001\u0000\u0000\u0000"+
		"!~\u0001\u0000\u0000\u0000#\u0083\u0001\u0000\u0000\u0000%\u0087\u0001"+
		"\u0000\u0000\u0000\'\u008c\u0001\u0000\u0000\u0000)*\u0005=\u0000\u0000"+
		"*\u0002\u0001\u0000\u0000\u0000+,\u0005+\u0000\u0000,\u0004\u0001\u0000"+
		"\u0000\u0000-.\u0005-\u0000\u0000.\u0006\u0001\u0000\u0000\u0000/0\u0005"+
		"*\u0000\u00000\b\u0001\u0000\u0000\u000012\u0005/\u0000\u00002\n\u0001"+
		"\u0000\u0000\u000034\u0005(\u0000\u00004\f\u0001\u0000\u0000\u000056\u0005"+
		")\u0000\u00006\u000e\u0001\u0000\u0000\u000078\u0005p\u0000\u000089\u0005"+
		"r\u0000\u00009:\u0005i\u0000\u0000:;\u0005n\u0000\u0000;<\u0005t\u0000"+
		"\u0000<\u0010\u0001\u0000\u0000\u0000=>\u0005c\u0000\u0000>?\u0005a\u0000"+
		"\u0000?@\u0005s\u0000\u0000@A\u0005e\u0000\u0000A\u0012\u0001\u0000\u0000"+
		"\u0000BC\u0005{\u0000\u0000C\u0014\u0001\u0000\u0000\u0000DE\u0005}\u0000"+
		"\u0000E\u0016\u0001\u0000\u0000\u0000FH\u0007\u0000\u0000\u0000GF\u0001"+
		"\u0000\u0000\u0000HI\u0001\u0000\u0000\u0000IG\u0001\u0000\u0000\u0000"+
		"IJ\u0001\u0000\u0000\u0000J\u0018\u0001\u0000\u0000\u0000KL\u0005e\u0000"+
		"\u0000LM\u0005q\u0000\u0000MN\u0005u\u0000\u0000NO\u0005a\u0000\u0000"+
		"Od\u0005l\u0000\u0000PQ\u0005d\u0000\u0000QR\u0005i\u0000\u0000RS\u0005"+
		"s\u0000\u0000ST\u0005t\u0000\u0000TU\u0005i\u0000\u0000UV\u0005n\u0000"+
		"\u0000VW\u0005c\u0000\u0000Wd\u0005t\u0000\u0000XY\u0005b\u0000\u0000"+
		"YZ\u0005i\u0000\u0000Z[\u0005g\u0000\u0000[\\\u0005g\u0000\u0000\\]\u0005"+
		"e\u0000\u0000]d\u0005r\u0000\u0000^_\u0005m\u0000\u0000_`\u0005i\u0000"+
		"\u0000`a\u0005n\u0000\u0000ab\u0005o\u0000\u0000bd\u0005r\u0000\u0000"+
		"cK\u0001\u0000\u0000\u0000cP\u0001\u0000\u0000\u0000cX\u0001\u0000\u0000"+
		"\u0000c^\u0001\u0000\u0000\u0000d\u001a\u0001\u0000\u0000\u0000eg\u0007"+
		"\u0001\u0000\u0000fe\u0001\u0000\u0000\u0000gh\u0001\u0000\u0000\u0000"+
		"hf\u0001\u0000\u0000\u0000hi\u0001\u0000\u0000\u0000i\u001c\u0001\u0000"+
		"\u0000\u0000jn\u0005\"\u0000\u0000km\b\u0002\u0000\u0000lk\u0001\u0000"+
		"\u0000\u0000mp\u0001\u0000\u0000\u0000nl\u0001\u0000\u0000\u0000no\u0001"+
		"\u0000\u0000\u0000oq\u0001\u0000\u0000\u0000pn\u0001\u0000\u0000\u0000"+
		"qr\u0005\"\u0000\u0000r\u001e\u0001\u0000\u0000\u0000st\u0005:\u0000\u0000"+
		"tu\u0005)\u0000\u0000uw\u0001\u0000\u0000\u0000vx\b\u0003\u0000\u0000"+
		"wv\u0001\u0000\u0000\u0000xy\u0001\u0000\u0000\u0000yw\u0001\u0000\u0000"+
		"\u0000yz\u0001\u0000\u0000\u0000z{\u0001\u0000\u0000\u0000{|\u0006\u000f"+
		"\u0000\u0000| \u0001\u0000\u0000\u0000}\u007f\u0007\u0004\u0000\u0000"+
		"~}\u0001\u0000\u0000\u0000\u007f\u0080\u0001\u0000\u0000\u0000\u0080~"+
		"\u0001\u0000\u0000\u0000\u0080\u0081\u0001\u0000\u0000\u0000\u0081\"\u0001"+
		"\u0000\u0000\u0000\u0082\u0084\u0007\u0003\u0000\u0000\u0083\u0082\u0001"+
		"\u0000\u0000\u0000\u0084\u0085\u0001\u0000\u0000\u0000\u0085\u0083\u0001"+
		"\u0000\u0000\u0000\u0085\u0086\u0001\u0000\u0000\u0000\u0086$\u0001\u0000"+
		"\u0000\u0000\u0087\u0088\u0007\u0005\u0000\u0000\u0088\u0089\u0001\u0000"+
		"\u0000\u0000\u0089\u008a\u0006\u0012\u0000\u0000\u008a&\u0001\u0000\u0000"+
		"\u0000\u008b\u008d\u0007\u0006\u0000\u0000\u008c\u008b\u0001\u0000\u0000"+
		"\u0000\u008d\u008e\u0001\u0000\u0000\u0000\u008e\u008c\u0001\u0000\u0000"+
		"\u0000\u008e\u008f\u0001\u0000\u0000\u0000\u008f\u0090\u0001\u0000\u0000"+
		"\u0000\u0090\u0091\u0006\u0013\u0000\u0000\u0091(\u0001\u0000\u0000\u0000"+
		"\t\u0000Ichny\u0080\u0085\u008e\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}