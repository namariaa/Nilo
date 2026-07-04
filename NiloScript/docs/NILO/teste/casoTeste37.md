# Caso de teste 37: Função sem valor de retorno

O principal objetivo é validar a declaração e execução de funções cujo tipo de retorno é **nada**.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
funcionalidade printManeiro() :nada {
    mostrarCaracteres("Texto super maneiro");
}

mostrarCaracteres("Vamos ver algo maneiro?");
printManeiro();
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída obtida.

### Resultado esperado

```text
Vamos ver algo maneiro?
Texto super maneiro
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a função seja executada corretamente mesmo sem retornar um valor.

### Resultado obtido

**Aprovado.**
