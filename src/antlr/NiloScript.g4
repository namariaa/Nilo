grammar NiloScript;

//DO PARSER

program : code EOF;

code : expression 
       | print
       | assignment;

assignment : VAR '=' expression;

expression : expression '+' term 
            | expression '-' term 
            | term; 
term :  term '*' fact 
        | term '/' fact
        | fact;
fact : '('expression')'
        | INT 
        | VAR
        | STRING;
print : 'print' '(' expression ')';

//DO LEXER
INT : [0-9]+;
VAR: [a-z]+;
STRING: '"' ~('"')* '"';  
TAB: [ \t]+ -> skip;
ENTER: [\r\n]+ -> skip;
WHITESPACE: [ \t\u000C\r\n]+ -> skip;
