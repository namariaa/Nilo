grammar NiloScript;

expression : expression '+' term 
            | expression '-' term 
            | term; 
term : term '*' fact 
        | term '/' fact
        | fact;
fact : '('expression') '
        | INT 
        | VAR;
print: 'print' '(' expression ')';
INT : [0-9]+;
VAR: [a-z]+;
STRING: '"' ~('"')* '"'; 
