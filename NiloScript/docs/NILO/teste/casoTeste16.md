# Caso de teste 16: Declaração com tipo inexistente

O principal objetivo é validar o reconhecimento dos tipos primitivos suportados pela linguagem.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x :int = 5;
mostrarInteiro(x);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro indicando que o tipo **int** não existe na linguagem.

### Critério de aprovação

O teste será considerado **Aprovado** caso a declaração seja rejeitada durante a compilação.

### Resultado obtido

**Aprovado.**
