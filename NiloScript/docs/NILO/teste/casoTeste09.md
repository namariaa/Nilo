# Caso de teste 09: Declaração e chamada de função

O principal objetivo é validar a declaração de funções, a passagem de parâmetros, o retorno de valores e a utilização de funções nativas de entrada e saída.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
funcionalidade soma (x :inteiro, y :inteiro) :inteiro {
    resultado :inteiro = x + y;
    mostrarCaracteres("test");
    retorne resultado;
}

a :inteiro = pegaInteiro;
b :inteiro = pegaInteiro;

c :inteiro = soma(a, b);

mostrarInteiro(c);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Informar os valores **10** e **20**.
4. Comparar a saída obtida.

### Resultado esperado

```text
test
30
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a função seja chamada corretamente e retorne o valor esperado.

### Resultado obtido

**Aprovado.**
