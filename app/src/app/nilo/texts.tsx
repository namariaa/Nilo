"use client"

import Table from "@/src/components/Table";

export const intro = `
        Iniciar o aprendizado na área da computação é uma tarefa árdua, pois os fundamentos não são de fácil compreensão pela grande quantidade de conceitos acoplados (Arimoto; Oliveira, 2019). Além disso, o curso de Tecnologia em Análise e desenvolvimento de sistemas (TADS) do Instituto Federal do Rio Grande Norte (IFRN) do campus Natal Central (CNAT) possui uma matriz curricular definida pelo projeto pedagógico do curso (PPC) em que o enfoque de ensino é o desenvolvimento de sistemas de alto nível de abstração por meio de ferramentas e linguagens que contribuem e simplificam as implementações (INSTITUTO FEDERAL DE EDUCAÇÃO, CIÊNCIA E TECNOLOGIA DO RIO GRANDE DO NORTE, 2012).
        Consequentemente, existe uma carência no ensino de alguns segmentos da computação no curso TADS, como o de criação de linguagens de programação, que são sistemas formais muito importantes a serem estudados na área da ciência da computação. Conhecer fundamentos para a criação de linguagens de programação  pode permitir uma melhor articulação para manifestações de ideias, maior aptidão para aprender novas linguagens e crescimento do conhecimento em diferentes áreas da computação (Sebesta, 2011, p.20). Nesse sentido, a falta de aprofundamento na área de linguagens configura uma lacuna na formação dos estudantes do curso.
        Nesse cenário, viu-se a necessidade de desenvolvimento de um processo para auxiliar os estudantes na sua jornada de aprendizado sobre o desenvolvimento de linguagens de programação e aprofundamento nos seus principais conceitos. Entretanto, esse processo não indica de maneira determinística “o que deve ser feito”, mas oferece um arcabouço conceitual e prático que orienta o desenvolvimento. A responsabilidade pelo aprofundamento dos conteúdos e pela seleção das ferramentas adequadas é individual. Em síntese, este processo configura-se como um instrumento de apoio acadêmico, teórico e prático, que abre possibilidades metodológicas sem restringir a criatividade ou impor um fluxo único de construção de linguagens de programação.
`;

export const aspectos = `
	    Uma linguagem de programação é uma formalização de instruções de alto nível usadas para gerar algoritmos para resolver problemas reais em diferentes domínios (Sebesta, 2011, p.23). Sua aplicabilidade abrange diferentes propósitos, desde a criação de softwares, até mesmo para controle de robôs, por exemplo.  Nessa seção iremos compreender diferentes termos que cercam o desenvolvimento e o uso diário de linguagens de codificação, com o objetivo de facilitar a compreensão de termos técnicos usados ao longo do processo.
`

export const aspectosInterpretador = `
        Para que um algoritmo descrito em uma linguagem de programação seja compreendido por um computador é necessário que esse código passe por um processo de tradução para linguagem de máquina (AHO et al., 2007, p.01). 
        Com o desenvolvimento de linguagens de codificação com especificidades distintas, surgiram diferentes formas de tradução do texto-fonte para binários de máquina. Isso ocorreu com o objetivo de suprir as necessidades particulares de cada linguagem. Dentre essas formas de translação podemos citar a compilação e a interpretação. A seguir, iremos detalhar cada uma delas com o propósito de compreender de forma detalhada como uma máquina entende um algoritmos desenvolvido por um programador.

        2.1.1 Interpretação
            O primeiro fluxo de tradução que podemos pontuar é a interpretação, nela as linhas de código são lidas de instrução por instrução sem a geração de código intermediários nem executáveis (FREECODECAMP, 2020). 

		    Figura 01 - Fluxo de uma tradução utilizando um interpretador

`

export const aspectosCompilacao = `
        A Figura 01 demonstra o fluxo de um interpretador, em que nesse modelo, cada linha do código fonte é processada sequencialmente, permitindo inclusive a realização simultânea de operações de entrada e saída (AHO et al., 2007, p.02).
        Tal abordagem traz uma diminuição significativa nos passos que envolvem a translação do programa e facilita o processo de depuração (Sebesta, 2011, p.48), todavia, essa arquitetura também apresenta limitações relevantes. Entre as principais desvantagens, destacam-se a diminuição da velocidade de execução e do aumento de memória necessária (Sebesta, 2011, p.49).
        Atualmente, linguagens  como python (PYTHON, 2026) e ruby (RUBY, 2026) utilizam interpretadores para suas traduções de código fonte para código de máquina. Essa escolha privilegia a flexibilidade e a facilidade de experimentação,  ainda que em detrimento da eficiência de desempenho e da robustez.

        2.1.2 Compilação
        No que diz a respeito ao processo de compilação,  o código-fonte é transformado em um arquivo executável que contém binários que podem ser executados diretamente pelo hardware (AHO et al., 2007, p.01). 
        Na compilação, podem ser identificados dois tipos principais. A compilação estática consiste na tradução completa do código-fonte para código de máquina antes da execução. Já a compilação dinâmica envolve a resolução de partes do código durante a execução, como o carregamento de bibliotecas externas ou a compilação em tempo de execução colaborando com a otimização do código (CRUZ et al., 2008).
        Além disso, apesar de uma mudança no fluxo de tradução, a compilação partilha de passos em comum com a interpretação. Assim, a distinção entre compilação e interpretação não reside em como o código é analisado e validado, mas sim na saída produzida que no caso do compilador é um executável e do interpretador é a execução imediata do código (LEE, 2017).

        Figura 02 - Fluxo de uma tradução utilizando um compilador
`

export const aspectosFim = `
    A interação do programador após a compilação é apenas com o código executável (LEE, 2017), como representado na Figura 02. Isso, consequentemente,   aumenta a velocidade de execução do código-fonte e otimiza o desempenho. Uma desvantagem que pode ser apontada na compilação está na complexidade de  sua implementação, sendo portanto recomendada para projetos que exigem mais confiabilidade e segurança na implementação.
    Por fim, é essencial uma boa compreensão das limitações e recomendações do uso de cada método de tradução para que assim seja escolhida a opção mais adequada para cada projeto de linguagem. A seguir iremos observar no Quadro 01 um panorama geral sobre cada forma de translação vista neste subtópico.
    
    Quadro 01 - Comparação entre métodos de tradução
`

export const tableAspectos = <>
<Table columns={[{ field: 'id', headerName: 'Método de Tradução', width: 150 }, {  field: 'recomendado',
    headerName: 'Recomendado para',
    width: 250,
  },
  {
    field: 'limitacoes',
    headerName: 'Limitações',
    width: 250,
  },
  {
    field: 'exemplos',
    headerName: 'Exemplos reais de utilização',
    width: 300,
  },

]} rows={[
  { id: "Compilação", recomendado: '- Projetos que exigem um grande desempenho e execução direta no hardware ou em caso que queira um aprendizado mais aprofundado de fundamentos de linguagens de programação.', limitacoes: '-  As traduções são mais longas.- Possui menos flexibilidade para alterações em tempo de execução.', exemplos: "C, C++, Rust, Pascal, etc." },
  { id: "Interpretação", recomendado: 'Em casos que necessitem de flexibilidade, testes rápidos e depuração fácil.', limitacoes: '- Menor desempenho.- Menor segurança.', exemplos: "Python, Ruby, PHP, etc." },
]}/>
</>

export const quadro02 = <>
<Table columns={[{ field: 'id', headerName: 'Tecnologia', width: 150 }, {  field: 'descricao',
    headerName: 'Descrição',
    width: 250,
  },
  {
    field: 'realiza',
    headerName: 'O que realiza',
    width: 250,
  },
  {
    field: 'suporte',
    headerName: 'Linguagens que prestam suporte',
    width: 300,
  },

]} rows={[
  { id: "Flex", descricao: 'Gera tokens a partir de expressões regulares.', realiza: 'Lexer', suporte: "C/C++"},
  { id: "Bison", descricao: 'A partir de uma gramática formal e tokens gerados pelo flex ele constrói uma árvore sintática que pode ser utilizada como base na construção de árvores sintáticas abstratas. Pode realizar análises semânticas a partir de ações definidas na gramática.', realiza: 'Parser e análise semântica', suporte: "C/C++" },
  { id: "Yacc", descricao: 'Assim como o bison gera um analisador sintático em formato de tabela a partir de tokens fornecidos pelo flex.', realiza: 'Parser', suporte: "C"},
  { id: "Javacc", descricao: 'Partindo de descrições de gramática em Formato EBNF ele gera código Java puro.', realiza: 'Lexer e Parser', suporte: "Java"},
]}/>
</>

export const quadro03 = <>
<Table columns={[{ field: 'id', headerName: 'Tecnologia', width: 150 }, {  field: 'descricao',
    headerName: 'Descrição',
    width: 250,
  },
  {
    field: 'realiza',
    headerName: 'O que realiza',
    width: 250,
  },
  {
    field: 'suporte',
    headerName: 'Linguagens que prestam suporte',
    width: 300,
  },

]} rows={[
  { id: "GNU Compiler Collection (GCC)", descricao: 'Conjunto de compiladores que cobre quase todas as fases de compilação.', realiza: 'Lexer, parser, otimização e geração de código', suporte: "C, C++, Fortran, Ada, Go, entre outras."},
  { id: "QBE", descricao: 'Atua como backend eficiente para compiladores.', realiza: 'Geração de código intermediário e otimização.', suporte: "C" },
  { id: "Tiny C Compiler (TCC)", descricao: 'Apesar de não possuir otimizações avançadas como LLVM ou GCC, mas cobre as fases essenciais para transformar código-fonte em executável.', realiza: 'Análise e geração de código.', suporte: "C"},
]}/>
</>

