# Caso de teste 40: Expressão sintaticamente inválida

O principal objetivo é validar a detecção de erros sintáticos em expressões malformadas.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarInteiro(1 "testando");
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro sintático indicando expressão inválida.

### Critério de aprovação

O teste será considerado **Aprovado** caso a compilação seja interrompida e o erro sintático seja identificado corretamente.

### Resultado obtido

**Aprovado.**
