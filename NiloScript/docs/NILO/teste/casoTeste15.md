# Caso de teste 15: Atribuição sem declaração

O principal objetivo é validar a obrigatoriedade da declaração de variáveis antes de sua utilização.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x = 5;
mostrarInteiro(x);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro indicando que a variável **x** não foi previamente declarada.

### Critério de aprovação

O teste será considerado **Aprovado** caso a compilação seja interrompida e o erro seja identificado corretamente.

### Resultado obtido

**Aprovado.**
