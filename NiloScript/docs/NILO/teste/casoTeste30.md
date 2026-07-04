# Caso de teste 30: Impressão de flutuante utilizando argumentos incompatíveis

O principal objetivo é validar a verificação semântica da função `mostrarFlutuante`, garantindo que apenas valores do tipo **flutuante** sejam aceitos como argumento.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarFlutuante(falso);
mostrarFlutuante(9);
mostrarFlutuante("dando errado");
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir erros semânticos indicando incompatibilidade entre os tipos **bool**, **inteiro** e **caracter** em relação ao tipo esperado pela função `mostrarFlutuante`.

### Critério de aprovação

O teste será considerado **Aprovado** caso todas as chamadas incompatíveis sejam rejeitadas durante a análise semântica.

### Resultado obtido

**Aprovado.**
