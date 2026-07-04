# Caso de teste 29: Impressão de caracteres utilizando argumentos incompatíveis

O principal objetivo é validar a verificação semântica da função `mostrarCaracteres`, garantindo que apenas cadeias de caracteres sejam aceitas como argumento.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarCaracteres(1.8);
mostrarCaracteres(falso);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir erros semânticos indicando incompatibilidade entre os tipos **flutuante** e **bool** em relação ao tipo esperado pela função `mostrarCaracteres`.

### Critério de aprovação

O teste será considerado **Aprovado** caso ambas as chamadas sejam rejeitadas durante a análise semântica.

### Resultado obtido

**Aprovado.**
