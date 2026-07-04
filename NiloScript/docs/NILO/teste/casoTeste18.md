# Caso de teste 18: Compatibilidade entre entrada de dados e tipo da variável

O principal objetivo é validar a verificação de compatibilidade entre a função de entrada utilizada e o tipo da variável de destino.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
input :caracter = pegaInteiro;
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro indicando incompatibilidade entre o tipo **caracter** e a entrada retornada por **pegaInteiro**.

### Critério de aprovação

O teste será considerado **Aprovado** caso a incompatibilidade seja identificada durante a análise semântica.

### Resultado obtido

**Aprovado.**
