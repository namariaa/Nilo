# Caso de teste 38: Redeclaração de variável com tipo diferente

O principal objetivo é validar a verificação semântica de redeclarações de variáveis.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
reatribuir :inteiro = 1;
mostrarInteiro(reatribuir);

reatribuir :caracter = "Testando";
mostrarCaracteres(reatribuir);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro indicando que a variável **reatribuir** já foi declarada anteriormente.

### Critério de aprovação

O teste será considerado **Aprovado** caso a redeclaração seja rejeitada durante a análise semântica.

### Resultado obtido

**Aprovado.**
