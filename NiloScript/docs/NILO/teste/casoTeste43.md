# Caso de teste 43: Declaração de lista com elementos de tipos incompatíveis

O principal objetivo é validar a verificação semântica da criação de listas homogêneas.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
valor1{4} :inteiro = [1 , 2.5, 2, verdadeiro];
primeira :inteiro = valor1[1];
mostrarInteiro(primeira);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre os tipos dos elementos da lista.

### Critério de aprovação

O teste será considerado **Aprovado** caso todos os elementos incompatíveis sejam identificados.

### Resultado obtido

**Aprovado.**
