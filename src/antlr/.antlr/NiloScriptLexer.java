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
		T__9=10, INT=11, VAR=12, STRING=13, OPERATOR=14, COMMENT=15, TAB=16, ENTER=17, 
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
			"T__9", "INT", "VAR", "STRING", "OPERATOR", "COMMENT", "TAB", "ENTER", 
			"SPACE", "WHITESPACE", "EQUALITY", "DIFFERENT", "BIG", "MINOR"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'print'", "'case'", 
			"'):'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, "INT", 
			"VAR", "STRING", "OPERATOR", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
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
		"\u0004\u0000\u0013\u00a3\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001"+
		"\n\u0004\nM\b\n\u000b\n\f\nN\u0001\u000b\u0004\u000bR\b\u000b\u000b\u000b"+
		"\f\u000bS\u0001\f\u0001\f\u0005\fX\b\f\n\f\f\f[\t\f\u0001\f\u0001\f\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0003\rc\b\r\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0004\u000ei\b\u000e\u000b\u000e\f\u000ej\u0001\u000e"+
		"\u0001\u000e\u0001\u000f\u0004\u000fp\b\u000f\u000b\u000f\f\u000fq\u0001"+
		"\u000f\u0001\u000f\u0001\u0010\u0004\u0010w\b\u0010\u000b\u0010\f\u0010"+
		"x\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0012\u0004\u0012\u0082\b\u0012\u000b\u0012\f\u0012\u0083\u0001"+
		"\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001"+
		"\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0000"+
		"\u0000\u0017\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b"+
		"\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b"+
		"\u000e\u001d\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0000)\u0000+\u0000"+
		"-\u0000\u0001\u0000\u0007\u0001\u000009\u0003\u0000AZ__az\u0001\u0000"+
		"\"\"\u0002\u0000\n\n\r\r\u0001\u0000\t\t\u0003\u0000\t\n\r\r  \u0002\u0000"+
		"\t\n\f\r\u00a8\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000"+
		"\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000"+
		"\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000"+
		"\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000"+
		"\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000"+
		"\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000"+
		"\u0000\u0019\u0001\u0000\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000"+
		"\u0000\u001d\u0001\u0000\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000"+
		"\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%"+
		"\u0001\u0000\u0000\u0000\u0001/\u0001\u0000\u0000\u0000\u00031\u0001\u0000"+
		"\u0000\u0000\u00053\u0001\u0000\u0000\u0000\u00075\u0001\u0000\u0000\u0000"+
		"\t7\u0001\u0000\u0000\u0000\u000b9\u0001\u0000\u0000\u0000\r;\u0001\u0000"+
		"\u0000\u0000\u000f=\u0001\u0000\u0000\u0000\u0011C\u0001\u0000\u0000\u0000"+
		"\u0013H\u0001\u0000\u0000\u0000\u0015L\u0001\u0000\u0000\u0000\u0017Q"+
		"\u0001\u0000\u0000\u0000\u0019U\u0001\u0000\u0000\u0000\u001bb\u0001\u0000"+
		"\u0000\u0000\u001dd\u0001\u0000\u0000\u0000\u001fo\u0001\u0000\u0000\u0000"+
		"!v\u0001\u0000\u0000\u0000#|\u0001\u0000\u0000\u0000%\u0081\u0001\u0000"+
		"\u0000\u0000\'\u0087\u0001\u0000\u0000\u0000)\u008d\u0001\u0000\u0000"+
		"\u0000+\u0096\u0001\u0000\u0000\u0000-\u009d\u0001\u0000\u0000\u0000/"+
		"0\u0005=\u0000\u00000\u0002\u0001\u0000\u0000\u000012\u0005+\u0000\u0000"+
		"2\u0004\u0001\u0000\u0000\u000034\u0005-\u0000\u00004\u0006\u0001\u0000"+
		"\u0000\u000056\u0005*\u0000\u00006\b\u0001\u0000\u0000\u000078\u0005/"+
		"\u0000\u00008\n\u0001\u0000\u0000\u00009:\u0005(\u0000\u0000:\f\u0001"+
		"\u0000\u0000\u0000;<\u0005)\u0000\u0000<\u000e\u0001\u0000\u0000\u0000"+
		"=>\u0005p\u0000\u0000>?\u0005r\u0000\u0000?@\u0005i\u0000\u0000@A\u0005"+
		"n\u0000\u0000AB\u0005t\u0000\u0000B\u0010\u0001\u0000\u0000\u0000CD\u0005"+
		"c\u0000\u0000DE\u0005a\u0000\u0000EF\u0005s\u0000\u0000FG\u0005e\u0000"+
		"\u0000G\u0012\u0001\u0000\u0000\u0000HI\u0005)\u0000\u0000IJ\u0005:\u0000"+
		"\u0000J\u0014\u0001\u0000\u0000\u0000KM\u0007\u0000\u0000\u0000LK\u0001"+
		"\u0000\u0000\u0000MN\u0001\u0000\u0000\u0000NL\u0001\u0000\u0000\u0000"+
		"NO\u0001\u0000\u0000\u0000O\u0016\u0001\u0000\u0000\u0000PR\u0007\u0001"+
		"\u0000\u0000QP\u0001\u0000\u0000\u0000RS\u0001\u0000\u0000\u0000SQ\u0001"+
		"\u0000\u0000\u0000ST\u0001\u0000\u0000\u0000T\u0018\u0001\u0000\u0000"+
		"\u0000UY\u0005\"\u0000\u0000VX\b\u0002\u0000\u0000WV\u0001\u0000\u0000"+
		"\u0000X[\u0001\u0000\u0000\u0000YW\u0001\u0000\u0000\u0000YZ\u0001\u0000"+
		"\u0000\u0000Z\\\u0001\u0000\u0000\u0000[Y\u0001\u0000\u0000\u0000\\]\u0005"+
		"\"\u0000\u0000]\u001a\u0001\u0000\u0000\u0000^c\u0003\'\u0013\u0000_c"+
		"\u0003)\u0014\u0000`c\u0003+\u0015\u0000ac\u0003-\u0016\u0000b^\u0001"+
		"\u0000\u0000\u0000b_\u0001\u0000\u0000\u0000b`\u0001\u0000\u0000\u0000"+
		"ba\u0001\u0000\u0000\u0000c\u001c\u0001\u0000\u0000\u0000de\u0005:\u0000"+
		"\u0000ef\u0005)\u0000\u0000fh\u0001\u0000\u0000\u0000gi\b\u0003\u0000"+
		"\u0000hg\u0001\u0000\u0000\u0000ij\u0001\u0000\u0000\u0000jh\u0001\u0000"+
		"\u0000\u0000jk\u0001\u0000\u0000\u0000kl\u0001\u0000\u0000\u0000lm\u0006"+
		"\u000e\u0000\u0000m\u001e\u0001\u0000\u0000\u0000np\u0007\u0004\u0000"+
		"\u0000on\u0001\u0000\u0000\u0000pq\u0001\u0000\u0000\u0000qo\u0001\u0000"+
		"\u0000\u0000qr\u0001\u0000\u0000\u0000rs\u0001\u0000\u0000\u0000st\u0006"+
		"\u000f\u0000\u0000t \u0001\u0000\u0000\u0000uw\u0007\u0003\u0000\u0000"+
		"vu\u0001\u0000\u0000\u0000wx\u0001\u0000\u0000\u0000xv\u0001\u0000\u0000"+
		"\u0000xy\u0001\u0000\u0000\u0000yz\u0001\u0000\u0000\u0000z{\u0006\u0010"+
		"\u0000\u0000{\"\u0001\u0000\u0000\u0000|}\u0007\u0005\u0000\u0000}~\u0001"+
		"\u0000\u0000\u0000~\u007f\u0006\u0011\u0000\u0000\u007f$\u0001\u0000\u0000"+
		"\u0000\u0080\u0082\u0007\u0006\u0000\u0000\u0081\u0080\u0001\u0000\u0000"+
		"\u0000\u0082\u0083\u0001\u0000\u0000\u0000\u0083\u0081\u0001\u0000\u0000"+
		"\u0000\u0083\u0084\u0001\u0000\u0000\u0000\u0084\u0085\u0001\u0000\u0000"+
		"\u0000\u0085\u0086\u0006\u0012\u0000\u0000\u0086&\u0001\u0000\u0000\u0000"+
		"\u0087\u0088\u0005e\u0000\u0000\u0088\u0089\u0005q\u0000\u0000\u0089\u008a"+
		"\u0005u\u0000\u0000\u008a\u008b\u0005a\u0000\u0000\u008b\u008c\u0005l"+
		"\u0000\u0000\u008c(\u0001\u0000\u0000\u0000\u008d\u008e\u0005d\u0000\u0000"+
		"\u008e\u008f\u0005i\u0000\u0000\u008f\u0090\u0005s\u0000\u0000\u0090\u0091"+
		"\u0005t\u0000\u0000\u0091\u0092\u0005i\u0000\u0000\u0092\u0093\u0005n"+
		"\u0000\u0000\u0093\u0094\u0005c\u0000\u0000\u0094\u0095\u0005t\u0000\u0000"+
		"\u0095*\u0001\u0000\u0000\u0000\u0096\u0097\u0005b\u0000\u0000\u0097\u0098"+
		"\u0005i\u0000\u0000\u0098\u0099\u0005g\u0000\u0000\u0099\u009a\u0005g"+
		"\u0000\u0000\u009a\u009b\u0005e\u0000\u0000\u009b\u009c\u0005r\u0000\u0000"+
		"\u009c,\u0001\u0000\u0000\u0000\u009d\u009e\u0005m\u0000\u0000\u009e\u009f"+
		"\u0005i\u0000\u0000\u009f\u00a0\u0005n\u0000\u0000\u00a0\u00a1\u0005o"+
		"\u0000\u0000\u00a1\u00a2\u0005r\u0000\u0000\u00a2.\u0001\u0000\u0000\u0000"+
		"\t\u0000NSYbjqx\u0083\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}