export const quadro04 = <>
<Table
  columns={[
    { field: 'numero', headerName: 'N°', width: 70 },
    { field: 'pergunta', headerName: 'Pergunta', width: 250 },
    { field: 'objetivo', headerName: 'Objetivo', width: 350 },
    { field: 'artefato', headerName: 'Artefato gerado', width: 200 },
  ]}
  rows={[
    {
      id: 1,
      numero: "01",
      pergunta: "Que problema/necessidade busca suprir?",
      objetivo: "Compreender os obstáculos gerados pela ausência de uma linguagem que supra as necessidades.",
      artefato: "Texto síntese."
    },
    {
      id: 2,
      numero: "02",
      pergunta: "O que sua linguagem teria de diferença crítica? Realmente não há algo já existente que supra suas necessidades?",
      objetivo: "Justificar o “porquê” da criação de uma nova linguagem, partindo da busca de ferramentas similares e do relato dos diferenciais.",
      artefato: "Tabela de diferenciais e similares"
    },
    {
      id: 3,
      numero: "03",
      pergunta: "Como seria resolvida essa problemática?",
      objetivo: "Definir as características necessárias para a linguagem a ser desenvolvida.",
      artefato: "Lista de demandas"
    },
    {
      id: 4,
      numero: "04",
      pergunta: "De que forma?",
      objetivo: "Enumerar as ferramentas que serão empregadas para a realização dos objetivos, detalhando a funcionalidade da escolha.",
      artefato: "Listagem das ferramentas e suas respectivas funcionalidades"
    },
  ]}
/>
</>

export const quadro05 = <>
<Table
  columns={[
    { field: 'linguagem', headerName: 'Linguagem', width: 150 },
    { field: 'descricao', headerName: 'Descrição', width: 350 },
    { field: 'diferenciais', headerName: 'Diferenciais', width: 350 },
  ]}
  rows={[
    {
      id: 1,
      linguagem: "Potigol",
      descricao: "Linguagem funcional criada no IFRN, voltada para ensino. Tem sintaxe simples e clara, ideal para introduzir conceitos de programação funcional sem complexidade excessiva.",
      diferenciais: "Não possui retorno claro de todas as fases da compilação. Aqui o foco é ensinar a programar, mas o objetivo é ensinar a montar linguagens."
    },
    {
      id: 2,
      linguagem: "Scratch",
      descricao: "Permite que iniciantes aprendam lógica de programação sem precisar escrever código textual. Muito usada em escolas para introduzir conceitos de algoritmos e pensamento computacional.",
      diferenciais: "Abstração do código diretamente. Não possui comandos em português. Aqui o foco é ensinar a programar, mas o objetivo é ensinar a montar linguagens."
    },
  ]}
/>
</>

export const quadro06 = <>
<Table
  columns={[
    { field: 'ferramenta', headerName: 'Ferramenta', width: 200 },
    { field: 'funcionalidade', headerName: 'Funcionalidade', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      ferramenta: "ANTLR",
      funcionalidade: "Produção da gramática, seguida pela construção do lexer e do parser, resultando ao final em uma árvore sintática concreta, adequada para servir como base na geração de código intermediário."
    },
    {
      id: 2,
      ferramenta: "LLVM",
      funcionalidade: "Gerador de representação de código intermediário."
    },
  ]}
/>
</>

export const quadro07 = <>
<Table
  columns={[
    { field: 'tipo', headerName: 'Nome do Tipo', width: 200 },
    { field: 'descricao', headerName: 'Descrição', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      tipo: "Inteiro",
      descricao: "Tipo primitivo utilizado para representar valores numéricos inteiros, ou seja, números sem parte fracionária."
    },
    {
      id: 2,
      tipo: "Flutuante",
      descricao: "Tipo numérico destinado à representação de valores reais, ou seja, números que possuem parte fracionária."
    },
    {
      id: 3,
      tipo: "Caracter",
      descricao: "Tipo destinado a representação de cadeia de caracteres, ou seja, para representar textos."
    },
    {
      id: 4,
      tipo: "Bool",
      descricao: "Tipo destinado a representação de valores de verdadeiro ou falso."
    },
    {
      id: 5,
      tipo: "Nada",
      descricao: "Tipo destinado a representação da ausência de valor especificamente no contexto de retorno de funções."
    },
  ]}
/>
</>

export const quadro08 = <>
<Table
  columns={[
    { field: 'operador', headerName: 'Operador', width: 150 },
    { field: 'descricao', headerName: 'Descrição', width: 550 },
  ]}
  rows={[
    {
      id: 1,
      operador: ";",
      descricao: "Representa fim de comandos."
    },
    {
      id: 2,
      operador: "*",
      descricao: "Representa a operação matemática de multiplicação."
    },
    {
      id: 3,
      operador: "/",
      descricao: "Representa a operação matemática de divisão."
    },
    {
      id: 4,
      operador: "%",
      descricao: "Representa a operação matemática de resto de divisão."
    },
    {
      id: 5,
      operador: "**",
      descricao: "Representa a operação matemática de potenciação."
    },
    {
      id: 6,
      operador: "+",
      descricao: "Representa a operação matemática de adição."
    },
    {
      id: 7,
      operador: "-",
      descricao: "Representa a operação matemática de subtração."
    },
    {
      id: 8,
      operador: ">",
      descricao: "Representa o operador de comparação maior que."
    },
    {
      id: 9,
      operador: "<",
      descricao: "Representa o operador de comparação menor que."
    },
    {
      id: 10,
      operador: ">=",
      descricao: "Representa o operador de comparação maior ou igual que."
    },
    {
      id: 11,
      operador: "<=",
      descricao: "Representa o operador de comparação menor ou igual que."
    },
    {
      id: 12,
      operador: "!=",
      descricao: "Representa o operador de comparação diferente de."
    },
    {
      id: 13,
      operador: "==",
      descricao: "Representa o operador de comparação igual que."
    },
    {
      id: 14,
      operador: "{ }",
      descricao: "Utilizado para conter bloco de código executado segundo alguma condição."
    },
    {
      id: 15,
      operador: "( )",
      descricao: "Utilizado para priorizar a execução de operações matemáticas, para conter condicionais em laços de repetição ou em condicional ou na definição de parâmetros de funções."
    },
    {
      id: 16,
      operador: "[ ]",
      descricao: "Utilizado para acesso a elementos de uma lista por meio do índice."
    },
    {
      id: 17,
      operador: ":)",
      descricao: "Indica que aquela linha de código está comentada."
    },
  ]}
/>
</>

export const quadro09 = <>
<Table
  columns={[
    { field: 'estrutura', headerName: 'Estrutura da Linguagem', width: 220 },
    { field: 'descricao', headerName: 'Descrição', width: 400 },
    { field: 'exemplo', headerName: 'Estrutura exemplo', width: 400 },
  ]}
  rows={[
    {
      id: 1,
      estrutura: "Variável",
      descricao: "Item que armazena valor atribuído. Ao estar sendo criada pela primeira vez deve vir acompanhada de um tipo.",
      exemplo: "a : inteiro = 5;"
    },
    {
      id: 2,
      estrutura: "Laço de iteração",
      descricao: "Iteração entre elementos enquanto a condição definida for verdadeira.",
      exemplo: "enquanto (a > b) { o que vai ser realizado }"
    },
    {
      id: 3,
      estrutura: "Lista",
      descricao: "Armazenar elementos do mesmo tipo.",
      exemplo: "nome_variavel{2} = [5,80];"
    },
    {
      id: 4,
      estrutura: "Acesso a lista",
      descricao: "Obter valor armazenado em um índice específico de uma lista.",
      exemplo: "nome_variavel[1];"
    },
    {
      id: 5,
      estrutura: "Funcionalidade",
      descricao: "Blocos de códigos reutilizáveis.",
      exemplo: `funcionalidade nome_funcao (nome_parametro :tipo_parametro) :tipo_retorno_funcao {
   o que vai ser realizado
   retorne valor_retornado;
}`
    },
    {
      id: 6,
      estrutura: "Invocação da funcionalidade",
      descricao: "Chamada de funções já criadas anteriormente, passando os parâmetros que ela necessita.",
      exemplo: "nome_funcao(nome_parametro);"
    },
    {
      id: 7,
      estrutura: "Mostrar",
      descricao: "Saída de dados via terminal, em que deve ser especificado o tipo do dado a ser mostrado.",
      exemplo: "mostrarInteiro(valor_mostrar);"
    },
    {
      id: 8,
      estrutura: "Pegar",
      descricao: "Entrada de dados via terminal, em que deve ser especificado o tipo do dado a ser pego.",
      exemplo: "pegaInteiro;"
    },
    {
      id: 9,
      estrutura: "Caso",
      descricao: "Execução de blocos de código de forma condicional.",
      exemplo: `caso (condicao){
   o que vai ser realizado
}
senao {
   o que vai ser realizado
}`
    },
  ]}
/>
</>

