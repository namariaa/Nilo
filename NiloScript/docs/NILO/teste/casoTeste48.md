# Caso de teste 48: Utilização de múltiplas variáveis não declaradas

O principal objetivo é validar a identificação de variáveis inexistentes em expressões e instruções de saída.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
a :inteiro = pegaInteiro;
b :inteiro = pegaInteiro;

c :inteiro = a + d;

mostrarInteiro(c);
mostrarInteiro(C - b);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir erros semânticos indicando que as variáveis **d** e **C** não foram declaradas.

### Critério de aprovação

O teste será considerado **Aprovado** caso todos os identificadores inexistentes sejam detectados.

### Resultado obtido

**Aprovado.**
