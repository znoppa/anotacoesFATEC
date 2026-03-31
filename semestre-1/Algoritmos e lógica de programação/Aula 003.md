Aula 04/03/2026

Sites de Interesse:
https://portugol.dev/ - Site para criar pseudocódigos
---

### 🧠 1. Introdução à Lógica
A lógica é a base do raciocínio estruturado e da programação. Ela foi sistematizada por Aristóteles no século IV a.C. e é uma ferramenta essencial para validar argumentos, resolver problemas e criar a estrutura formal dos algoritmos.

O principal papel da lógica é **distinguir argumentos válidos de inválidos**, ajudando a separar o que tem coerência do que não tem.

*   **Exemplo Prático de Argumento Válido (Silogismo):**
    *   *Premissa 1:* Todos os humanos são mortais.
    *   *Premissa 2:* Sócrates é humano.
    *   *Conclusão:* Sócrates é mortal. *(A conclusão faz sentido e respeita as premissas).*
*   **Exemplo Prático de Argumento Inválido:**
    *   *Premissa 1:* Todos os cães são animais.
    *   *Premissa 2:* Todos os gatos são animais.
    *   *Conclusão:* Logo, todos os cães são gatos. *(Inválido! O fato de ambos serem animais não os torna iguais. A estrutura lógica não sustenta a conclusão).*

**Aplicações no cotidiano:** Identificar a pessoa mais velha em uma fila, organizar tarefas para ser mais eficiente ou tomar decisões baseadas em condições específicas.

---

### ⚙️ 2. O que são Algoritmos?
Algoritmos são sequências ordenadas de passos criadas para resolver um problema ou atingir um objetivo claro. Eles funcionam de maneira muito semelhante a uma **receita de bolo**: possuem ações específicas que devem ser seguidas em uma ordem exata.

Para que um algoritmo seja considerado eficiente, ele **obrigatoriamente** deve ter 3 características:
1.  **Sequência finita:** Tem que ter um começo, meio e fim.
2.  **Reprodutibilidade:** Se você colocar os mesmos dados de entrada (inputs), ele deve gerar sempre o mesmo resultado (output).
3.  **Objetividade:** As etapas devem ser claras e sem qualquer ambiguidade (sem duplas interpretações).

**Como podemos representar um algoritmo?**
*   **Descrição narrativa:** Texto descritivo detalhando o passo a passo.
*   **Pseudocódigo:** Um texto estruturado que se aproxima muito de uma linguagem de programação real.
*   **Fluxogramas:** Representação visual (gráfica).

---

### 📊 3. Fluxogramas
Fluxogramas são a representação visual de um algoritmo ou processo. Eles utilizam formas geométricas específicas para cada tipo de ação, conectadas por setas que indicam a direção do fluxo (o caminho que a informação percorre). São muito usados para documentação de sistemas e ensino.

**Significado das Formas Geométricas (Padrão):**
*   **Oval (Terminador):** Indica o Início e o Fim do fluxograma.
*   **Retângulo:** Representa um Processo (um cálculo ou ação interna).
*   **Trapezóide (inclinado em cima):** Entrada de Dados Manual (ex: usuário digitando algo).
*   **Paralelogramo:** Saída de Dados (ex: mostrar algo na tela).
*   **Losango:** Decisão (uma pergunta que geralmente divide o fluxo em "Sim" ou "Não").
*   **Círculo:** Conector (liga diferentes partes do fluxograma).
*   **Hexágono:** Estrutura de repetição (Laço "PARA").
*   **Setas:** Indicam o sentido e a direção do fluxo.

**Exemplo Prático (Fluxograma para somar dois números):**

![[Fluxograma para somar 2 numeros.png|450]]
A lógica estruturada para o fluxograma seria:
1.  **Entrada:** Receber os valores digitados pelo usuário (usaria o *Trapezóide*).
2.  **Processamento:** Realizar a soma matemática dos valores (usaria o *Retângulo*).
3.  **Saída:** Exibir o resultado final da soma na tela (usaria o *Paralelogramo*).