export const quadro10 = <>
<Table
  columns={[
    { field: 'palavra', headerName: 'Palavra-chave', width: 200 },
    { field: 'descricao', headerName: 'Descrição', width: 400 },
    { field: 'exemplo', headerName: 'Exemplo de uso', width: 400 },
  ]}
  rows={[
    {
      id: 1,
      palavra: "pegaInteiro",
      descricao: "Representa uma chamada de números inteiros via terminal.",
      exemplo: "a :inteiro = pegaInteiro;"
    },
    {
      id: 2,
      palavra: "pegaFlutuante",
      descricao: "Representa uma chamada de números com ponto flutuante via terminal.",
      exemplo: "a :flutuante = pegaFlutuante;"
    },
    {
      id: 3,
      palavra: "pegaCaracteres",
      descricao: "Representa uma chamada de caracteres via terminal.",
      exemplo: "a :caracter = pegaCaracteres;"
    },
    {
      id: 4,
      palavra: "mostrarInteiro",
      descricao: "Representa a exibição de números inteiros via terminal.",
      exemplo: "mostrarInteiro(a);"
    },
    {
      id: 5,
      palavra: "mostrarFlutuante",
      descricao: "Representa a exibição de números com ponto flutuante via terminal.",
      exemplo: "mostrarFlutuante(a);"
    },
    {
      id: 6,
      palavra: "mostrarCaracteres",
      descricao: "Representa a exibição de caracteres via terminal.",
      exemplo: "mostrarCaracteres(a);"
    },
    {
      id: 7,
      palavra: "mostrarBool",
      descricao: "Representa a exibição de booleanos via terminal.",
      exemplo: "mostrarBool(a);"
    },
    {
      id: 8,
      palavra: "caso",
      descricao: "Representa a funcionalidade de condicional.",
      exemplo: `caso (condicao){
   o que vai ser realizado
}`
    },
    {
      id: 9,
      palavra: "senao",
      descricao: "Representa o início de um bloco de código caso uma condição seja falsa em uma funcionalidade de condicional.",
      exemplo: `senao {
   o que vai ser realizado
}`
    },
    {
      id: 10,
      palavra: "retorne",
      descricao: "Representa a palavra que antecede o que deve ser retornado em uma função.",
      exemplo: "retorne valor_retornado;"
    },
    {
      id: 11,
      palavra: "verdadeiro",
      descricao: "Representa o valor verdadeiro.",
      exemplo: "a :bool = verdadeiro;"
    },
    {
      id: 12,
      palavra: "falso",
      descricao: "Representa o valor falso.",
      exemplo: "a :bool = falso;"
    },
    {
      id: 13,
      palavra: ":)",
      descricao: "Representa que uma linha está comentada.",
      exemplo: ":) Esse é um comentário"
    },
    {
      id: 14,
      palavra: "enquanto",
      descricao: "Representa um laço de iteração.",
      exemplo: "enquanto (a > b) { o que vai ser realizado }"
    },
    {
      id: 15,
      palavra: "funcionalidade",
      descricao: "Representa uma função.",
      exemplo: `funcionalidade nome_funcao (nome_parametro :tipo_parametro) :tipo_retorno_funcao {
   o que vai ser realizado
   retorne valor_retornado;
}`
    },
  ]}
/>
</>

export const quadro11 = <>
<Table
  columns={[
    { field: 'ferramenta', headerName: 'Ferramenta', width: 200 },
    { field: 'diferencial', headerName: 'Diferencial', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      ferramenta: "Github",
      diferencial: "Plataforma baseada em Git utilizada para hospedagem e versionamento de código. Destaca-se pela ampla gama de ferramentas de integração contínua."
    },
    {
      id: 2,
      ferramenta: "Gitlab",
      diferencial: "Plataforma de versionamento de código que incorpora nativamente funcionalidades de CI/CD e gestão de repositórios."
    },
    {
      id: 3,
      ferramenta: "Bitbucket",
      diferencial: "Plataforma de armazenamento de repositórios Git com foco em ambientes corporativos. Fornece recursos avançados de controle de versão e gestão de equipes."
    },
  ]}
/>
</>

export const quadro12 = <>
<Table
  columns={[
    { field: 'ide', headerName: 'IDE', width: 200 },
    { field: 'diferencial', headerName: 'Diferencial', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      ide: "Visual Studio Code",
      diferencial: "Editor de código com suporte a diversas linguagens e integração com sistemas de versionamento. Além de permitir a personalização avançada do ambiente de desenvolvimento."
    },
    {
      id: 2,
      ide: "Eclipse",
      diferencial: "IDE robusta adequada para aplicações Java de grande porte. Oferece amplo ecossistema de plugins, suporte a múltiplas linguagens e ferramentas de modelagem."
    },
    {
      id: 3,
      ide: "Intellij",
      diferencial: "Ambiente de desenvolvimento profissional, reconhecido pelo suporte às linguagens Java e Kotlin. Amplamente utilizado em contextos industriais."
    },
  ]}
/>
</>

export const quadro13 = <>
<Table
  columns={[
    { field: 'elemento', headerName: 'Elemento', width: 250 },
    { field: 'objetivo', headerName: 'Objetivo', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      elemento: "Identificação do Projeto",
      objetivo: "Nome, versão, responsáveis e contexto de aplicação."
    },
    {
      id: 2,
      elemento: "Modelo de Licenciamento",
      objetivo: "Define se ele vai ser código aberto, possuir licença comercial ou partes abertas e partes restritas."
    },
    {
      id: 3,
      elemento: "Direitos e Restrições de Uso",
      objetivo: "Definir permissões de uso e modificação além de definir se é de uso comercial, sublicenciamento ou de patentes."
    },
    {
      id: 4,
      elemento: "Política de Distribuição",
      objetivo: "Definição se o projeto será disponibilizado publicamente em alguma plataforma e estratégia de distribuição comercial."
    },
    {
      id: 5,
      elemento: "Estratégia de manutenção e suporte",
      objetivo: "Listagem de estratégias para manter a linguagem após ela ser entregue para casos de encontro de erros."
    },
    {
      id: 6,
      elemento: "Fonte de financiamento",
      objetivo: "Se o projeto foi patrocinado, venda, doações ou outro meio de fonte de financiamento."
    },
  ]}
/>
</>

export const quadro14 = <>
<Table
  columns={[
    { field: 'utilidade', headerName: 'Utilidade', width: 350 },
    { field: 'ferramenta', headerName: 'Ferramenta', width: 300 },
  ]}
  rows={[
    {
      id: 1,
      utilidade: "Local de armazenamento e versionamento de código",
      ferramenta: "Github"
    },
    {
      id: 2,
      utilidade: "Ambiente de desenvolvimento integrado (IDE)",
      ferramenta: "VsCode"
    },
    {
      id: 3,
      utilidade: "Sistema operacional",
      ferramenta: "Linux"
    },
  ]}
/>
</>

export const quadro15 = <>
<Table
  columns={[
    { field: 'simbolo', headerName: 'Símbolo', width: 150 },
    { field: 'significado', headerName: 'Significado', width: 300 },
    { field: 'exemplo', headerName: 'Exemplo no NiloScript', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      simbolo: "*",
      significado: "Uma estrutura pode se repetir 0 ou muitas vezes.",
      exemplo: `VAR : [a-zA-Z_][a-zA-Z0-9_]*;
Ou seja, uma variável é um caractere que pode ou não ser seguido por outros caracteres. Isso permite que uma variável seja “a” ou “primeiraVarivavel” ou até mesmo “media_ponderada”.`
    },
    {
      id: 2,
      simbolo: "+",
      significado: "Uma estrutura deve se repetir 1 ou muitas vezes.",
      exemplo: `INT : [0-9]+;
Ou seja, um número inteiro é pelo menos um número que pode ser alongado para a junção de vários números. Isso permite a formação de valores como 1 ou até mesmo 111.`
    },
    {
      id: 3,
      simbolo: "~",
      significado: "Negação de uma estrutura.",
      exemplo: `STRING : '"' ~('"')* '"'; 
Ou seja, uma string pode ser qualquer coisa menos uma segunda aspas pois isso representaria o fim da string. Isso possibilita criação de strings como “olá, mundo” desde que não seja “olá “ mundo “ pois há uma aspas a mais.`
    },
    {
      id: 4,
      simbolo: "EOF",
      significado: "Indica o fim do arquivo.",
      exemplo: `program : (stmt)+ EOF;
Ou seja, um programa é uma lista de códigos até o fim do arquivo.`
    },
    {
      id: 5,
      simbolo: "-> skip",
      significado: "Indica que toda vez que o lexer encontrar aquela estrutura ela vai ser ignorada e não gerará tokens e consequentemente não aparecerá na árvore.",
      exemplo: `TAB : [\\t]+ -> skip;
Ou seja, toda vez que ele encontrar uma tabulação no código-fonte ele irá ignorar. Isso significa que:
“olá, mundo” e
“olá, mundo”
São a mesma coisa para o ANTLR.`
    },
  ]}
/>
</>

export const quadro16 = <>
<Table
  columns={[
    { field: 'nome', headerName: 'Nome', width: 250 },
    { field: 'descricao', headerName: 'Descrição', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      nome: "Teste de Parsing",
      descricao: "Avalia se a gramática aceita/rejeita entradas corretamente."
    },
    {
      id: 2,
      nome: "Teste de Geração de IR",
      descricao: "Examina o formato do LLVM IR."
    },
    {
      id: 3,
      nome: "Teste de Fuzzing",
      descricao: "Avalia respostas da linguagem a entradas aleatórias e erradas."
    },
  ]}
/>
</>

export const quadro17 = <>
<Table
  columns={[
    { field: 'ferramenta', headerName: 'Ferramenta', width: 250 },
    { field: 'uso', headerName: 'Uso', width: 400 },
    { field: 'tipo', headerName: 'Tipo de teste que ele faz', width: 400 },
  ]}
  rows={[
    {
      id: 1,
      ferramenta: "LLVM Lit",
      uso: "Ferramenta integrada ao LLVM para execução de testes.",
      tipo: "Testes funcionais e de regressão em compiladores e ferramentas baseadas em LLVM."
    },
    {
      id: 2,
      ferramenta: "ANTLR TestRig (grun)",
      uso: "Utilitário incluído no runtime do ANTLR que permite testar gramáticas. Mostra como a entrada é analisada pelas regras definidas.",
      tipo: "Testes de parsing e validação de gramática."
    },
    {
      id: 3,
      ferramenta: "ANTLR4TestGenerator",
      uso: "Ferramenta que gera automaticamente casos de teste a partir de gramáticas ANTLR4.",
      tipo: "Testes automatizados de gramática, cobrindo diferentes caminhos de análise."
    },
    {
      id: 4,
      ferramenta: "Hypothesis",
      uso: "Gera entradas automaticamente para verificar propriedades definidas pelo desenvolvedor.",
      tipo: "Testes explorando casos extremos e entradas inesperadas para validar robustez da linguagem."
    },
    {
      id: 5,
      ferramenta: "QuickCheck",
      uso: "Similar ao Hypothesis, mas aplicada em ambientes funcionais.",
      tipo: "Testes explorando casos extremos e entradas inesperadas para validar robustez da linguagem."
    },
  ]}
