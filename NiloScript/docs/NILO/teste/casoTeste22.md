# Caso de teste 22: Validação de tipo na função mostrarInteiro

O principal objetivo é validar a verificação semântica dos argumentos recebidos pela função `mostrarInteiro`, garantindo que apenas valores do tipo **inteiro** sejam aceitos.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarInteiro("a");
mostrarInteiro(verdadeiro);
mostrarInteiro(2.5);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve rejeitar todas as instruções, emitindo erro semântico de incompatibilidade de tipos para cada chamada da função.

### Critério de aprovação

O teste será considerado **Aprovado** caso:

- apenas valores do tipo **inteiro** sejam aceitos como argumento da função `mostrarInteiro`;
- todas as chamadas incompatíveis sejam rejeitadas durante a análise semântica.

### Resultado obtido

**Aprovado.**
