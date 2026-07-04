# Caso de teste 44: Acesso inválido a elemento de lista

O principal objetivo é validar a verificação semântica de acesso aos limites de uma lista.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
valor1{4} :inteiro = [1 , 2];
primeira :inteiro = valor1[2];
mostrarInteiro(primeira);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro indicando acesso a uma posição inexistente da lista.

### Critério de aprovação

O teste será considerado **Aprovado** caso o acesso inválido seja detectado.

### Resultado obtido

**Aprovado.**
