grammar NiloScript;

//DO PARSER

program : (code ENTER*)+ EOF; 

code : expression 
       | print
       | assignment
       | input
       | loop
       | inCase;

assignment : VAR EQUAL expression;

expression : expression PLUS term 
            | expression MINUS term 
            | term; 
term :  term MUL pot 
        | term DIV pot
        | pot;
pot : fact (POW pot)
      | fact;
fact : OPAR expression CPAR
        | INT 
        | VAR
        | STRING
        | COMMENT;
print : 'mostrar' OPAR expression CPAR;
inCase : 'caso' OPAR expression OPERATOR expression CPAR '{' code+ '}';
input : VAR? EQUAL READ?; 
loop : 'enquanto' OPAR expression OPERATOR expression CPAR '{' code+ '}';

//DO LEXER
INT : [0-9]+;
FLOAT : [0-9]+ ','+ [0-9]+;
VAR : [a-zA-Z_]+;
STRING : '"' ~('"')* '"';  

PLUS : '+';
MINUS : '-';
MUL : '*';
DIV : '/';
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
