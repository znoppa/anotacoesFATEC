---
tipo: aula
semestre: 2
disciplina: Linguagem de Programação 1
aula: 3
data: 2026-08-10
status: em-revisao
revisao: false
aliases:
  - LP 003 — Estruturas de controle: decisão e seleção
tags:
  - ads/semestre-2
  - disciplina/linguagem-de-programacao-1
  - linguagem/c
---

# Aula 003 — Estruturas de Controle: Blocos, Decisão e Seleção

> [!abstract] Em uma frase
> Em C, estruturas de controle permitem agrupar instruções em blocos e escolher quais trechos do programa serão executados por meio de condições, usando principalmente `if`, operador ternário e `switch`.

## Objetivos

- Entender o que é um bloco de comandos e como ele afeta o escopo das variáveis.
- Revisar como C interpreta valores verdadeiros e falsos.
- Utilizar operadores relacionais e lógicos na construção de condições.
- Aplicar `if`, `if...else` e estruturas condicionais aninhadas.
- Compreender quando o operador ternário `?:` é adequado.
- Utilizar `switch`, `case`, `break` e `default` corretamente.
- Escolher a estrutura de decisão mais adequada para cada problema.

## 1. Blocos de comandos

Em C, um **bloco** é um conjunto de zero ou mais declarações e instruções delimitado por chaves `{ }`.

```c
{
    int numero = 10;
    printf("%d\n", numero);
}
```

Blocos são usados em funções, estruturas condicionais e laços de repetição. Eles permitem tratar várias instruções como uma única unidade lógica.

### Escopo local

Variáveis declaradas dentro de um bloco pertencem, em regra, somente àquele bloco.

```c
if (idade >= 18) {
    int maiorDeIdade = 1;
    printf("Pode prosseguir.\n");
}

// maiorDeIdade não existe neste ponto do programa.
```

> [!important] Escopo
> Uma variável criada dentro de `{ }` não deve ser utilizada fora do bloco em que foi declarada. Esse isolamento ajuda a reduzir conflitos de nomes e efeitos inesperados no programa.

## 2. Verdadeiro e falso em C

A linguagem C tradicionalmente representa condições usando valores numéricos:

| Valor da expressão | Interpretação |
|---|---|
| `0` | falso |
| qualquer valor diferente de `0` | verdadeiro |

Isso significa que valores como `1`, `-1`, `20` e `-100` são verdadeiros quando avaliados como condição.

```c
int numero = 5;

if (numero) {
    printf("A condição é verdadeira.\n");
}
```

Como `numero` vale `5`, a condição é verdadeira.

## 3. Operadores relacionais

Operadores relacionais comparam dois valores e produzem um resultado lógico.

| Operador | Significado | Exemplo |
|---|---|---|
| `==` | igual a | `x == y` |
| `!=` | diferente de | `x != y` |
| `>` | maior que | `x > y` |
| `<` | menor que | `x < y` |
| `>=` | maior ou igual a | `x >= y` |
| `<=` | menor ou igual a | `x <= y` |

> [!warning] `=` não é `==`
> `=` realiza uma atribuição. `==` realiza uma comparação. Confundir os dois operadores pode fazer uma condição produzir um resultado diferente do esperado.

## 4. Operadores lógicos

Eles permitem combinar ou inverter condições.

| Operador | Nome | Exemplo | Interpretação |
|---|---|---|---|
| `&&` | E lógico | `idade >= 18 && idade <= 60` | as duas condições precisam ser verdadeiras |
| `||` | OU lógico | `dia == 1 || dia == 7` | pelo menos uma condição precisa ser verdadeira |
| `!` | NÃO lógico | `!ativo` | inverte o resultado lógico |

### Exemplo

```c
if (idade >= 18 && idade <= 60) {
    printf("Faixa etária entre 18 e 60 anos.\n");
}
```

## 5. Comando `if`

O `if` executa um bloco apenas quando sua condição é verdadeira.

```c
if (condicao) {
    // comandos executados se a condição for verdadeira
}
```

### Exemplo — número positivo

```c
int numero;
scanf("%d", &numero);

if (numero > 0) {
    printf("Número positivo.\n");
}
```

## 6. `if...else`

Quando existem dois caminhos possíveis, utiliza-se `else`.

```c
if (condicao) {
    // caminho verdadeiro
} else {
    // caminho falso
}
```

### Exemplo — par ou ímpar

```c
int numero;
scanf("%d", &numero);

if (numero % 2 == 0) {
    printf("Par\n");
} else {
    printf("Ímpar\n");
}
```

O operador `%` retorna o resto da divisão inteira. Um número é par quando o resto da divisão por `2` é igual a `0`.

## 7. `else if` e condições em sequência

Quando há mais de duas possibilidades, é possível encadear condições.

```c
if (nota >= 90) {
    printf("Excelente\n");
} else if (nota >= 80) {
    printf("Muito Bom\n");
} else if (nota >= 60) {
    printf("Bom\n");
} else if (nota >= 40) {
    printf("Suficiente\n");
} else {
    printf("Reprovado\n");
}
```

A ordem das condições importa. Quando uma condição verdadeira é encontrada, os demais blocos da mesma cadeia não são executados.

## 8. `if` aninhado

Um `if` pode existir dentro de outro `if`. Isso é útil quando uma segunda decisão só faz sentido depois que a primeira condição já foi satisfeita.

