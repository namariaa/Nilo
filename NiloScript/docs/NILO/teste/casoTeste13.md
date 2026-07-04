# Caso de teste 13: Ignorar comentários e espaços em branco

O principal objetivo é validar o tratamento de comentários, espaços, tabulações e quebras de linha durante a análise léxica.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
        mostrarCaracteres("É importante testar se ele está ignorando espaços em branco, enter e tabs corretamente");

:) Caso não esteja correto é importante modificar a gramática

:) Testes; Testar vários níveis é importante;
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Verificar a saída produzida.

### Resultado esperado

```text
É importante testar se ele está ignorando espaços em branco, enter e tabs corretamente
```

### Critério de aprovação

O teste será considerado **Aprovado** caso comentários, espaços, tabulações e quebras de linha sejam ignorados corretamente pelo compilador.

### Resultado obtido

**Aprovado.**
