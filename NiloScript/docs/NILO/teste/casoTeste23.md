# Caso de teste 23: Validação de tipo na função mostrarCaracteres

O principal objetivo é validar a verificação semântica dos argumentos recebidos pela função `mostrarCaracteres`, garantindo que apenas cadeias de caracteres sejam aceitas.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarCaracteres(1);
mostrarCaracteres(1.8);
mostrarCaracteres(falso);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve rejeitar todas as instruções, emitindo erro semântico de incompatibilidade de tipos para cada chamada da função.

### Critério de aprovação

O teste será considerado **Aprovado** caso:

- apenas valores do tipo **caracter** sejam aceitos pela função `mostrarCaracteres`;
- todas as chamadas incompatíveis sejam identificadas corretamente pelo compilador.

### Resultado obtido

**Aprovado.**
