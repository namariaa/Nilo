# Caso de teste 42: Quantidade incorreta de parâmetros em chamada de função

O principal objetivo é validar a verificação semântica da quantidade de argumentos passados para uma função.

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

multiplicacao :flutuante = mul(x);

mostrarInteiro(multiplicacao);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando quantidade insuficiente de parâmetros na chamada da função.

### Critério de aprovação

O teste será considerado **Aprovado** caso o erro seja identificado corretamente.

### Resultado obtido

**Aprovado.**
