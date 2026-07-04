# Caso de teste 07: Estrutura condicional com bloco senao

O principal objetivo é validar a execução da estrutura `caso/senao`.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x_y :inteiro = 5;

mostrarCaracteres("test before!!!!!!!!!!");

caso (x_y != 5){
    mostrarCaracteres("test");
    mostrarCaracteres("is distinct!!!!!!!!!!");
    mostrarInteiro(0);
}
senao{
    mostrarInteiro(1);
    mostrarCaracteres("is equal!!!!!!!!!!");
}
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída produzida.

### Resultado esperado

```text
test before!!!!!!!!!!
1
is equal!!!!!!!!!!
```

### Critério de aprovação

O teste será considerado **Aprovado** caso apenas o bloco `senao` seja executado.

### Resultado obtido

**Aprovado.**
