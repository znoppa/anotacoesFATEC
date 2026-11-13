# Resumo para a prova de JavaScript — FATEC

> **Disciplina:** Desenvolvimento Web — 2º semestre  
> **Material de referência:** [Exemplos de JavaScript — anotacoesFATEC](https://github.com/znoppa/anotacoesFATEC/tree/main/semestre-2/Desenvolvimento%20Web/Exemplos/JavaScript)  
> **Abrangência:** `exemplo1.html` a `exemplo34.html`, `atividade.html` e `teste.html`.

Este guia reúne os conceitos praticados nos **36 arquivos HTML** da pasta de JavaScript, organizados por assunto. Os trechos de código foram simplificados e, quando necessário, corrigidos para servir como material de revisão.

## Índice

1. [Mapa dos conteúdos](#1-mapa-dos-conteúdos)
2. [Fundamentos: variáveis, entrada e saída](#2-fundamentos-variáveis-entrada-e-saída)
3. [Tipos e conversão de dados](#3-tipos-e-conversão-de-dados)
4. [Operadores e expressões](#4-operadores-e-expressões)
5. [Estruturas condicionais](#5-estruturas-condicionais)
6. [Estruturas de repetição](#6-estruturas-de-repetição)
7. [Pré-incremento e pós-incremento](#7-pré-incremento-e-pós-incremento)
8. [Strings e funções nativas](#8-strings-e-funções-nativas)
9. [Objetos](#9-objetos)
10. [Funções e números aleatórios](#10-funções-e-números-aleatórios)
11. [DOM, eventos e formulários](#11-dom-eventos-e-formulários)
12. [Erros observados no repositório](#12-erros-observados-no-repositório)
13. [Exercícios para praticar](#13-exercícios-para-praticar)
14. [Gabarito e roteiro de revisão](#14-gabarito-e-roteiro-de-revisão)

---

## 1. Mapa dos conteúdos

| Conteúdo | Arquivos |
|---|---|
| Introdução, variáveis e operações | `exemplo1` a `exemplo6` |
| Entrada de dados e condicionais | `exemplo7` a `exemplo13` |
| Laços e incrementos | `exemplo14` a `exemplo18`, `exemplo21` e `exemplo22` |
| Conversões e funções nativas | `exemplo19`, `exemplo20`, `exemplo23` e `exemplo24` |
| Objetos e propriedades | `exemplo25` |
| Funções e sorteios | `exemplo26` a `exemplo31` |
| DOM, eventos e formulários | `exemplo32` a `exemplo34`, `atividade.html` |
| Raciocínio lógico e operadores | `teste.html` |

**Tópicos para priorizar:** condições (`if`/`switch`), laços (`for`/`while`/`do while`), incrementos, funções, conversão de valores e DOM.

## 2. Fundamentos: variáveis, entrada e saída

### JavaScript dentro do HTML

Os exemplos utilizam a tag `<script>` para adicionar JavaScript às páginas:

```html
<!DOCTYPE html>
<html lang="pt-BR">
<body>
    <script>
        alert("Olá, mundo!");
    </script>
</body>
</html>
```

### Declaração de variáveis

| Palavra | Característica |
|---|---|
| `var` | Escopo de função, ou global quando declarada fora de uma função; pode ser redeclarada. |
| `let` | Escopo de bloco; permite alterar o valor. |
| `const` | Escopo de bloco; não permite reatribuir a variável. |

```javascript
var nome = "João";
let idade = 20;
const PI = 3.14159;

idade = 21; // Válido
// PI = 4;  // Erro: reatribuição de constante
```

Use `let` quando o valor precisar mudar e `const` quando a variável não será reatribuída. Nos arquivos originais, `var` aparece com frequência.

### Entrada e saída

| Recurso | Finalidade |
|---|---|
| `alert(mensagem)` | Exibe uma caixa de mensagem. |
| `prompt(pergunta)` | Solicita a digitação de um valor; retorna texto ou `null` se cancelado. |
| `confirm(pergunta)` | Solicita confirmação; retorna `true` ou `false`. |
| `document.write(conteúdo)` | Escreve conteúdo no documento; é um método antigo, usado nas aulas. |
| `console.log(valor)` | Exibe informações no console do navegador. |

```javascript
let nome = prompt("Digite seu nome:");
let continuar = confirm("Deseja continuar?");

if (continuar) {
    alert("Olá, " + nome + "!");
} else {
    alert("Operação cancelada.");
}
```

**Atenção:** `prompt()` não converte automaticamente o texto digitado em número.

## 3. Tipos e conversão de dados

JavaScript trabalha com valores como `number`, `string`, `boolean`, `undefined`, `null` e objetos. Os exercícios enfatizam números, strings e booleanos.

```javascript
let numero = 10;           // number
let texto = "10";          // string
let ativo = true;          // boolean

console.log(10 + 5);       // 15
console.log("10" + 5);     // "105" (concatenação)
```

### Conversão numérica

```javascript
parseInt("10.75");      // 10
parseFloat("10.75");    // 10.75
Number("10.75");        // 10.75

parseInt("25 anos");    // 25
parseInt("14 25 11");   // 14
parseFloat("5.11");     // 5.11
parseFloat("0x50");     // 0
```

- `parseInt()` lê a parte inicial que representa um inteiro; use `parseInt(texto, 10)` para explicitar a base decimal.
- `parseFloat()` lê um número com casas decimais.
- `Number()` tenta converter o valor completo; `Number("25 anos")` resulta em `NaN`.
- `NaN` significa *Not a Number*: representa uma conversão ou operação numérica inválida.

Exemplo do cálculo de média:

```javascript
let a = parseFloat(prompt("Digite a primeira nota:"));
let b = parseFloat(prompt("Digite a segunda nota:"));
let media = (a + b) / 2;

alert("Média: " + media);
```

## 4. Operadores e expressões

### Aritméticos

| Operador | Operação | Exemplo |
|---|---|---|
| `+` | Soma ou concatenação | `5 + 2` → `7` |
| `-` | Subtração | `5 - 2` → `3` |
| `*` | Multiplicação | `5 * 2` → `10` |
| `/` | Divisão | `5 / 2` → `2.5` |
| `%` | Resto da divisão | `5 % 2` → `1` |
| `**` | Potência | `5 ** 2` → `25` |

A multiplicação e a divisão têm precedência sobre a soma e a subtração:

```javascript
10 + 5 * 2;     // 20
(10 + 5) * 2;   // 30
```

### Relacionais e lógicos

| Operador | Significado |
|---|---|
| `>` / `<` | Maior / menor |
| `>=` / `<=` | Maior ou igual / menor ou igual |
| `==` / `!=` | Igual / diferente, com possível coerção de tipos |
| `===` / `!==` | Estritamente igual / diferente |
| `&&` | E: ambas as condições precisam ser verdadeiras |
| `\|\|` | OU: pelo menos uma condição precisa ser verdadeira |
| `!` | Negação |

```javascript
5 == "5";       // true
5 === "5";      // false

let idade = 20;
let habilitado = true;

if (idade >= 18 && habilitado) {
    alert("Pode dirigir.");
}
```

### Atribuição abreviada

```javascript
let x = 10;
x += 5; // x = x + 5 → 15
x -= 2; // x = x - 2 → 13
x *= 2; // x = x * 2 → 26
```

## 5. Estruturas condicionais

### `if`, `else if` e `else`

```javascript
let nota = 7;

if (nota >= 7) {
    alert("Aprovado");
} else if (nota >= 5) {
    alert("Recuperação");
} else {
    alert("Reprovado");
}
```

As condições são testadas na ordem. Apenas o primeiro bloco cujo teste for verdadeiro é executado.

**Exercício de classificação por idade (`exemplo12.html`):**

```javascript
if (idade < 7) {
    document.write("Infantil");
} else if (idade < 11) {
    document.write("Juvenil A");
} else if (idade < 18) {
    document.write("Juvenil B");
} else {
    document.write("Adulto");
}
```

### `switch`

```javascript
let opcao = 2;

switch (opcao) {
    case 1:
        alert("Cadastrar");
        break;
    case 2:
        alert("Consultar");
        break;
    case 3:
        alert("Sair");
        break;
    default:
        alert("Opção inválida");
}
```

- `case` identifica um valor possível.
- `break` impede que a execução continue nos próximos casos.
- `default` é executado quando nenhum caso corresponde.

O repositório também utiliza `switch (true)` para avaliar faixas:

```javascript
switch (true) {
    case idade < 7:
        alert("Infantil");
        break;
    case idade < 18:
        alert("Juvenil");
        break;
    default:
        alert("Adulto");
}
```

## 6. Estruturas de repetição

### `for`: repetição com contador

```javascript
for (let i = 0; i < 5; i++) {
    document.write(i + "<br>");
}
// Exibe: 0, 1, 2, 3, 4
```

Estrutura: `for (inicialização; condição; atualização)`.

Contagem regressiva, como no `exemplo14.html`:

```javascript
for (let x = 5; x > 0; x--) {
    document.write(x + "<br>");
}
// Exibe: 5, 4, 3, 2, 1
```

### `while`: verifica antes de repetir

```javascript
let x = 0;
while (x < 3) {
    document.write(x);
    x++;
}
// Exibe: 012
```

### `do while`: executa antes de verificar

```javascript
let x = 10;
do {
    document.write(x);
    x++;
} while (x < 5);
// Exibe: 10
```

| Estrutura | Comportamento |
|---|---|
| `for` | Prática quando o controle por contador é conhecido. |
| `while` | Verifica primeiro; pode não executar nenhuma vez. |
| `do while` | Executa o bloco pelo menos uma vez. |

**Cuidado:** um laço cujo contador nunca se aproxima da condição de parada pode se tornar infinito.

## 7. Pré-incremento e pós-incremento

Este assunto aparece em `exemplo16.html`, `exemplo17.html`, `exemplo18.html` e `teste.html`.

### Pós-incremento: `x++`

Primeiro fornece o valor atual; depois aumenta `x` em 1.

```javascript
let x = 10;
let y = x++;

console.log(y); // 10
console.log(x); // 11
```

### Pré-incremento: `++x`

Primeiro aumenta `x` em 1; depois fornece o novo valor.

```javascript
let x = 10;
let y = ++x;

console.log(y); // 11
console.log(x); // 11
```

A mesma distinção vale para `x--` e `--x`, mas reduzindo o valor em 1.

### Resolução do `exemplo17.html`

```javascript
var x = 10;
var y = 12;
var z = 14;

var valor1 = ++x - y;
var valor2 = y-- + x++;
var valor3 = -x + z++;
```

| Linha | Operação | Resultado e efeito |
|---|---|---|
| `valor1 = ++x - y` | `11 - 12` | `valor1 = -1`; `x = 11` |
| `valor2 = y-- + x++` | `12 + 11` | `valor2 = 23`; depois `y = 11`, `x = 12` |
| `valor3 = -x + z++` | `-12 + 14` | `valor3 = 2`; depois `z = 15` |

**Estado final:** `x = 12`, `y = 11`, `z = 15`, `valor1 = -1`, `valor2 = 23`, `valor3 = 2`.

### Resolução do `teste.html`

A expressão:

```javascript
c = a+++b;
```

é interpretada como:

```javascript
c = a++ + b;
```

Ou seja: usa o valor de `a` na soma, depois incrementa `a`.

Após todas as atribuições e condições desse arquivo, o alerta mostra:

```text
a=5 b=1 c=5
```

**Dica para a prova:** anote os valores das variáveis linha por linha, sem tentar calcular toda a expressão mentalmente.

## 8. Strings e funções nativas

Os exemplos 23 e 24 abordam propriedades e métodos de texto.

```javascript
let nome = "Zimmermann";

nome.length;         // 10 caracteres
nome.charAt(0);      // "Z"
nome.toUpperCase();  // "ZIMMERMANN"
nome.toLowerCase();  // "zimmermann"
```

Substituição de texto:

```javascript
let texto = "Olá amigos!";
let novo = texto.replace("amigos", "pessoal");
// novo = "Olá pessoal!"
```

### Formatação numérica

```javascript
let numero = 123.456;

numero.toFixed(2);      // "123.46"
numero.toPrecision(4);  // "123.5"
numero.toString();      // "123.456"
```

- `toFixed(n)` usa **n casas decimais**.
- `toPrecision(n)` usa **n algarismos significativos**.
- `toString()` produz uma representação textual.

**Atenção:** `toFixed()` e `toPrecision()` retornam strings.

## 9. Objetos

O `exemplo25.html` agrupa informações em um objeto:

```javascript
let pessoa = {
    nome: "João",
    idade: 20,
    cidade: "São Paulo"
};

console.log(pessoa.nome);     // João
console.log(pessoa["idade"]); // 20
```

O `for...in` percorre as chaves enumeráveis:

```javascript
for (let propriedade in pessoa) {
    document.write(propriedade + " = " + pessoa[propriedade] + "<br>");
}
```

**Diferença importante:** `pessoa.nome` acessa uma propriedade com nome fixo; `pessoa[propriedade]` permite usar uma variável para escolher a propriedade.

## 10. Funções e números aleatórios

### Função declarada

```javascript
function mensagem() {
    alert("Olá!");
}

mensagem();
```

### Função anônima atribuída a uma variável

```javascript
let mensagem = function () {
    alert("Olá!");
};

mensagem();
```

### Parâmetros e retorno

```javascript
function soma(a, b) {
    return a + b;
}

let resultado = soma(10, 20);
alert(resultado); // 30
```

- `a` e `b` são **parâmetros**, definidos pela função.
- `10` e `20` são **argumentos**, fornecidos na chamada.
- `return` devolve um valor e encerra a chamada da função.
- Sem um `return` explícito, a função retorna `undefined`.

### Números aleatórios

```javascript
Math.random(); // Número entre 0 (inclusive) e 1 (exclusive)

Math.floor(Math.random() * 100);      // Inteiro de 0 a 99
Math.floor(Math.random() * 10) + 1;   // Inteiro de 1 a 10
```

`Math.floor()` arredonda para baixo. No `exemplo31.html`, a função `randint()` foi usada, mas **não existe como função global nativa no JavaScript**; o equivalente precisa ser implementado.

```javascript
function randint(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

console.log(randint(0, 10)); // Inteiro de 0 a 10
```

## 11. DOM, eventos e formulários

DOM significa *Document Object Model*: uma representação dos elementos HTML que o JavaScript consegue acessar e modificar.

### Seleção de elementos e leitura de valores

```html
<input type="number" id="idade">
<p id="resultado"></p>
```

```javascript
let idade = document.getElementById("idade").value;
```

- `getElementById("idade")` encontra o elemento pelo atributo `id`.
- `.value` lê o valor do campo, geralmente como string.
- `getElementsByName("nome")` devolve uma coleção de elementos; para acessar o primeiro, use `[0]`.

```javascript
let campos = document.getElementsByName("usuario");
let usuario = campos[0].value;
```

### Alteração do conteúdo

```javascript
document.getElementById("resultado").innerHTML = "Tudo certo!";
```

`innerHTML` interpreta marcação HTML. Para inserir apenas texto sem interpretá-lo como HTML, prefira `textContent`.

### Eventos

```html
<button onclick="calcular()">Calcular</button>
```

- `onclick`: clique simples.
- `ondblclick`: clique duplo.

### Exemplo completo: cálculo de salário (`exemplo34.html`)

```html
<label>Valor por hora:</label>
<input type="number" id="hora">

<label>Horas trabalhadas:</label>
<input type="number" id="qtd">

<button onclick="calcular()">Calcular</button>
<p id="total"></p>

<script>
function calcular() {
    let hora = parseFloat(document.getElementById("hora").value);
    let qtd = parseFloat(document.getElementById("qtd").value);
    let salario = hora * qtd;

    document.getElementById("total").textContent =
        "Salário: R$ " + salario.toFixed(2);
}
</script>
```

Esse programa reúne **evento → função → leitura do HTML → conversão → cálculo → exibição**.

### Exemplo de validação (`atividade.html`)

A atividade do estacionamento utiliza um `<select>` com tipos de veículo e verifica se foi escolhida uma opção válida.

```javascript
function calcular() {
    let veiculo = document.getElementById("veiculo").value;
    let valor = parseFloat(document.getElementById("valor").value);
    let horas = parseFloat(document.getElementById("qtd").value);

    if (veiculo === "---" || !Number.isFinite(valor) || !Number.isFinite(horas)) {
        alert("Preencha os campos corretamente.");
        return;
    }

    let total = valor * horas;
    document.getElementById("total").textContent =
        "Total: R$ " + total.toFixed(2);
}
```

O `return` sem valor interrompe a função quando há dados inválidos. Esse trecho é uma versão revisada da atividade, incluindo validação numérica que não existia no código original.

## 12. Erros observados no repositório

Alguns arquivos incluem erros de digitação ou lógica. Não os reproduza na prova:

| Arquivo | Trecho problemático | Correção / observação |
|---|---|---|
| `exemplo9.html` | `promtp(...)` | Escrever `prompt(...)`. |
| `exemplo9.html` | Comparação apenas com `>` | Não lida adequadamente com empates no maior valor. |
| `exemplo10.html` | `document.weite(...)` | Escrever `document.write(...)`. |
| `exemplo14.html` | Comentário diz que espera 1 segundo | O `for` não possui temporizador; executa sem essa espera. |
| `exemplo17.html` | `documento.write(...)` | Escrever `document.write(...)`. |
| `exemplo23.html` | `seuNome.prompt(...)` | Escrever `seuNome = prompt(...)`. |
| `exemplo31.html` | `randint(...)` | Definir essa função ou usar `Math.random()` com `Math.floor()`. |
| `exemplo32.html` | `senha.value` | Como `senha` é uma coleção, usar `senha[0].value`. |

No `exemplo32.html`, a verificação de usuário e senha no próprio navegador é **apenas didática**: autenticação real precisa ser verificada em um servidor, não exclusivamente em JavaScript do cliente.

## 13. Exercícios para praticar

Tente resolver sem executar o código; depois confira o gabarito.

**1.** Qual é o resultado de `"10" + 5`?

**2.** Qual a diferença entre `==` e `===`?

**3.** Qual é o resultado de `parseInt("12.75")`?

**4.** Qual estrutura de repetição executa o bloco pelo menos uma vez, mesmo com condição falsa?

**5.** Determine os valores finais:

```javascript
let x = 5;
let y = x++;
let z = ++x;
```

**6.** Qual é a saída?

```javascript
for (let i = 1; i <= 5; i += 2) {
    document.write(i);
}
```

**7.** Como ler o valor de um `<input id="peso">`?

**8.** Qual é o efeito de `return` dentro de uma função?

**9.** Escreva uma função que receba duas notas, calcule a média e retorne `"Aprovado"` caso seja maior ou igual a 7; caso contrário, retorne `"Reprovado"`.

**10.** Refaça o programa de IMC do `exemplo33.html` sem consultar o código: leia altura e peso, calcule `peso / (altura * altura)` e exiba o resultado com duas casas decimais.

## 14. Gabarito e roteiro de revisão

### Gabarito

1. `"105"`, porque o operador `+` concatena quando um dos operandos é uma string.
2. `==` permite coerção de tipos; `===` compara valor e tipo sem essa coerção.
3. `12`.
4. `do while`.
5. `x = 7`, `y = 5`, `z = 7`.
6. `135`.
7. `document.getElementById("peso").value`.
8. Encerra a chamada da função e pode devolver um valor.
9. Uma possível solução:

```javascript
function verificar(n1, n2) {
    let media = (n1 + n2) / 2;
    return media >= 7 ? "Aprovado" : "Reprovado";
}
```

10. Confira a fórmula, a conversão com `parseFloat()`, o uso de `toFixed(2)` e a atualização de um elemento HTML.

### Roteiro sugerido

1. **Lógica e incrementos:** `exemplo16`, `exemplo17`, `exemplo18` e `teste.html`.
2. **Condições e laços:** `exemplo8` a `exemplo15`, `exemplo21` e `exemplo22`.
3. **Conversões, strings, objetos e funções:** `exemplo19`, `exemplo20`, `exemplo23` a `exemplo31`.
4. **Manipulação de HTML:** `exemplo32`, `exemplo33`, `exemplo34` e `atividade.html`.

**Desafio final:** recrie [o exercício de IMC](https://github.com/znoppa/anotacoesFATEC/blob/main/semestre-2/Desenvolvimento%20Web/Exemplos/JavaScript/exemplo33.html) do zero. Ele reúne funções, conversão numérica, eventos, condições, cálculos e DOM.

---

**Fonte principal:** [Repositório `znoppa/anotacoesFATEC`, pasta `JavaScript`](https://github.com/znoppa/anotacoesFATEC/tree/main/semestre-2/Desenvolvimento%20Web/Exemplos/JavaScript).  
**Nota:** Este resumo é material de estudo elaborado a partir dos exemplos; não representa uma lista oficial dos assuntos exigidos na prova.
