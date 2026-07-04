# Caso de teste 41: Atribuição incompatível do retorno de função

O principal objetivo é validar a verificação semântica da atribuição do valor retornado por uma função, garantindo que o tipo de retorno seja compatível com o tipo da variável receptora.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
funcionalidade mul (num01: inteiro, num02: inteiro) :inteiro {
    ret : inteiro = num01 * num02;
    retorne ret;
}

x :inteiro = pegaInteiro;
y :inteiro = pegaInteiro;

multiplicacao :flutuante = mul(x, y);

mostrarInteiro(multiplicacao);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre o retorno inteiro da função e a variável do tipo flutuante.

### Critério de aprovação

O teste será considerado **Aprovado** caso a incompatibilidade de tipos seja detectada corretamente.

### Resultado obtido

**Aprovado.**