```c
if (idade >= 18) {
    printf("Pode votar.\n");

    if (idade >= 25) {
        printf("Atende também ao requisito de idade deste exemplo para concorrer ao cargo.\n");
    }
}
```

> [!tip] Evite profundidade desnecessária
> Muitos níveis de `if` aninhado tornam o código difícil de ler. Quando possível, simplifique as condições ou reorganize a lógica.

## 9. Operador ternário `?:`

O operador ternário é uma forma compacta de representar uma decisão simples que produz um valor.

### Sintaxe

```c
condicao ? valor_se_verdadeiro : valor_se_falso;
```

### Exemplo

```c
int idade = 20;
char *situacao = idade >= 18 ? "Maior de idade" : "Menor de idade";

printf("%s\n", situacao);
```

Ele possui três partes:

1. condição a ser avaliada;
2. valor usado quando a condição é verdadeira;
3. valor usado quando a condição é falsa.

> [!important] Quando usar
> O ternário funciona bem em decisões curtas e simples. Para regras com várias etapas ou muitos efeitos, `if...else` costuma ser mais legível.

## 10. Comando `switch`

O `switch` é apropriado quando uma mesma expressão precisa ser comparada com **valores exatos e discretos**.

```c
switch (expressao) {
    case valor1:
        // comandos
        break;

    case valor2:
        // comandos
        break;

    default:
        // executado quando nenhum case corresponde
        break;
}
```

### Exemplo — dia da semana

```c
int dia;
scanf("%d", &dia);

switch (dia) {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    default:
        printf("Dia inválido.\n");
}
```

### Papel de cada elemento

- `switch`: recebe a expressão que será testada.
- `case`: representa um valor específico possível.
- `break`: encerra o `switch` após executar o caso correspondente.
- `default`: trata valores que não correspondem a nenhum `case`.

### O que acontece sem `break`?

Sem `break`, após entrar em um `case`, a execução pode continuar pelos casos seguintes. Esse comportamento é chamado de **fall-through**.

```c
switch (opcao) {
    case 1:
        printf("Um\n");
        // sem break: também seguirá para o próximo case
    case 2:
        printf("Dois\n");
        break;
}
```

> [!warning] Limitação do `switch`
> `switch` é voltado a comparações por igualdade. Para intervalos como `nota >= 60 && nota < 80` ou regras compostas, prefira `if...else if...else`.

## 11. Qual estrutura escolher?

| Situação | Estrutura mais natural |
|---|---|
| Executar algo somente se uma condição for verdadeira | `if` |
| Escolher entre dois caminhos | `if...else` |
| Testar faixas ou condições complexas | `if...else if...else` |
| Escolher rapidamente entre dois valores | operador ternário `?:` |
| Comparar uma expressão com vários valores exatos | `switch` |

## 12. Erros comuns

- Usar `=` quando queria comparar com `==`.
- Esquecer que `0` é falso e qualquer valor diferente de zero é verdadeiro.
- Criar condições de intervalo incorretas, como `18 <= idade <= 60`; em C, o correto é `idade >= 18 && idade <= 60`.
- Esquecer `break` em um `case` quando o fall-through não é intencional.
- Usar `switch` para condições que dependem de intervalos ou expressões lógicas complexas.
- Acessar fora do bloco uma variável que possui escopo local.

## 13. Exercícios do Material 003

> [!todo] Prática
> 1. **Desconto por idade:** leia a idade de um cliente e atribua desconto de 5% para menores de 18 anos, 10% entre 18 e 60 anos e 15% acima de 60 anos. Use `if...else`.
> 2. **Dia da semana:** leia um valor de 1 a 7 e mostre o dia correspondente. Valores fora do intervalo devem gerar erro. Use `switch`.
> 3. **Desempenho acadêmico:** leia uma nota de 0 a 100 e classifique-a como Reprovado, Suficiente, Bom, Muito Bom ou Excelente conforme os intervalos indicados no material.
> 4. **Período do dia:** leia uma hora de 0 a 23 e determine manhã, tarde, noite ou madrugada. O material propõe praticar o operador ternário.
> 5. **Tipo de veículo:** leia a quantidade de rodas e classifique `2` como bicicleta, `4` como carro e os demais valores como outro tipo. Use `switch`.

## 14. Conexões

- [[semestre-1/Algoritmos e lógica de programação/Aula 006|Algoritmos — Aula 006: Estruturas de Controle]] — introduz as mesmas ideias de decisão e repetição, permitindo comparar a lógica aprendida anteriormente com a sintaxe de C.
- [[semestre-2/LP - Linguagem de Programação 1/Aula 004|Aula 004 — Estruturas de Repetição]] — continua o estudo das estruturas de controle com `for`, `while`, `do...while`, `break` e `continue`.

## Revisão ativa

> [!question] Perguntas
> - Por que `0` é tratado como falso em C?
> - Qual é a diferença entre `=` e `==`?
> - Quando `&&` deve ser utilizado em vez de `||`?
> - Em que situação um `if` aninhado é realmente necessário?
> - Qual é a estrutura do operador ternário?
> - Por que normalmente colocamos `break` no final de cada `case`?
> - Por que `switch` não é uma boa escolha para classificar notas por intervalos?
> - O que acontece com uma variável declarada dentro de um bloco quando o bloco termina?

## Materiais

- `LP_003.pdf` — Professor Maromo, Material 003.

---

[[01 - Painel/00 - Início|Início]] · [[semestre-2/LP - Linguagem de Programação 1/Aula 004|Próxima aula → Aula 004]]