/>
</>

export const quadro18 = <>
<Table
  columns={[
    { field: 'artefato', headerName: 'Artefato de gestão de defeito', width: 300 },
    { field: 'descricao', headerName: 'Descrição', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      artefato: "Diagrama de Tendência de Defeitos",
      descricao: "Representação gráfica da evolução do número de defeitos ao longo do tempo. Permite o monitoramento da linguagem durante o processo de desenvolvimento."
    },
    {
      id: 2,
      artefato: "Relatório de Densidade de Defeitos",
      descricao: "Documento que relaciona a quantidade de defeitos encontrados ao tamanho do código ou ao número de funcionalidades implementadas. É utilizado para medir a qualidade e identificar partes mais suscetíveis a falhas."
    },
    {
      id: 3,
      artefato: "Relatórios de tempo de permanência",
      descricao: "Registro de intervalo de tempo entre a identificação de um defeito e sua resolução."
    },
  ]}
/>
</>

export const quadro19 = <>
<Table
  columns={[
    { field: 'parametro', headerName: 'Parâmetro', width: 250 },
    { field: 'descricao', headerName: 'Descrição', width: 500 },
  ]}
  rows={[
    {
      id: 1,
      parametro: "Status",
      descricao: "Classifica o bug em “pendente” e “resolvido” mas pode ser flexível e receber outras denominações e variações."
    },
    {
      id: 2,
      parametro: "Local",
      descricao: "Origem do erro, onde foi encontrado o comportamento inesperado."
    },
    {
      id: 3,
      parametro: "Prioridade",
      descricao: "Prioridade de resolução daquele problema. Pode ser classificado em “Alta”, “Média” e “Baixa”."
    },
    {
      id: 4,
      parametro: "Gravidade",
      descricao: "O quão impactante pode ser aquele problema para a linguagem: “Crítico”, “Moderado” e “Pequeno”."
    },
  ]}
/>
</>

export const gramatica = `
    Todo idioma possui uma gramática que dita as suas regras na forma escrita e falada, para que assim seja possível a formação de sentenças com acepção (NEVES, 2002). O contexto de línguas faladas pelos indivíduos não se difere muito ao de linguagens de programação. Essa semelhança se explica pelo fato que a criação de linguagens de codificação necessita da definição de uma gramática como método formal de representação da sintaxe (Sebesta, 2011, p.139). 
    Além disso, existem diferentes tipos de gramáticas que se adaptam às necessidades do projeto de linguagem em desenvolvimento. O linguista norte-americano Chomsky (1959) desenvolveu uma categorização das gramáticas e linguagens que se denomina hierarquia de Chomsky. A categorização foi dividida em 4 classes que são gramáticas: irrestritas, sensíveis ao contexto, livres de contexto e regulares. Essas classes foram baseadas na complexidade e na capacidade de a partir de um conjunto finito de regras a linguagem poder se desdobrar em infinitas sentenças aceitáveis. 
        
    Figura 03 - Recorte de uma gramática livre de contexto
`

export const gramatica2 = `
    Na área da computação, a classe mais difundida é a das gramáticas livres de contexto (GLC)(MIGHT, [20--]). Elas são definidas como gramáticas cujas regras, chamadas de produções, possuem um único símbolo não-terminal no lado esquerdo (JOHANN, 2020). Esse não-terminal representa uma estrutura da linguagem que pode ser substituída por uma sequência de símbolos terminais e/ou não-terminais descritos no lado direito da produção. A Figura 03 mostra um recorte de uma gramática livre de contexto que representa uma produção de atribuição em que um não-terminal chamado assignment é composto por terminais de variável e seu respectivo tipo além de um não-terminal chamado value que está associado a diferentes produções: term, input, acessList e functionCall.
    No desenvolvimento de linguagens, a gramática costuma ser o primeiro passo de implementação (MIGHT, [20--]) adaptando-se apenas a ferramentas utilizadas no projeto. Dessa forma, podemos concluir que uma gramática bem definida é o pontapé inicial para a construção de uma linguagem estruturada, pois permite formalmente a definição das sentenças que possuem sentido lógico na linguagem.
`

export const tabelaSimbolos = `
    Para o desenvolvimento de tradutores de uma linguagem muitos recursos são utilizados. Um desses artifícios é a tabela de símbolos que nada mais é que uma estrutura de dados normalmente tabular que armazena informações sobre identificadores, constantes e assinaturas de funções de um código-fonte (AHO et al., 2007, 	p.07).

        Figura 04 - Tabela de símbolos partido de um exemplo de código
`

export const tabelaSimbolo2 = `
    A Figura 04 mostra um exemplo de tabela de símbolos que armazena informações sobre as variáveis “a” e “b”. Estas informações são nome, tipo, endereços de memória do valor associado àquele identificador e o escopo que se encontra aquele símbolo no texto-fonte. Em uma saída de dados via terminal da variável “a”, por exemplo, apenas com o seu nome é possível comunicar-se com  tabela de símbolos e ter acesso ao seu valor. Desse modo, é notável que com a utilização dessa estrutura de dados conseguimos acessar de forma simplificada metadados das variáveis e funções utilizadas no código e usá-los durante todo o processo de tradução (Sebesta, 2011, p.48).
`

export const compiladores = `
    Nessa seção, iremos abordar detalhadamente sobre as etapas de compilação de um texto-fonte, objetivando um aprendizado mais aprofundado sobre o que é necessário para a construção de uma linguagem de programação. Caso durante o processo de produção de linguagem o método de tradução optado pela equipe não for a compilação, o conhecimento apresentado nessa seção ainda será muito útil pois, assim como explicado anteriormente, há muitas etapas em comum entre as diferentes técnicas de translação.
    O processo de compilação de uma linguagem, assim como exemplificado no tópico 2.1.2, é um das formas de tradução de um código-fonte para binário de máquina. O compilador constitui dentro de si processos otimizados de transformação do código-fonte para linguagem de máquina, resultando também na rapidez de execução do programa. Por esse motivo, todos os exemplos construídos neste processo são centrados nas etapas de compilação que de acordo com AHO et al.(2007, p.03) são cinco: Análise léxica, análise sintática, análise semântica, representação intermediária, otimização e geração/execução de código de máquina. Além disso,  um compilador pode ser dividido em 2 grandes módulos, que distribui as seis fases dentro deles, que é o módulo de análise ou frontend e módulo de síntese ou backend.  A representação visual  apresentada na Figura 05 mostra, de forma simplificada, esses módulos e fases.
`
export const lexica = `
    A primeira etapa do processo de compilação é chamada de Análise Léxica ou Lexer. Partindo do código-fonte o lexer tem como principal objetivo a geração de tokens baseados na gramática definida pelo programador, em que os tokens podem ser definidos como a menor unidade de um programa.
        Figura 06 - Tokens gerados a partir de uma gramática em formato BNF
`
export const lexica2 = `
    Após o transcorrer do código-fonte pela análise léxica, o texto é convertido em uma sequência de tokens, que representam unidades léxicas significativas da linguagem, como identificadores, palavras-chave, operadores e literais. A Figura 6 mostra um exemplo prático, em que, partindo de uma gramática simplificada com o símbolo não-terminal “Assignment” e “value” e o terminal “RETURN_TYPE”, o exemplo de código fonte “a :inteiro = 1;” pode ser subdividido e classificado como 3 tokens diferentes pela definição da gramática: “inteiro” para RETURN_TYPE, “a” para VAR e “1” para INT. Isso nos mostra que o lexer se preocupa com a categorização do código-fonte, o que será de muita utilidade nas fases posteriores.
`

export const sintatica = `
    Na análise sintática os tokens criados na etapa de lexer são convertidos e organizados em uma árvore sintática. Cada nó dessa estrutura corresponde a construções definidas na gramática, refletindo como os tokens se agrupam para formar expressões válidas (Sebesta, 2011, p.200), possibilitando a visitação através dela posteriormente. É importante ressaltar que em muitos compiladores, essa árvore corresponde a uma árvore sintática concreta (CST), em que a partir dela pode ser derivada uma árvore sintática abstrata (AST).

        Figura 07 - Árvore sintática abstrata do exemplo da Figura 06
`

export const sintatica2 = `
    O exemplo apresentado na Figura 05 ilustra uma AST construída a partir do código-fonte apresentado na Figura 04. Nesse contexto, cada nó da árvore corresponde a um elemento sintático do programa, representando de forma hierárquica a estrutura lógica definida pelas regras gramaticais da linguagem.
`

export const semantica = `
    Quando se trata da análise semântica é o momento de incrementar os nós da AST adicionando informações relevantes sobre tipagem, escopo e verificação se a estrutura sintática produzida pelo parser faz sentido em termos de significado dentro da linguagem (AHO et al., 2007, p.06).
`
export const IR = `
    Muitas implementações de compiladores utilizam, para auxiliar na transformação para código de máquina, a criação de uma representação intermediária (IR). Essa forma intermediadora é uma versão do código que intercepta as fases do frontend e backend de um compilador funcionando como uma abstração do código-fonte que preserva sua estrutura lógica, mas em um formato mais adequado para análise e transformação (AHO et al., 2007, p.06).
    A importância de geração de uma IR e não diretamente de binários de máquina se justifica pelo aumento de formas de otimização do código original para que sejam aproveitados recursos como memória e chamadas de sistemas.
`
export const otimizacao = `
    Após a criação de uma representação intermediária o código resultante passa por uma série de otimizações. Elas refinam o código em diferentes níveis, fazendo melhorias significativas que antecedem a transformação para código de máquina (AHO et al., 2007, p.06). Dentre as otimizações listadas por Lima ( 2022) temos:
        - Remoção de código morto, ou seja, comandos que não são utilizados em outras partes do código. 
        - Substituição de cálculos repetidos por referência aos resultados obtidos anteriormente para evitar processamento desnecessário.
        - Otimização de laços de repetições.
    Além das técnicas citadas acima existem outros meios para a melhoria do IR mas que costumam ser abstraídas por ferramentas que produzem o backend do compilador.
`

