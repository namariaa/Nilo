# Caso de teste 17: Ausência de ponto e vírgula

O principal objetivo é validar a obrigatoriedade do delimitador de final de instrução.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x :inteiro = 5
mostrarInteiro(x);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro sintático indicando ausência do ponto e vírgula.

### Critério de aprovação

O teste será considerado **Aprovado** caso o erro sintático seja detectado corretamente.

### Resultado obtido

**Aprovado.**
