# Caso de teste 47: Utilização de variável não declarada como argumento de função

O principal objetivo é validar a verificação semântica da utilização de identificadores não declarados.

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

multiplicacao :flutuante = mul(x, Y);

mostrarInteiro(multiplicacao);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando que a variável **Y** não foi declarada.

### Critério de aprovação

O teste será considerado **Aprovado** caso o identificador inexistente seja detectado corretamente.

### Resultado obtido

**Aprovado.**