export const maquina = `
    Por fim, a etapa que antecede o fim do ciclo de compilação é a geração de código de máquina. Nessa fase a representação intermediária que passou por etapas de otimização é transformada em instruções binárias diretamente compreensíveis pelo hardware (AHO et al., 2007, p.07). 
    Após a geração do código de máquina, o compilador disponibiliza ao programador o executável resultante, que representa o produto final do processamento do texto-fonte. Dessa forma, partindo do executável o programador pode processar e obter as respostas para o seu programa. 
	Por fim, podemos compreender a compilação como um processo complexo e com etapas bem definidas. Ao retornarmos a formas de tradução de um código conseguimos delimitar agora, de forma clara, as diferentes etapas que envolvem as formas distintas de tradução. 
		Figura 08 - Comparação entre as etapas da compilação e interpretação
`
export const maquina2 = `
    Na Figura 08 é notável a diminuição de etapas que um interpretador realiza em comparação com o compilador pois as etapas de representação intermediária, otimização e geração de código de máquina são eliminadas pelo interpretador. Isso se explica pelo fato de que o interpretador executa diretamente os comandos (LEE 2017) . Dessa forma, conseguimos delimitar as principais diferenças dos métodos de translação e entender detalhadamente as etapas de compilação para que seja possível iniciar a produção da linguagem.
`

export const ferramentas = `
    Este processo está estruturado em fases, cada uma acompanhada de uma seção prática para ilustrar o funcionamento da mesma. Para fins de demonstração, será utilizada uma linguagem desenvolvida especificamente para este processo, denominada NiloScript. Contudo, isso não implica que as ferramentas empregadas em conjunto para a criação desta linguagem devam necessariamente ser utilizadas nas implementações. Todavia, para a compreensão dos exemplos práticos, é importante entender a utilização das ferramentas e corrobora na escolha de instrumentos que se adequem às necessidades do projeto.
`
export const niloScript = `
    Aprender sobre um novo tópico pode ocorrer de maneiras diferentes. De acordo com o método Vark de estudo, existem 4 formas de aprendizagem que incluem estímulos visuais, auditivos, leitura/escrita e cinestésica. Esse processo busca estimular a aprendizagem focando na utilização de métodos de ensino visuais e cinestésicos (VARK, 2026). Para exemplificações práticas serão empregados incentivos gráficos, isso significa que para cada seção de atividades apresentadas em cada fase do processo, iremos mostrar, de forma visual e prática, como pode ser realizada cada atividade proposta, utilizando como objeto de exemplificação,  a linguagem de programação NiloScript.
    O NiloScript é uma linguagem de programação de propósito geral (GPL) simplificada produzida com C++ criada especificamente para este trabalho. A linguagem surgiu com o objetivo de demonstração simplificada de estruturas básicas como: Laços de repetição, funções, listas, operações aritméticas e outras estruturas simples que compõem normalmente as linguagens de propósito geral. 
        Figura 09 - Estruturas e ferramentas do NiloScript. 
`

export const niloScript2 = `
    Para a produção da linguagem foram utilizadas diferentes tecnologias de apoio, com o objetivo de simplificar a produção e melhorar a legibilidade dos exemplos apresentados no processo. Conforme ilustrado pela Figura 09, tais tecnologias desempenharam papéis distintos e complementares na composição da linguagem, em que é válido evidenciar o uso do ANTLR e LLVM. Essas ferramentas auxiliam na construção do compilador da linguagem e serão detalhados posteriormente, de modo a evidenciar a integração ao projeto e as contribuições específicas para a estruturação da linguagem NiloScript.
`
export const antlr = `
    O ANTLR (ANother Tool for Language Recognition) é um gerador de parser compatível com linguagens como Java, C++, Python e assim por diante. Ele possibilita a criação de árvores sintáticas concretas (CST) baseando-se em um arquivo de gramática (PARR, 2013). Isso significa que o ANTLR a partir da definição de símbolos terminais e não-terminais definidos pelo programador criador da linguagem gera tokens por meio da análise léxica e em seguida gera a árvore na análise sintática. 
        Figura 10 - Comparação de uma árvore sintática abstrata e uma concreta de um código-fonte NiloScript.
`

export const antlr2 = `
    A Figura 10 demonstra a diferença de uma CST e uma AST, que se caracteriza no nível de detalhamento dos tokens. Apesar de os nós da árvore sintática concreta gerada possuírem informações minuciosas sobre o código-fonte, não há a realização de análise semântica por parte da ferramenta. Por esse motivo a linguagem NiloScript, utilizada neste processo como um auxiliar representativo, em sua implementação gera uma árvore abstrata partindo da CST do ANTLR para aumentar a segurança e confiabilidade da linguagem a partir de uma análise semântica detalhada.
    Embora seja uma ótima ferramenta, que simplifica as etapas de análise de um compilador por cumprir o papel de lexer e parser, o ANTLR não é a única ferramenta que possibilita o desenvolvimento dessas etapas do compilador de uma linguagem. A seguir, iremos analisar algumas tecnologias que também podem ser utilizadas como substitutas.
`

export const antlr3 = `
    Além das ferramentas apresentadas no Quadro 02, há outras possibilidades viáveis no mercado, cabe à equipe de desenvolvimento decidir a melhor escolha para a implementação do projeto.
`
export const llvm = `
    O LLVM project é uma infraestrutura de compiladores reutilizáveis. Criado em 2000 e produzido em C++ ele foi projetado com o propósito de desenvolver técnicas de compilação estática e dinâmica (LLVM Project, 2026).
    No desenvolvimento da linguagem NiloScript, optou-se pela utilização de uma compilação estática em que o LLVM foi o responsável pela fase de síntese e geração de representação intermediária. Em outras palavras, ele serviu de suporte para que a partir da árvore sintática concreta gerada pelo ANTLR e adaptação para a geração de uma AST, fossem criadas representações intermediárias para os códigos-fonte fornecidos. A partir da representação intermediária o CLANG atuou como orquestrador de compilação das etapas de otimização, geração de código e ligação, delegadas à infraestrutura do LLVM (PROJECT, 2026). Porém, apesar do LLVM ser uma ferramenta completa e complexa, motivando a escolha dele para a produção da linguagem modelo NiloScript, há outras opções possíveis que podem desempenhar um papel similar.
`

export const llvm2 = `
    Tal qual o apresentado no Quadro 03 há diferentes tecnologias que podem prestar suporte similar ao LLVM. Porém, assim como toda tecnologia há seus pontos de diferenciações, por isso cabe aos programadores a decisão de qual irá suprir de forma otimizada as necessidades do seu projeto.
`

export const fases = `
    Com o objetivo de descomplicar a compreensão e desenvolvimento da linguagem iremos dividir o processo em cinco fases. Essas etapas possuirão o seu propósito, artefatos produzidos e por fim uma atividade prática com exemplos de possíveis resoluções.
    Porém, apesar da exposição linear das fases é importante ressaltar que a aplicação prática desse processo ocorre de forma iterativa, ou seja, não há restrições quanto ao retorno para outras fases em contextos que necessite, por exemplo, a adição de novas funcionalidades ou documentação da linguagem.
`

export const reconhecer = `
    Para a produção de uma nova linguagem de programação é essencial examinar as necessidades que cercam a sua criação. Inicialmente, antes de desenvolver iremos levantar as características para compreender o que é requerido por meio de questionamentos.
        Figura 12 - Questionamentos necessários na fase de reconhecimento
`

export const reconhecer2 = `
    A Figura 12 representa quais vão ser os questionamentos que devem ser respondidos na fase de reconhecimento para gerar ao final uma síntese do escopo e requisitos da linguagem. A seguir, vamos destrinchar a motivação de cada pergunta:
    Que problema/necessidade busca suprir?
        Primeiramente, o surgimento de uma nova linguagem de programação normalmente vem acoplada com a ideia de suprimir um problema que não pode ser resolvido com linguagens de propósito geral (GPL) , ampliando uma necessidade de desenvolvimento de uma de domínio específico. 
        Então, inicialmente é fundamental definir o problema real que cerca a ideia de desenvolvimento de uma nova linguagem, podendo ser pela ausência de suporte de outras ferramentas ou até mesmo por demandas pessoais. A questão é definir a adversidade, para que assim possamos pensar em como resolver.
    O que sua linguagem teria de diferença crítica? Realmente não há  algo já existente que supra suas necessidades?
        Desenvolver uma linguagem de programação mesmo com o uso de ferramentas que dão o suporte para isso não é uma tarefa simples, por isso é importante através de buscas, analisar se o que você necessita não é feito por outras linguagens. Nesse momento é essencial o estabelecimento e retenção dos diferenciais que colaborarão na resposta da próxima pergunta.
    Como seria resolvida essa problemática?
        Neste instante é momento de refletir sobre os atributos presentes em uma linguagem que supra o problema definido. Por exemplo, ela deve ter acesso à memória? Deve ter suporte a bibliotecas externas? É necessário examinar essas questões.
        Respondendo está pergunta será possível definir de forma clara qual o escopo geral da linguagem e qual papel ela vai desempenhar na diminuição da problemática apontada na pergunta inicial.
    De que forma?
        Esta parte é destinada para aqueles indivíduos que já possuem alguma expertise com a produção de linguagens ou buscam testar conhecimentos aprendidos que até agora tinham sido vistos apenas na teoria, pois é preciso definir as ferramentas que serão usadas em todo o processo de desenvolvimento. Nas partes práticas serão utilizadas as ferramentas citadas anteriormente, mas há à flexibilidade de escolha dos instrumentos que se adequam ao desenvolvimento da sua linguagem. Contudo, tal fato não renega a realização dos exercícios de treinamento.	

    5.1.1 Mão na massa
        O seu propósito na fase de reconhecimento é responder os questionamentos levantados no tópico anterior, gerando artefatos em cada questionamento. O processo de análise e de respostas às perguntas deve abranger todos os interessados e envolvidos na criação da nova linguagem para que assim o escopo fique bem definido.

        Figura 13 - Artefatos que devem ser produzidos na fase de reconhecimento
`
export const reconhecer3 = `
    A imagem acima representa visualmente o que deve ser produzido até o fim da fase de reconhecimento, para documentação e organização das ideias.
`
export const reconhecer4 = `
    Cada questionamento gera um artefato documental (texto síntese, tabela comparativa, lista de demandas, tabela de ferramentas), que serve como registro formal e estruturado das decisões tomadas, ajudando a assegurar que o desenvolvimento posterior ocorra de forma alinhada às necessidades dos interessados.

    5.1.2 Exemplo prático
        A partir da aplicação da pergunta 01 (Figura 12) com todos os envolvidos no desenvolvimento da linguagem , o artefato sugerido para ser produzido logo em seguida é o Texto Síntese. Nele deve ser definido de forma clara e concisa o problema que motivou a ideia de criar uma linguagem. A Figura abaixo mostra um exemplo prático de Texto Síntese da linguagem de programação NiloScript, que será utilizada ao longo dos exemplos de cada artefato para a compreensão clara do que deve ser produzido.
`