---

### 📝 Resumo do Conteúdo (Parte 2)

**1. A Importância dos Fluxogramas**
Por serem visuais, os fluxogramas trazem benefícios cruciais para o desenvolvimento:
*   Simplificam conceitos complexos através da clareza visual.
*   Facilitam a identificação rápida de erros e redundâncias na lógica.
*   Servem como uma documentação padronizada, melhorando a comunicação entre as equipes de desenvolvimento.

**2. Pseudocódigo: O que é e por que usar?**
O pseudocódigo é uma forma textual e simplificada de escrever um algoritmo. Ele é um "meio-termo" entre a nossa linguagem natural e uma linguagem de programação real.

Nota Noppa: O pseudocódigo é como se fosse a escrita do código sem pensar em uma linguagem, quando escrevemos por exemplo escreva("ronaldo gomes") leia(variavel1) são comandos que no C/Python sabemos que seria print ou scan, o pseudocódigo é uma forma de representação;

*   **Vantagens:** Não exige uma sintaxe rigorosa (regras rígidas de escrita), permitindo que o aluno/desenvolvedor foque 100% na **lógica** do problema antes de se preocupar com detalhes técnicos de uma linguagem específica (como Java, C ou Python).
*   **Estrutura Geral:**
    1.  *Declaração de variáveis* (espaços na memória para guardar dados).
    2.  *Função principal* (onde o programa realmente começa a rodar).
    3.  *Instruções* (comandos de leitura de dados, cálculos matemáticos e exibição na tela).

**3. Algoritmos Aplicados no Mundo Real**
Algoritmos não servem apenas para matemática abstrata; eles resolvem problemas reais.
*   *Exemplo de lógica (Maior idade):* Para achar a pessoa mais velha em uma fila, o algoritmo define a primeira pessoa como a "mais velha". Depois, ele compara essa idade com a próxima pessoa. Se a próxima for maior, ele atualiza quem é o "mais velho". Ele repete isso até o fim da fila.
*   *Onde são usados:* Automação de tarefas, sistemas bancários/financeiros, engenharia de software e criação de jogos.

---

### 💻 Transcrição do Código (Imagem 4)

Exemplo de pseudocódigo que soma dois valores, conforme o slide:

```text
programa
{
    funcao inicio()
    {
        // Declaração de variáveis
        inteiro valor1, valor2, soma

        // Entrada de dados
        escreva("Digite o primeiro valor: ")
        leia(valor1)
        escreva("Digite o segundo valor: ")
        leia(valor2)

        // Cálculo da soma
        soma = valor1 + valor2

        // Saída do resultado
        escreva("A soma é: ", soma)
    }
}
```

---

### 🧠 Resolução dos Exercícios de Fixação

#### **Parte 1**

**1. Crie um fluxograma para somar dois números e exibir o resultado.**
*(Como sou uma inteligência artificial em texto, vou descrever as formas geométricas exatas que ele deve desenhar, baseado no que foi ensinado na primeira parte):*
*   **Oval (Terminador):** Escreva `INÍCIO` dentro.
*   **Seta para baixo**
*   **Trapezóide (Entrada Manual):** Escreva `Ler Número 1, Ler Número 2` dentro.
*   **Seta para baixo**
*   **Retângulo (Processo):** Escreva `Soma = Número 1 + Número 2` dentro.
*   **Seta para baixo**
*   **Paralelogramo (Saída de Dados):** Escreva `Exibir Soma` dentro.
*   **Seta para baixo**
*   **Oval (Terminador):** Escreva `FIM` dentro.
  ![[Formas do fluxograma e significados.png|470]]

**2. Escreva um pseudocódigo para calcular a média de três números.**
```
programa
{
    funcao inicio()
    {
        real n1, n2, n3, media
        
        escreva("Digite o primeiro número: ")
        leia(n1)
        escreva("Digite o segundo número: ")
        leia(n2)
        escreva("Digite o terceiro número: ")
        leia(n3)
        
        media = (n1 + n2 + n3) / 3
        
        escreva("A média dos três números é: ", media)
    }
}
```

