grammar NiloScript;

//DO PARSER

program : (code ENTER*)+ EOF; 

code : expression 
       | print
       | assignment
       | input
       | loop
       | inCase
       | function;

assignment : VAR EQUAL expression;

expression : expression PLUS term 
            | expression MINUS term 
            | term; 
term :  term MUL pot 
        | term DIV pot
        | term MOD pot
        | pot;
pot : fact (POW pot)
      | fact;
fact : OPAR expression CPAR
        | INT 
        | VAR
        | STRING
        | COMMENT
        | BOOL
        | FLOAT;
print : 'mostrar' OPAR expression CPAR;
inCase : 'caso' OPAR (expression OPERATOR expression | BOOL expression) CPAR '{' code+ '}';
input : VAR? EQUAL READ?; 
loop : 'enquanto' OPAR expression OPERATOR expression CPAR '{' code+ '}';
function : VAR? OPAR (TYPE expression)+ CPAR ':' TYPE '{' code+ '}';

//DO LEXER
INT : [0-9]+;
FLOAT : [0-9]+ ','+ [0-9]+;
VAR : [a-zA-Z_]+;
STRING : '"' ~('"')* '"';  
BOOL : 'verdadeiro' | 'falso';
TYPE : INT | FLOAT | STRING | BOOL;

PLUS : '+';
MINUS : '-';
MUL : '*';
DIV : '/';
MOD : '%';
POW : '**';
OPERATOR : 'igual' | 'diferente' | 'maior' | 'menor' ;
EQUAL : '=';
OPAR : '(';
CPAR : ')';
READ : 'pegaInteiro' | 'pegaFlutuante' | 'pegaCaracter';

COMMENT : ':)' ~[\r\n]+ -> skip;
TAB : [\t]+;
ENTER : [\r\n]+;
SPACE : [ \t\r\n] -> skip;
WHITESPACE : [\t\u000C\r\n]+ -> skip;