export const reconhecer5 = `
    Para o questionamento 02 o objeto gerado é a Tabela de Similares. Nessa tabela é associada a cada linguagem mencionada as características que se ausentam mas que seriam essenciais na sua linguagem para resolver o problema apresentado. A partir dessa análise será definida a real necessidade de criação de uma nova linguagem, refletindo se nenhuma das linguagens pesquisadas cumprem as necessidades do projeto.
`

export const reconhecer6 = `
    Na pergunta de número 03 temos como material resultante a Lista de Demandas. Essa listagem elenca o que é necessário na linguagem para resolver o problema apresentado no texto síntese (Figura 14).

        Figura 15 - Exemplo de listagem de demandas de funcionalidades presentes no NiloScript para resolver o problema apresentado
`

export const reconhecer7 = `
    Para a última pergunta (Figura 12) é requerido o desenvolvimento da Listagem das Ferramentas que irão prestar suporte na implementação de todas as funcionalidades apontadas na listagem de demandas (Figura 15).

        Quadro 06 - Exemplo da tabela de ferramentas necessárias para desenvolver o NiloScript
`

export const reconhecer8 = `
    Embora existam indicações de perguntas consideradas essenciais para esta fase, recomenda-se a inclusão de outras questões conforme as necessidades específicas do projeto. É fundamental que a produção de artefatos ocorra a cada pergunta realizada, de modo a sintetizar as informações coletadas e assegurar sua utilidade e aplicabilidade na etapa seguinte do desenvolvimento.
`
export const definir = `
    A segunda fase, denota-se pela definição das características necessárias da linguagem para cumprir o que foi definido como domínio, partindo dos artefatos produzidos na etapa anterior. Durante todo o processo, a consulta e análise de todos os artefatos gerados são essenciais, pois são neles que contém informações importantes de necessidades da linguagem que foram observadas.
    
    5.2.1 Mão na massa
        Sua tarefa nesta fase é produzir os artefatos: Tabela de Tipos, Tabela de Operadores, Tabela de Estruturas da Linguagem e Tabela de Palavras-Reservadas. 

        Figura 16 - Artefatos a serem ser produzidos na fase de definição
`

export const definir2 = `
    No primeiro artefato, deve ser estabelecido o nome e uma descrição sobre cada tipo de dado, mas ele deve ser produzido apenas se a linguagem tiver tipagem dos dados. Não obstante, a tabela de operadores será utilizada para definir quais os símbolos reservados da linguagem e seus respectivos papéis. Além disso, através da tabela de estruturas da linguagem, será estabelecida as principais funcionalidades da linguagem, nomeando cada uma delas,  descrevendo o que ela deve realizar e delimitando a estrutura. Por último, a tabela de palavras-chave irá detalhar quais os caracteres/palavras, além dos tipos e operadores, que possuem um significado específico na linguagem, não podendo ser usadas em lugares como em nome de variáveis, listar e funções. 

    5.2.2 Exemplo prático
        A primeira demonstração consistirá na apresentação da tabela de tipos, na qual cada nome deverá corresponder exatamente ao identificador utilizado na linguagem. A respectiva descrição deverá indicar explicitamente quais categorias de dados podem ser armazenadas ao se empregar determinado tipo.

        Quadro 07 - Exemplo da tabela de tipos simplificada do NiloScript
`

export const definir3 = `
    A seguir é necessário listar quais os operadores reservados e suas respectivas definições e funções semânticas no contexto da própria linguagem.

        Quadro 08- Exemplo da tabela de operadores do NiloScript
`

export const definir4 = `
    Ademais, deve ser produzida a tabela de palavras-chave  que lista todos os termos que possuem uma funcionalidade dentro da sua linguagem e suas respectivas estruturas.

        Quadro 09- Exemplo tabela de estruturas da linguagem NiloScript
`

export const definir5 = `
    Por fim, a tabela de palavras-reservadas  deve conter todos os termos que possuem significado na linguagem. No documento produzido para o NiloScript,  representado na imagem abaixo, foram incluídas todas as palavras que não simbolizam nenhuma funcionalidade da linguagem, pois essa exemplificação ficou a cargo do artefato anterior (Quadro 09).

        Quadro 10- Exemplo da tabela de palavras-reservadas da linguagem NiloScript
`

export const estruturacao = `
    Um passo crucial que antecede o início de projetos de implementação é a tomada de decisões projetuais. Tais determinações englobam definições de padrões de desenvolvimento e perpassam pela organização de equipe até questões jurídicas,  em casos de grandes projetos corporativos. 
    A estruturação é composta pela produção de artefatos que suportam projetos de diferentes portes. Portanto, é importante decidir quais artefatos adequados ao seu projeto antes do início da produção.

    5.3.1 Mão na massa
        O processo de codificação deve ser antecipado pela adequação do ambiente de trabalho e pela organização da equipe. Dessa forma, a sua tarefa nesta fase é a criação de artefatos que auxiliem nessa coordenação que são: Documento de Ambiente de Trabalho, Diagrama de Arquitetura do Projeto, Diagrama de Estrutura de Diretórios, Organograma da Equipe, Diagrama de Fluxo de Trabalho e o Documento de Licenciamento e Distribuição.

        Figura 17 - Artefatos que devem ser produzidos na fase de arranjo
`

export const estruturacao2 = `
    O primeiro artefato a ser produzido consiste em um documento de organização do ambiente de trabalho, cuja finalidade é registrar os recursos utilizados no projeto. Nele deve ser delimitado o local de armazenamento e versionamento de código, ambiente de desenvolvimento integrado (IDE), o sistema operacional utilizado e qualquer informação relevante para a construção do ambiente de produção da linguagem.

        Quadro 11 - Ferramentas de versionamento e armazenamento de código
`

export const estruturacao3 = `
    Os Quadros 11 e 12 exemplificam recursos que podem ser utilizados para o versionamento e produção de código. Contudo, caso as necessidades planejadas não forem supridas por esses artifícios é importante a busca por outras possibilidades. Dessa forma, ao fim da criação deste documento o ambiente de trabalho estará bem delimitado.
    A seguir, o diagrama de arquitetura do projeto deve mostrar uma representação visual da vinculação das ferramentas de desenvolvimento utilizadas, demonstrando como é o fluxo de utilização delas inteiramente na linguagem. É aconselhável como apoio a utilização do artefato de listagem de ferramentas exemplificado na fase de reconhecimento (Quadro 06).
    Posteriormente, o diagrama de Estrutura de Diretórios  deve retratar a divisão das pastas do projeto, definindo de forma clara que tipo de arquivos existirá e o que eles devem conter. Esse artefato é relevante para a manutenção do padrão de projeto tornando a solução tecnológica mais organizada e escalável.
    O quarto artefato é o Organograma da Equipe, que define o grupo de trabalho e seus respectivos papéis dentro do processo de construção da linguagem. Este documento é apropriado para projetos de grande escala que contam com uma grande equipe. Em contrapartida, em projetos individuais ou de pequena dimensão, a produção deste artefato não se mostra necessária, uma vez que não há divisão de responsabilidades a ser formalizada.
    O próximo artefato é o diagrama de fluxo de trabalho que define a metodologia para a adição de novas funcionalidades na linguagem. Esse diagrama pode contemplar desde a criação da tarefa em uma ferramenta de gestão até o encaminhamento para revisão por outro membro da equipe. A definição detalhada desse fluxo é essencial para restringir a possibilidade de fugas da organização da equipe.
    Por fim, o documento de licenciamento e distribuição é recomendável para projetos comerciais de grande porte, pois nele são definidas questões jurídicas do projeto, incomuns para projetos pessoais.

        Quadro 13 - Elementos que podem estar presentes no documento de licenciamento e distribuição
`

export const estruturacao4 = `
    O Quadro 13 sugere possíveis seções para o último artefato, mas elas devem advir das necessidades específicas do projeto. Os tópicos abrangem desde licenciamento e restrição até mesmo estratégia para manutenção da linguagem durante todo o período de uso.

    5.3.2 Exemplo prático 
        Inicialmente, deve ser produzido na fase de arranjo o documento de ambiente de trabalho. Na tabela abaixo iremos demonstrar quais os elementos escolhidos para a composição de suporte do NiloScript.
    
        Quadro 14 - Exemplo de documento de ambiente de trabalho no NiloScript
`

export const estruturacao5 = `
    Como um projeto pequeno não houve decisões estruturais grandes para a linguagem.  Assim, há a possibilidade de adição de novos elementos. 
    A seguir, iremos demonstrar a produção feita no diagrama de arquitetura do projeto.

        Figura 18 - Exemplo de diagrama de arquitetura do NiloScript
`