#### **Parte 2**

**1. Descreva em pseudocódigo como determinar se um número é par ou ímpar.**
*(Dica para o Miguel: na lógica de programação, usamos o resto da divisão por 2 para saber se é par. Se o resto for 0, é par).*
```text
programa
{
    funcao inicio()
    {
        inteiro numero, resto
        
        escreva("Digite um número: ")
        leia(numero)
        
        // O símbolo % geralmente representa o "resto da divisão"
        resto = numero % 2
        
        se (resto == 0) entao
            escreva("O número é PAR")
        senao
            escreva("O número é ÍMPAR")
        fim_se
    }
}
```

**2. Crie um fluxograma para calcular o estoque médio de uma peça.**
*(Fórmula do estoque médio: `(Estoque Mínimo + Estoque Máximo) / 2`)*
*   **Oval:** `INÍCIO`
*   **Seta para baixo**
*   **Trapezóide:** `Ler Estoque Mínimo, Ler Estoque Máximo`
*   **Seta para baixo**
*   **Retângulo:** `Estoque Médio = (Estoque Mínimo + Estoque Máximo) / 2`
*   **Seta para baixo**
*   **Paralelogramo:** `Exibir Estoque Médio`
*   **Seta para baixo**
*   **Oval:** `FIM`

------------------------
Analisei os slides do seu documento e organizei um **resumo estruturado para anotações de aula**, ideal para colocar no Word ou no caderno. Mantive apenas os conceitos principais para facilitar estudo de **Algoritmos e Lógica de Programação**.

---

# 📚 Resumo – Tipos de Dados - 005 (Algoritmos e Lógica de Programação)

## 1. O que são Tipos de Dados

Tipos de dados representam as **categorias de valores que podem ser armazenados e manipulados em um programa**.

Eles definem:

- que tipo de informação será armazenada
    
- quanto espaço será usado na memória
    
- quais operações podem ser realizadas
    

### Principais categorias

- **Numéricos**
    
    - Inteiros
        
    - Reais
        
- **Lógicos (Booleanos)**
    
    - verdadeiro ou falso
        
- **Literais**
    
    - textos ou caracteres
        

---

# 2. Constantes e Variáveis

## Variáveis

São espaços na memória usados para **armazenar valores que podem mudar durante a execução do programa**.

Exemplo:

```c
int idade = 25;
```

## Constantes

São valores **fixos que não podem ser alterados após definidos**.

Exemplo:

```c
const float PI = 3.14;
```

---

# 3. Tipos de Dados em Linguagens

## Em C

Tipos básicos:

- `char` → caracteres
    
- `int` → números inteiros
    
- `short`
    
- `long`
    
- `float` → números reais
    
- `double` → números reais com maior precisão
    

Exemplo:

```c
int idade = 25;
char nome[50] = "Joao";
```

---

## Em Java

Tipos primitivos:

Inteiros:

- `byte`
    
- `short`
    
- `int`
    
- `long`
    

Reais:

- `float`
    
- `double`
    

Outros:

- `char`
    
- `boolean`
    

Exemplo:

```java
int idade = 25;
double altura;
String nome;
```

---

## Em Python

O Python **não exige declarar o tipo**, pois ele é identificado automaticamente.

Exemplo:

```python
idade = 25
altura = 1.75
nome = "Joao"
```

---

# 4. Regras de Nomeação de Variáveis

Boas práticas para nomear variáveis:

✔ Não começar com números  
✔ Não usar palavras reservadas da linguagem (ex: `int`, `char`)  
✔ Evitar caracteres especiais  
✔ Usar nomes claros e descritivos

### Convenção recomendada

**camelCase**

Exemplo:

```java
numeroDaConta
valorTotal
nomeCliente
```

---

# 5. Aplicações dos Tipos de Dados

Tipos de dados são utilizados para:

- Manipulação de informações em programas
    
- Criação de sistemas
    
- Cálculos matemáticos
    
- Controle lógico em algoritmos (booleanos)
    

