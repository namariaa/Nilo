# Caso de teste 39: Declaração de função dentro de outra função

O principal objetivo é validar que a linguagem não permite funções aninhadas.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
funcionalidade div (num01: inteiro, num02: inteiro) :inteiro {

    funcionalidade mod (num01: inteiro, num02: inteiro) :inteiro {
        ret :inteiro = num01 * num02;
        retorne ret;
    }

    ret :inteiro = mod(num01, num02);
    retorne ret;
}
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro sintático indicando que declarações de funções não são permitidas dentro do corpo de outras funções.

### Critério de aprovação

O teste será considerado **Aprovado** caso a função aninhada seja rejeitada durante a compilação.

### Resultado obtido

**Aprovado.**