export const estruturacao6 = `
    Ao final o diagrama usado como exemplo na Figura 18 deve representar de forma clara a composição das ferramentas e partes do código, esclarecendo suas funções e atribuições dentro do projeto de linguagem.
    Logo após, o diagrama de estrutura de diretórios deve se interligar mais com a concepção de implementação do código.
    Figura 19 - Exemplo de diagrama de diretórios do NiloScript  
`

export const estruturacao7 = `
    Posteriormente, apesar da linguagem NiloScript não possuir uma equipe de desenvolvimento extensa por surgir a partir de um projeto acadêmico individual, o organograma da equipe foi produzido para fins didáticos. A Figura abaixo representa uma estrutura sugerida para o artefato.

    Figura 20 - Exemplo de organograma da equipe do NiloScript
`

export const estruturacao8 = `
    De forma consecutiva, o diagrama de fluxo de trabalho deve definir de forma objetiva a sequência padrão de trabalho para a incrementação de uma nova funcionalidade.

    Figura 21 - Exemplo de diagrama de fluxo de trabalho do NiloScript
`

export const estruturacao9 = `
    Por fim, deve o artefato produzido foi o	documento de licenciamento e distribuição. O seguinte documento foi criado para fins didáticos pois ele é recomendável para grandes projetos de linguagem comerciais, cenário que não se adequa a linguagem criada para este processo.

    Figura 22 - Exemplo do documento de licenciamento e distribuição do NiloScript
`

export const codificacao = `
    A fase de codificação é a mais flexível deste processo, nesse momento será desenvolvido a versão inicial do código seguindo o fluxo de trabalho definido na etapa de arranjo. Sua flexibilidade decorre da dependência direta com as ferramentas escolhidas para o projeto, ou pela ausência delas em casos de codificação manual. 

    Figura 23 - Artefatos que devem ser produzidos na fase de codificação
`

export const codificacao1 = `
    Assim como indicado pela Figura 23 essa fase corresponde à materialização do projetado nos artefatos das etapas anteriores. Contudo, o presente trabalho irá representar o desenvolvimento das funcionalidades de uma linguagem através da produção de um compilador, para tradução de um código-fonte para um código de máquina . Porém, a forma que a linguagem será traduzida consiste em uma decisão projetual da equipe.

    5.4.1 Mão na massa
        A primeira tarefa desta fase é a preparação do ambiente. Isso significa que é necessário a configuração de todas as máquinas dedicadas ao projeto para o suporte devido às ferramentas escolhidas nas etapas anteriores para o desenvolvimento da linguagem. Esse processo envolve a criação, instalação e configuração de todas as tecnologias definidas no documento de ambiente de trabalho. O fluxo estabelecido deve ser seguido para todos os desenvolvedores envolvidos no projeto. 
        É válido ressaltar que o fluxo padronizado de produção de código, definido no diagrama de fluxo de trabalho,  é essencial durante todas as tarefas da etapa de codificação, até mesmo na fase inicial de configuração.
        Por fim, o último passo é o desenvolvimento das funcionalidades da linguagem. É fundamental que esse processo seja conduzido em concordância com os artefatos produzidos nas fases anteriores, para a garantia de conformidade com os requisitos e estruturas definidas para a linguagem.

    5.4.2 Exemplo prático 
        Nesse tópico iremos explorar em mais detalhes como foi realizado, em passos, a criação do compilador da linguagem NiloScript. Para fins didáticos foi criado duas versões do compilador do NiloScript e nessa seção iremos explorar a forma mais simplificada e recomendada caso o projeto de linguagem a ser desenvolvido seja o primeiro e as tecnologias usadas forem as mesmas. Esse fluxo simplificado consiste na geração da representação intermediária ocorrer juntamente com a análise semântica partindo da árvore concreta sintática no lugar de criar uma árvore concreta abstrata. 
        Lembrando que a explicação abaixo não se trata de algo determinismo mas apenas uma demonstração de como foi realizado na linguagem NiloScript para fins de simplificação. Muito do fluxo de implementação foi resultado das ferramentas escolhidas para o desenvolvimento. Por isso, esse fluxo não é uma regra de como realizar o desenvolvimento, mas sim uma das formas que existem para fazê-lo.

    5.4.2.1 Gramática
        O primeiro passo foi a criação da gramática. Para isso, foi-se utilizado o ANTLR em que em um arquivo com terminação “.g4” é possível determinar de forma simplificada as produções da sua linguagem, ou seja, as regras. O  nome do arquivo da gramática é determinado de acordo com o nome da linguagem, no caso do NiloScript o nome foi “NiloScript.g4”.

        Figura 24 - Trecho da gramática do NiloScript
`
export const codificacao2 = `
    Para determinar a qual linguagem aquela gramática pertence é importante colocar o indicativo no início do arquivo “grammar”  e o nome da linguagem. Posteriormente, é o momento de definir as regras léxicas e sintáticas. As regras léxicas são aquelas que geram tokens e representam o terminais da linguagem como por exemplo na Figura 24 o terminal “VAR” que representa variáveis que podem ser palavras de A a Z minúsculas ou maiúsculas e com ou sem uso de sublinhado (_). As regras sintáticas de uma gramática são aquelas que representam não-terminais da linguagem, ou seja, regras que simbolizam estruturalmente cada funcionalidade da linguagem utilizando-se de outros terminais e não-terminais definidos na linguagem. A Figura 24 mostra um exemplo de regra sintática “expression” que é composta por um terminal “VAR”, um terminal que contém um símbolo de igual e um grupo que pode ser o não–terminal que representam as funcionalidade operações matemáticas (term), acesso a elementos de uma lista (acessList), uma chamada de uma função (functionCall) ou um chamada de dados (input).  Outra diferenciação entre eles é que o nome das regras sintáticas/não-terminais são em letras minúsculas enquanto o de regras léxicas/terminais são em letras maiúsculas.
	
        Quadro 15 - Utilitários para montagem de gramáticas no ANTLR
`

export const codificacao3 = `
    Além disso, o ANTLR fornece utilitários para montagem das gramáticas. A representação tabular 15 mostra alguns símbolos e palavras-chave que podem ser utilizadas durante a montagem da gramática para auxiliar e facilitar a indicação para a ferramenta de como algo deve ser feito. Um exemplo disso é o símbolo de * que quando usado na sua gramática juntamente com não-terminais o parser do ANTLR monta a árvore com aquela estrutura em específico sendo uma lista que pode conter nenhum elemento ou vários.  

    5.4.2.2 Lexer e Parser

        Figura 25 - Comando utilizado para gerar lexer e parser a partir da gramática.
`

export const codificacao4 = `
    Para o passo seguinte, no NiloScript, partindo da gramática foram gerados arquivos através de um comando no terminal (Figura 25). Esses arquivos correspondem aos analisadores léxico e sintático, que possibilitam a geração de uma árvore sintática correspondente para qualquer código-fonte fornecido que siga as regras definidas na gramática.

        Figura 26 - Trecho da gramática do NiloScript
`

export const codificacao5 = `
    Assim como representado na Figura 26, o fluxo contou com uma sequência de chamadas aos arquivos gerados pelo ANTLR. Primeiramente, por meio da classe ifstream do C++ é realizada a leitura do texto-fonte fornecido pelo programador para que a classe ANTLRInputStream  possa lê esse arquivo e transformar todo o conteúdo em um buffer de caracteres. Em seguida, essa sequência de caracteres gerada é fornecida para o NiloScriptLexer, analisador léxico da linguagem NiloScript, para que ao fim ele resulte em tokens que representam todo o código fornecido. Porém, o fornecimento para o parser dos tokens gerados não pode ocorrer de forma direta necessitando da classe intermediária CommonTokenStream que serve para armazenar todos os tokens gerados pelo lexer permitindo que o parser consiga olhar o próximo token sem consumir além de possibilitar o acesso de todos os tokens por meio de índices. Por fim, a lista de tokens geradas e tratadas são fornecidas para o parser da linguagem NiloScriptParser, que é responsável pela criação de uma árvore sintática que ordena todos os tokens fornecidos.

    5.4.2.3 Geração de código

        Figura 27 - Fluxo de geração de uma IR partindo da árvore sintática
`

export const codificacao6 = `
    Para o prosseguimento do fluxo de compilação é necessário a geração de código intermediário. No NiloScript, a partir da árvore sintática produzida seguindo o código fonte assim foi explicado na seção 5.4.2.2 é utilizado a ferramenta LLVM para a geração de instruções compreensíveis pela própria ferramenta para a geração de código de máquina.
    
    Figura 28 - Fluxo de geração de uma IR partindo da árvore sintática 
`

export const codificacao7 = `
    As instruções utilizadas com o apoio da ferramenta LLVM foram responsáveis por consolidar, em um único módulo, toda a representação intermediária do código-fonte. Essas instruções serviram de base para a implementação de todas as funcionalidades da linguagem. A Figura 28 ilustra um exemplo de representação de um número inteiro por meio da ferramenta, evidenciando apenas uma entre as diversas possibilidades oferecidas por sua infraestrutura.

    Figura 29 - Execução do código intermediário
`

export const codificacao8 = `
    Por último, conforme explicado na Seção 4.3 e exemplificado na Figura 29, utilizou-se o Clang como intermediário na geração e execução de código de máquina, fazendo uso do backend do LLVM. Dessa forma, o compilador do NiloScript foi finalizado com suporte a todas as funcionalidades previstas na gramática.
`

export const teste = `
    Os testes de sistemas são essenciais para revelar defeitos nas linhas de código. Na produção de linguagens a etapa de testes é necessária durante todo o desenvolvimento, para a validação e garantia da confiabilidade do código gerado. Essa confiabilidade é assegurada pela verificação da compatibilidade de código com os requisitos planejados nas etapas anteriores.
    Nesse contexto, existem diversos tipos diferentes de testes,  que avaliam níveis distintos da linguagem.  Para uma maior adequação a essa variabilidade de tipos, foram criadas diversas formas de produzir avaliações de código, sendo necessária a utilização e implementação de acordo com as necessidades surgidas durante o desenvolvimento.
    
    Quadro 16 - Alguns tipos de testes que podem ser realizados em uma linguagem
`

