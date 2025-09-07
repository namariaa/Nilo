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
		T__9=10, INT=11, OPERATOR=12, VAR=13, STRING=14, COMMENT=15, TAB=16, ENTER=17, 
		SPACE=18, WHITESPACE=19;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "INT", "OPERATOR", "VAR", "STRING", "COMMENT", "TAB", "ENTER", 
			"SPACE", "WHITESPACE"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'", "'case'", 
			"':'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, "INT", 
			"OPERATOR", "VAR", "STRING", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
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
		"\u0004\u0000\u0013\u008e\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\n\u0004\nD\b\n\u000b\n\f\nE\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003"+
		"\u000b`\b\u000b\u0001\f\u0004\fc\b\f\u000b\f\f\fd\u0001\r\u0001\r\u0005"+
		"\ri\b\r\n\r\f\rl\t\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0004\u000et\b\u000e\u000b\u000e\f\u000eu\u0001\u000e\u0001"+
		"\u000e\u0001\u000f\u0004\u000f{\b\u000f\u000b\u000f\f\u000f|\u0001\u0010"+
		"\u0004\u0010\u0080\b\u0010\u000b\u0010\f\u0010\u0081\u0001\u0011\u0001"+
		"\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0004\u0012\u0089\b\u0012\u000b"+
		"\u0012\f\u0012\u008a\u0001\u0012\u0001\u0012\u0000\u0000\u0013\u0001\u0001"+
		"\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f"+
		"\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f"+
		"\u001f\u0010!\u0011#\u0012%\u0013\u0001\u0000\u0007\u0001\u000009\u0003"+
		"\u0000AZ__az\u0001\u0000\"\"\u0002\u0000\n\n\r\r\u0001\u0000\t\t\u0003"+
		"\u0000\t\n\r\r  \u0002\u0000\t\n\f\r\u0097\u0000\u0001\u0001\u0000\u0000"+
		"\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000"+
		"\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000"+
		"\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000"+
		"\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000"+
		"\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000"+
		"\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000\u0000"+
		"\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000\u0000\u0000"+
		"\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001"+
		"\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0001\'\u0001\u0000"+
		"\u0000\u0000\u0003)\u0001\u0000\u0000\u0000\u0005+\u0001\u0000\u0000\u0000"+
		"\u0007-\u0001\u0000\u0000\u0000\t/\u0001\u0000\u0000\u0000\u000b1\u0001"+
		"\u0000\u0000\u0000\r3\u0001\u0000\u0000\u0000\u000f5\u0001\u0000\u0000"+
		"\u0000\u0011;\u0001\u0000\u0000\u0000\u0013@\u0001\u0000\u0000\u0000\u0015"+
		"C\u0001\u0000\u0000\u0000\u0017_\u0001\u0000\u0000\u0000\u0019b\u0001"+
		"\u0000\u0000\u0000\u001bf\u0001\u0000\u0000\u0000\u001do\u0001\u0000\u0000"+
		"\u0000\u001fz\u0001\u0000\u0000\u0000!\u007f\u0001\u0000\u0000\u0000#"+
		"\u0083\u0001\u0000\u0000\u0000%\u0088\u0001\u0000\u0000\u0000\'(\u0005"+
		"=\u0000\u0000(\u0002\u0001\u0000\u0000\u0000)*\u0005+\u0000\u0000*\u0004"+
		"\u0001\u0000\u0000\u0000+,\u0005-\u0000\u0000,\u0006\u0001\u0000\u0000"+
		"\u0000-.\u0005*\u0000\u0000.\b\u0001\u0000\u0000\u0000/0\u0005/\u0000"+
		"\u00000\n\u0001\u0000\u0000\u000012\u0005(\u0000\u00002\f\u0001\u0000"+
		"\u0000\u000034\u0005)\u0000\u00004\u000e\u0001\u0000\u0000\u000056\u0005"+
		"p\u0000\u000067\u0005r\u0000\u000078\u0005i\u0000\u000089\u0005n\u0000"+
		"\u00009:\u0005t\u0000\u0000:\u0010\u0001\u0000\u0000\u0000;<\u0005c\u0000"+
		"\u0000<=\u0005a\u0000\u0000=>\u0005s\u0000\u0000>?\u0005e\u0000\u0000"+
		"?\u0012\u0001\u0000\u0000\u0000@A\u0005:\u0000\u0000A\u0014\u0001\u0000"+
		"\u0000\u0000BD\u0007\u0000\u0000\u0000CB\u0001\u0000\u0000\u0000DE\u0001"+
		"\u0000\u0000\u0000EC\u0001\u0000\u0000\u0000EF\u0001\u0000\u0000\u0000"+
		"F\u0016\u0001\u0000\u0000\u0000GH\u0005e\u0000\u0000HI\u0005q\u0000\u0000"+
		"IJ\u0005u\u0000\u0000JK\u0005a\u0000\u0000K`\u0005l\u0000\u0000LM\u0005"+
		"d\u0000\u0000MN\u0005i\u0000\u0000NO\u0005s\u0000\u0000OP\u0005t\u0000"+
		"\u0000PQ\u0005i\u0000\u0000QR\u0005n\u0000\u0000RS\u0005c\u0000\u0000"+
		"S`\u0005t\u0000\u0000TU\u0005b\u0000\u0000UV\u0005i\u0000\u0000VW\u0005"+
		"g\u0000\u0000WX\u0005g\u0000\u0000XY\u0005e\u0000\u0000Y`\u0005r\u0000"+
		"\u0000Z[\u0005m\u0000\u0000[\\\u0005i\u0000\u0000\\]\u0005n\u0000\u0000"+
		"]^\u0005o\u0000\u0000^`\u0005r\u0000\u0000_G\u0001\u0000\u0000\u0000_"+
		"L\u0001\u0000\u0000\u0000_T\u0001\u0000\u0000\u0000_Z\u0001\u0000\u0000"+
		"\u0000`\u0018\u0001\u0000\u0000\u0000ac\u0007\u0001\u0000\u0000ba\u0001"+
		"\u0000\u0000\u0000cd\u0001\u0000\u0000\u0000db\u0001\u0000\u0000\u0000"+
		"de\u0001\u0000\u0000\u0000e\u001a\u0001\u0000\u0000\u0000fj\u0005\"\u0000"+
		"\u0000gi\b\u0002\u0000\u0000hg\u0001\u0000\u0000\u0000il\u0001\u0000\u0000"+
		"\u0000jh\u0001\u0000\u0000\u0000jk\u0001\u0000\u0000\u0000km\u0001\u0000"+
		"\u0000\u0000lj\u0001\u0000\u0000\u0000mn\u0005\"\u0000\u0000n\u001c\u0001"+
		"\u0000\u0000\u0000op\u0005:\u0000\u0000pq\u0005)\u0000\u0000qs\u0001\u0000"+
		"\u0000\u0000rt\b\u0003\u0000\u0000sr\u0001\u0000\u0000\u0000tu\u0001\u0000"+
		"\u0000\u0000us\u0001\u0000\u0000\u0000uv\u0001\u0000\u0000\u0000vw\u0001"+
		"\u0000\u0000\u0000wx\u0006\u000e\u0000\u0000x\u001e\u0001\u0000\u0000"+
		"\u0000y{\u0007\u0004\u0000\u0000zy\u0001\u0000\u0000\u0000{|\u0001\u0000"+
		"\u0000\u0000|z\u0001\u0000\u0000\u0000|}\u0001\u0000\u0000\u0000} \u0001"+
		"\u0000\u0000\u0000~\u0080\u0007\u0003\u0000\u0000\u007f~\u0001\u0000\u0000"+
		"\u0000\u0080\u0081\u0001\u0000\u0000\u0000\u0081\u007f\u0001\u0000\u0000"+
		"\u0000\u0081\u0082\u0001\u0000\u0000\u0000\u0082\"\u0001\u0000\u0000\u0000"+
		"\u0083\u0084\u0007\u0005\u0000\u0000\u0084\u0085\u0001\u0000\u0000\u0000"+
		"\u0085\u0086\u0006\u0011\u0000\u0000\u0086$\u0001\u0000\u0000\u0000\u0087"+
		"\u0089\u0007\u0006\u0000\u0000\u0088\u0087\u0001\u0000\u0000\u0000\u0089"+
		"\u008a\u0001\u0000\u0000\u0000\u008a\u0088\u0001\u0000\u0000\u0000\u008a"+
		"\u008b\u0001\u0000\u0000\u0000\u008b\u008c\u0001\u0000\u0000\u0000\u008c"+
		"\u008d\u0006\u0012\u0000\u0000\u008d&\u0001\u0000\u0000\u0000\t\u0000"+
		"E_dju|\u0081\u008a\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}