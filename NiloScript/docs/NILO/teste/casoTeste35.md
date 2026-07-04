# Caso de teste 35: Estruturas condicionais aninhadas com múltiplas comparações

O principal objetivo é validar a execução de estruturas condicionais aninhadas envolvendo operadores relacionais e expressões aritméticas.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
a :inteiro = pegaInteiro;
b :inteiro = pegaInteiro;
c :inteiro = pegaInteiro;
d :inteiro = pegaInteiro;

caso (a != d){
    caso (a == b){
        mostrarCaracteres("A é igual a B");
        caso (a + b == c + d){
            mostrarCaracteres("A soma de a e b é igual a soma de c e d");
        }
        senao{
            mostrarCaracteres("A soma de a e b não é igual a soma de c e d");
        }
    }

    caso (c == d){
        mostrarCaracteres("C é igual a D");
    }

    caso (a == c){
        mostrarCaracteres("A é igual a C");
    }

    caso (b == c){
        mostrarCaracteres("B é igual a C");
    }

    caso (b == d){
        mostrarCaracteres("B é igual a D");
    }
}
senao{
    mostrarCaracteres("Não há o que testar!");
}
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Informar valores que exercitem diferentes caminhos da estrutura condicional.
4. Verificar a saída produzida.

### Resultado esperado

O programa deve executar corretamente todas as estruturas condicionais, produzindo apenas as mensagens correspondentes às condições satisfeitas.

### Critério de aprovação

O teste será considerado **Aprovado** caso todas as comparações e blocos condicionais sejam executados corretamente.

### Resultado obtido

**Aprovado.**