export const teste2 = `
    Além disso, atualmente, existem diversas ferramentas que auxiliam na realização dos diferentes tipos de testes demonstrados no Quadro 16. Porém, a existência de arcabouços que ajudem nessa etapa não revoga a possibilidade de realização das avaliações de forma manual. A seguir, iremos analisar diferentes ferramentas que podem ser utilizadas nessa execução:

    Quadro 17 - Ferramentas que podem ser utilizadas
`

export const teste3 = `
    A partir da análise das tecnologias de suporte à realização de testes exemplificadas no Quadro 17,  iremos partir para a realização da atividade prática.

    5.5.1 Mão na massa
        O dever a ser cumprido nesta fase será sistematicamente dividido em quatro atividades fundamentais. O objetivo central consiste em garantir uma boa estruturação para a linguagem, além do cumprimento das funcionalidades de forma prevista, a partir da revelação de defeitos no código e gestão deles..
        Inicialmente, o papel a ser desempenhado é o de um analista, em que deve ser realizada a busca de alternativas de ferramentas que possam ser úteis para realização e automatização dos testes da linguagem. Após a pesquisa, tem de ser examinado dentre todas as opções coletadas qual é aquela que se adequa melhor ao projeto e a que você irá adotar. É importante destacar que, na ausência de ferramentas apropriadas, a depuração manual e a avaliação direta a partir dos códigos-fonte permanecem alternativas válidas e eficazes. Embora menos automatizadas, tais práticas asseguram a verificação da sintaxe, semântica e comportamento da linguagem.
        Em seguida, é preciso criar um conjunto de códigos-fonte que retratam as regras sintáticas e semânticas da sua linguagem. O grupo de textos-fonte vai ser responsável por testar as estruturas da sua linguagem e ajudar a compreender se o seu código está gerando em todas as etapas de compilação a representação correta desse grupo de exemplos.  Vale destacar a importância de produzir códigos-fonte que estão adequados às regras da linguagem, mas também testes que devem apontar erros caso as regras definidas não sejam seguidas, para que assim diferentes fluxos de produção de código sejam validados.
        O terceiro passo está diretamente condicionado à disponibilidade, ou ausência, de ferramentas específicas para a execução dos testes. Isso se explica pelo fato desta etapa ter como o objetivo a produção e execução dos testes a partir dos códigos-fonte produzidos anteriormente. É essencial que os testes contemplem os cenários “felizes” e caminhos que geram erro de forma proposital. Dessa forma, esta etapa não apenas confirma a correção funcional da linguagem, mas também avalia sua robustez diante de erros.
        Por último, é fundamental  a compreensão da importância da observação dos defeitos e desvios de funcionalidades não esperadas. A relevância de mapeamento de defeitos se justifica pelo fato que a gestão incorreta deles pode acarretar na omissão da resolução do problema, gerando possíveis inconvenientes futuros. Desse modo, uma boa gestão desses “bugs” é importante, havendo diversas formas de relatar esses erros e observar a evolução deles conforme vão sendo resolvidos.

        Quadro 18 - Diferentes formas de gerir e documentar defeitos
`
export const teste4 = `
    Para relatar esses defeitos podem ser utilizados os artefatos demonstrados no Quadro 18. Para produzir a documentação do desvio de funcionalidade de linhas de código, empregamos parâmetros para a classificação dos erros encontrados durante os testes, podendo ser pelo status, local, prioridade e gravidade.

    Quadro 19 - Parâmetros de classificação de bugs
`

export const teste5 = `
    Na última tarefa desta etapa do processo, é necessário a produção de um artefato para a classificação de defeitos de acordo com os parâmetros apontados no Quadro 19. 
    É fundamental realizar a gestão contínua dos defeitos e manter a manutenção dos testes ao longo do processo de desenvolvimento da linguagem, para garantir segurança e confiabilidade do projeto.

    5.5.2 Exemplo Prático
        Na produção do NiloScript  uma gama de testes foi aplicada para garantir a qualidade no desenvolvimento da linguagem produzida. Porém, com o objetivo de possuir maior controle no fluxo e melhor a depuração foi-se optado pela realização de testes manuais. 

        Figura 25 - Códigos-fonte do NiloScript corretos e incorretos
`

export const teste6 = `
    O fluxo de produção de testes manuais envolveu inicialmente a criação de códigos-fonte que representam diferentes cenários para todas as funcionalidades da linguagem. A imagem acima representa dois exemplos de textos-fonte em NiloScript que testam funcionalidades de operações matemáticas e exibição de dados. Esses códigos na linguagem foram elaborados um sem erros e outro contendo um erro proposital, com o intuito de avaliar o comportamento do compilador em diferentes cenários de análise e execução. Em casos que seja optado pela utilização de testes manuais no projeto de linguagem é importante a produção inicial desses códigos fontes. Para isso é importante testar todas as funcionalidades e todos os seus fluxos de erro e acerto para garantir uma resposta adequada.
	Por fim, à medida que a linguagem de programação evoluía e cada funcionalidade era implementada, os testes correspondentes foram executados. Nos casos em que o teste falhava e a resposta esperada não era obtida, retornava-se à fase de codificação para realizar as alterações necessárias. Já nos casos de sucesso, prosseguia-se com a implementação das demais funcionalidades.
	Apesar do NiloScript ter seguido em uma linha de implementação com testes manuais, recomenda-se a utilização de ferramentas de testes automatizados como incremento ao processo. Contudo, é necessário considerar as especificidades e necessidades da linguagem em desenvolvimento, de modo que a aplicação dessas ferramentas seja adequada ao contexto e realmente contribua para a qualidade do compilador.  
`

export const conclusao = `Embora a motivação do presente processo se justifique na tentativa de suprir o desprovimento de ensino de fundamentos de linguagens de codificação no curso de TADS, o processo busca alcançar um amplo público com diferentes níveis de experiência. Além disso, o processo procura, por meio de sugestões de melhorias dos seus utilizadores, alcançar uma gama de conceitos e público maior com o objetivo de colaborar na disseminação do conhecimento de linguagens de programação.`

export const referencias = `NEVES, Maria Helena de Moura. A gramática: História, teoria e análise, ensino. São Paulo: Editora Unesp, 2002. 288 p.

PROJECT, Llvm. Clang: a C language family frontend for LLVM. 2026. Disponível em: https://clang.llvm.org/. Acesso em: 02 abr. 2026.

CRUZ, Heron Sampaio da et al. Compilação Just-in-Time. 2008. Disponível em: http://pesquompile.wikidot.com/compilacaojustintime. Acesso em: 12 abr. 2026.

AHO, A. V.; LAM, M. S.; SETHI, R.; ULLMAN, J. D. Compiladores: Princípios, Técnicas e Ferramentas. 2. ed. São Paulo: Pearson Addison Wesley, 2007.

SEBESTA, Robert W.. Conceitos de linguagens de programação. Porto Alegre: Bookman, 2011. 758 p.

ARIMOTO, Maurício; OLIVEIRA, Weldrey. Dificuldades no Processo de Aprendizagem de Programação de Computadores: um survey com estudantes de cursos da área de computação. Anais do Workshop Sobre Educação em Computação (Wei), [S.L.], p. 244-254, 12 jul. 2019. Sociedade Brasileira de Computação - SBC. http://dx.doi.org/10.5753/wei.2019.6633.

LEE, Kent D.. Foundations of Programming Language. Cham: Springer, 2017.

JOHANN, Marcelo. Gramáticas Livres de Contexto. [S. L.], 2020. 30 slides, color. Disponível em: https://www.inf.ufrgs.br/~johann/comp/aula04.glc.pdf. Acesso em: 02 abr. 2026.

FREECODECAMP. Interpreted vs Compiled Programming Languages: What's the Difference? 2020. Disponível em: https://www.freecodecamp.org/news/compiled-versus-interpreted-languages/. Acesso em: 02 mar. 2026.

CHOMSKY, Noam. On certain formal properties of grammars. Information And Control, [S.L.], v. 2, n. 2, p. 137-167, jun. 1959. Elsevier BV. http://dx.doi.org/10.1016/s0019-9958(59)90362-6.


LIMA, Bruno. Otimização. 2022. Disponível em: https://wiki.inf.ufpr.br/computacao/doku.php?id=o:otimizacao. Acesso em: 02 abr. 2026.

INSTITUTO FEDERAL DE EDUCAÇÃO, CIÊNCIA E TECNOLOGIA DO RIO GRANDE DO NORTE. Projeto Pedagógico do Curso Superior de Tecnologia em Análise e Desenvolvimento de Sistemas na modalidade presencial. Natal, 2012. Disponível em: https://diatinf.ifrn.edu.br/wp-content/uploads/2024/03/PPC__Tecnologia_em_Analise_e_Desenvolvimento_de_Sistemas_2012.pdf. Acesso em: 09 set. 2025.

RUBY. Sobre o Ruby. Disponível em: https://www.ruby-lang.org/pt/about
Acesso em: 02 abr. 2026.

PARR, Terence. The Definitive ANTLR 4 Reference. S. L: Pragmatic Bookshelf, 2013. 328 p.

MIGHT, Matthew. The language of languages. Disponível em: https://wiki.inf.ufpr.br/computacao/doku.php?id=c:compiladores. Acesso em: 02 abr. 2026.

MIGHT, Matthew. The language of languages. [20--]. Disponível em: https://wiki.inf.ufpr.br/computacao/doku.php?id=c:compiladores. Acesso em: 02 abr. 2026.

LLVM Project (org.). The LLVM Compiler Infrastructure. 2026. Disponível em: https://llvm.org/. Acesso em: 4 abr. 2025.

PYTHON. The Python Tutorial. Disponível em: https://docs.python.org/3/tutorial/index.html#tutorial-index. Acesso em: 02 abr. 2026.

VARK. Vark. Disponível em: https://vark-learn.com/#. Acesso em: 10 abr. 2026.`