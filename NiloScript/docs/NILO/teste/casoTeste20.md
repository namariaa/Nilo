# Caso de teste 20: Estruturas condicionais aninhadas

O principal objetivo é validar o funcionamento de estruturas condicionais e de repetição aninhadas, verificando a correta execução dos blocos internos.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
a :inteiro = pegaInteiro;
b :inteiro = pegaInteiro;
cont :inteiro = 2;

enquanto (cont < 10) {

    caso (cont % 2 == 0){
        mostrarCaracteres("É par!");
    }
    senao{
        mostrarCaracteres("É impar!");
    }

    caso (a != b){
        caso (a > b){
            b = b + 1;
        }
        senao{
            a = a + 1;
        }

        cont = cont + 1;
    }
    senao{
        cont = 10;
    }
}
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Informar como entrada os valores **10** e **8**.
4. Verificar a execução das estruturas condicionais e do laço.

### Resultado esperado

O programa deve ser compilado sem erros, executar corretamente os blocos condicionais aninhados e finalizar o laço quando a condição de parada for satisfeita.

### Critério de aprovação

O teste será considerado **Aprovado** caso as estruturas `caso`, `senao` e `enquanto` sejam executadas corretamente, preservando a lógica esperada do programa.

### Resultado obtido

**Aprovado.**