---

# 6. Exercícios de Fixação

### Identifique os tipos de dados:

```
12345 → inteiro
"Texto" → literal / string
true → lógico (boolean)
```

### Crie variáveis para:

- idade de uma pessoa
    
- nome completo
    

Exemplo:

```c
int idade;
char nome[100];
```

---

# 7. Exercício de Programação

Criar um programa que:

1. Leia dois números reais
    
2. Some os valores
    
3. Exiba o resultado
    

Exemplo (pseudocódigo):

```
ler numero1
ler numero2

soma = numero1 + numero2

mostrar soma
```

---

# ✔ Revisão Geral

Neste conteúdo foram estudados:

- Conceito de **tipos de dados**
- **Variáveis e constantes**
- Tipos em **C, Java e Python**
- **Regras de nomeação**
- Aplicações na programação
    

---

# 📘 Variáveis em C e Especificadores (%)

## 1. O que são variáveis em C

Variáveis são **espaços na memória usados para armazenar valores que podem mudar durante a execução do programa**.

Antes de usar, **precisam ser declaradas com um tipo**.

### Estrutura básica

```c
tipo nomeDaVariavel;
```

Exemplo:

```c
int idade;
float altura;
char letra;
```

Também pode declarar com valor inicial:

```c
int idade = 20;
float altura = 1.75;
```

---

# 📘 Tipos de Variáveis em C

|Tipo|Descrição|Exemplo|
|---|---|---|
|`int`|número inteiro|10|
|`float`|número decimal|3.14|
|`double`|decimal com maior precisão|3.141592|
|`char`|caractere único|'A'|
|`void`|ausência de valor|funções|

---

# 📘 O que são os sinais `%`

Os sinais `%` são chamados de **especificadores de formato**.

Eles servem para **dizer ao `printf` ou `scanf` qual tipo de variável será exibido ou lido**.

Exemplo:

```c
printf("%d", idade);
```

Aqui `%d` indica que **idade é um número inteiro**.

---

# 📘 Principais Especificadores (%)

|Símbolo|Tipo|Uso|
|---|---|---|
|`%d`|inteiro|int|
|`%i`|inteiro|int|
|`%f`|decimal|float|
|`%lf`|decimal longo|double|
|`%c`|caractere|char|
|`%s`|string (texto)|char[]|
|`%u`|inteiro sem sinal|unsigned int|
|`%x`|hexadecimal|int|
|`%o`|octal|int|

---

# 📘 Exemplos Práticos

### Inteiro

```c
int idade = 20;
printf("%d", idade);
```

Saída:

```
20
```

---

### Número decimal

```c
float altura = 1.75;
printf("%f", altura);
```

Saída:

```
1.750000
```

---

### Caractere

```c
char letra = 'A';
printf("%c", letra);
```

Saída:

```
A
```

---

### Texto (string)

```c
char nome[] = "Joao";
printf("%s", nome);
```

Saída:

```
Joao
```

---

# 📘 Uso com scanf (entrada de dados)

O `scanf` serve para **ler dados digitados pelo usuário**.

Exemplo:

```c
int idade;
scanf("%d", &idade);
```

### Importante

No `scanf` usamos **`&` (endereço da variável)**.

|Exemplo|Explicação|
|---|---|
|`&idade`|endereço da variável idade|
|`&altura`|endereço da variável altura|

---

# 📘 Exemplo completo

```c
#include <stdio.h>

int main() {

    int idade;
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);

}
```

---

# 📘 Resumo rápido para prova

### Tipos principais em C

```
int → inteiro
float → decimal
double → decimal mais preciso
char → caractere
```

### Especificadores

```
%d → int
%f → float
%lf → double
%c → char
%s → string
```

### Funções

```
printf → saída de dados
scanf → entrada de dados
```

---

💡 **Dica que professores de Algoritmos costumam cobrar:**

- `%d` → inteiro
    
- `%f` → decimal
    
- `%c` → caractere
    
- `%s` → texto
    
- `&` no `scanf` indica **endereço da variável**
    

---