# Arquitetura e Organização de Computadores — Conteúdo Completo

---

# Aula 1 — Bases Numéricas (19/02/2026)

## Base Binária

A base binária utiliza apenas dois dígitos: 0 e 1. Cada dígito possui um peso posicional definido por potências de 2, o que permite representar qualquer valor numérico.

MSD (Most Significant Digit) é o dígito mais significativo, localizado à esquerda. LSD (Least Significant Digit) é o dígito menos significativo, localizado à direita.

## Bits e Representação

Bit é a menor unidade de informação. Com n bits é possível representar 2ⁿ valores distintos. O maior valor representável sem sinal é 2ⁿ − 1.

## Conversão Binário → Decimal

Soma-se os valores das potências de 2 correspondentes às posições onde o dígito binário é 1.

Exemplo: 1011 = 1×2³ + 0×2² + 1×2¹ + 1×2⁰ = 8 + 0 + 2 + 1 = 11

## Conversão Decimal → Binário

Utiliza-se divisões sucessivas por 2, registrando os restos. O número binário é obtido lendo os restos do último para o primeiro.

Exemplo: 13 ÷ 2 = 6 resto 1 / 6 ÷ 2 = 3 resto 0 / 3 ÷ 2 = 1 resto 1 / 1 ÷ 2 = 0 resto 1 → resultado: 1101

## Binário com Parte Fracionária → Decimal

A parte inteira usa potências positivas de 2. A parte fracionária usa potências negativas de 2 (2⁻¹, 2⁻², 2⁻³...).

Exemplo: 10.11 = 1×2¹ + 0×2⁰ + 1×2⁻¹ + 1×2⁻² = 2 + 0 + 0,5 + 0,25 = 2,75

## Decimal com Vírgula → Binário

A parte inteira é convertida por divisões sucessivas por 2. A parte fracionária é convertida por multiplicações sucessivas por 2, anotando a parte inteira de cada resultado.

Nem todo número decimal com vírgula possui representação binária finita. Alguns geram valores infinitos e periódicos.

Exemplo: 0,625 × 2 = 1,25 → 1 / 0,25 × 2 = 0,5 → 0 / 0,5 × 2 = 1,0 → 1 → resultado: 0,101

---

# Aula 2 — Representação com Sinal

## Sinal-Magnitude

O primeiro bit indica o sinal. 0 representa número positivo e 1 representa número negativo. Os demais bits representam a magnitude, ou seja, o valor absoluto.

Exemplo: 0111 = +7 e 1111 = −7

## Complemento a 2

É a forma padrão de representar números negativos em sistemas digitais. Para converter um número positivo para seu equivalente negativo:
1. Escrever o número em binário com sinal-magnitude
2. Inverter todos os bits (NOT)
3. Somar 1 ao resultado
```
+7 = 0111
NOT → 1000
+1  → 1001 = −7
```

A vantagem do complemento a 2 é que a soma de um número com seu negativo sempre resulta em zero, com um carry descartado.
```
  0111  (+7)
+ 1001  (−7)
  0000  + carry descartado
```

Overflow ocorre quando o resultado ultrapassa a capacidade de representação. O bit excedente é tratado pela ULA (Unidade Lógica e Aritmética), que trabalha com registradores para armazenar os operandos.

---

# Aula 3 — Base Octal

## Características

Cada dígito tem 8 representações possíveis: 0 a 7. Cada posição tem peso em potência de 8. A contagem segue: 0, 1, 2, 3, 4, 5, 6, 7, 10, 11... 17, 20...

## Conversão Octal → Decimal

Multiplica-se cada dígito pelo seu peso posicional e soma-se tudo.

Exemplo: 127₈ = 1×8² + 2×8¹ + 7×8⁰ = 64 + 16 + 7 = 87

## Conversão Decimal → Octal

Divisões sucessivas por 8, lendo os restos de baixo para cima.

Exemplo: 35 ÷ 8 = 4 resto 3 / 4 ÷ 8 = 0 resto 4 → resultado: 43₈

## Conversão Octal → Binário

Cada dígito octal é convertido em exatamente 3 bits. Os grupos são concatenados.
```
1 → 001
4 → 100
7 → 111
147₈ = 001100111₂
```

## Conversão Binário → Octal

Agrupa-se os bits da direita para a esquerda em grupos de 3. Cada grupo é convertido para octal.
```
101 101 111
 5   5   7
101101111₂ = 557₈
```

---

# Aula 4 — Base Hexadecimal

## Características

Cada dígito tem 16 representações possíveis. Usa algarismos de 0 a 9 e letras de A a F, onde A=10, B=11, C=12, D=13, E=14 e F=15.

Um número hexadecimal pode ser escrito de três formas: com sufixo h (1FAh), com prefixo 0x (0x1FA) ou com subscrito (1FA₁₆).

## Conversão Hexadecimal → Decimal

Multiplica-se cada dígito pelo seu peso posicional em potências de 16.

Exemplo: 1FA₁₆ = 1×256 + 15×16 + 10×1 = 256 + 240 + 10 = 506

## Conversão Decimal → Hexadecimal

Divisões sucessivas por 16, lendo os restos de baixo para cima.

Exemplo: 18 ÷ 16 = 1 resto 2 / 1 ÷ 16 = 0 resto 1 → resultado: 12₁₆

## Conversão Hexadecimal → Binário

Cada dígito hexadecimal é convertido em 4 bits (um nibble). Os grupos são concatenados.

Nibble = 4 bits = 1 dígito hexadecimal. Byte = 8 bits = 2 nibbles.
```
F → 1111
F → 1111
FF₁₆ = 11111111₂ (1 byte)
```

## Conversão Binário → Hexadecimal

Agrupa-se os bits da direita para a esquerda em grupos de 4. Cada grupo é convertido para hexadecimal.
```
0001 1010 1011
  1    A    B
110101011₂ = 1AB₁₆
```

---

# Aula 5 — Álgebra Booleana

## O que é

É um sistema matemático que trabalha apenas com dois valores: 0 (falso) e 1 (verdadeiro). É a base de todos os circuitos digitais e processadores. Foi criada por George Boole em 1854 e aplicada a circuitos eletrônicos por Claude Shannon em 1937.

## Operações Fundamentais

AND (multiplicação lógica) — o resultado só é 1 se todos os operandos forem 1. Pense como "precisa dos dois".

OR (soma lógica) — o resultado é 1 se pelo menos um operando for 1. Pense como "basta um".

NOT (inversão) — inverte o valor. 0 vira 1, 1 vira 0.

## Teoremas do AND

X · 1 = X → elemento neutro, multiplicar por 1 não muda nada.
X · 0 = 0 → elemento nulo, multiplicar por 0 anula tudo.
X · X = X → idempotência, repetir a variável não muda nada.
X · X̄ = 0 → complemento, uma variável E sua negação é sempre 0.

## Teoremas do OR

X + 0 = X → elemento neutro, somar 0 não muda nada.
X + 1 = 1 → elemento nulo, somar 1 anula tudo.
X + X = X → idempotência, repetir a variável não muda nada.
X + X̄ = 1 → complemento, uma variável OU sua negação é sempre 1.

## Outras Propriedades

Dupla negação: NOT(NOT(X)) = X

Comutatividade: X · Y = Y · X e X + Y = Y + X

Associatividade: (X · Y) · Z = X · (Y · Z) e (X + Y) + Z = X + (Y + Z)

Distributividade:
X · (Y + Z) = X·Y + X·Z → AND distribui sobre OR
X + (Y · Z) = (X+Y) · (X+Z) → OR distribui sobre AND

Absorção:
X + X·Y = X
X · (X + Y) = X
X + X̄·Y = X + Y

## Teoremas de De Morgan

São os mais cobrados em prova. Servem para eliminar barras sobre expressões compostas.

Regra prática: "Quebra a barra, troca o operador."

Primeira forma: NOT(X · Y) = X̄ + Ȳ
A negação de um AND vira OR com cada variável negada.

Segunda forma: NOT(X + Y) = X̄ · Ȳ
A negação de um OR vira AND com cada variável negada.

Para mais variáveis: NOT(A · B · C) = Ā + B̄ + C̄ e NOT(A + B + C) = Ā · B̄ · C̄

Exemplo aplicado:
```
NOT(AB + C)
= NOT(AB) · NOT(C)    ← De Morgan 2ª forma
= (Ā + B̄) · C̄        ← De Morgan 1ª forma no termo AB
```

## Simplificação Algébrica

O objetivo é reduzir o número de portas lógicas no circuito. A estratégia é aplicar De Morgan para eliminar barras compostas, usar distributividade para expandir, usar idempotência e complemento para eliminar termos e usar absorção para simplificar o que sobrar.

Exemplo 1:
```
X = A·(A + B)
  = A·A + A·B      ← distributividade
  = A + A·B        ← idempotência
  = A              ← absorção
```

Exemplo 2:
```
X = (A + B)·(A + B̄)
  = A·A + A·B̄ + B·A + B·B̄   ← distributividade
  = A + A·B̄ + A·B + 0        ← idempotência + complemento
  = A + A·(B̄ + B)            ← fatorando
  = A + A·1                   ← complemento
  = A                         ← absorção
```

## Mapa de Karnaugh

Método visual e sistemático que garante a expressão mínima sem precisar fazer álgebra manual.

Regras fundamentais: agrupar apenas 1s, grupos devem ter tamanho em potência de 2 (1, 2, 4, 8...), grupos maiores resultam em expressão mais simples, é permitido sobrepor grupos, as bordas do mapa são adjacentes pois o mapa é circular, e cada grupo elimina uma variável.

A ordem das colunas segue o Código Gray, que só muda 1 bit por vez: 00 → 01 → 11 → 10. Isso garante que células vizinhas sejam logicamente adjacentes.

Como ler o resultado: cada grupo gera um termo na expressão final. As variáveis que mudam dentro do grupo são eliminadas. As que permanecem fixas formam o termo. Se a variável ficou em 1 entra sem barra, se ficou em 0 entra com barra.

## Formas Canônicas

Soma de Mintermos (SOP — Sum of Products): cada linha da tabela-verdade onde X = 1 gera um mintermo. A expressão final é a soma OR de todos esses termos.

Exemplo: X = ĀB̄C + ĀBC + ABC̄ + ABC

Produto de Maxtermos (POS — Product of Sums): cada linha onde X = 0 gera um maxtermo. A expressão final é o produto AND de todos esses termos. Menos comum, mas útil em alguns projetos de circuito.

## Conexão com Circuitos Lógicos

Cada operação booleana corresponde a uma porta lógica física no hardware.

AND → Porta AND
OR → Porta OR
NOT → Inversor
NAND → NOT(A·B)
NOR → NOT(A+B)
XOR → OU exclusivo, verdadeiro quando os operandos são diferentes

NAND e NOR são chamadas de portas universais. Qualquer circuito lógico pode ser construído usando apenas portas NAND, ou apenas portas NOR. Por isso são as mais usadas na fabricação de chips.

---

# Atualização Dia - 05/04
## Resumo – NÍVEIS DA COMPUTAÇÃO
### 🔷 1. Conceito Geral

A computação é organizada em **camadas (níveis)** para:

- Facilitar o entendimento
- Organizar o funcionamento do sistema
- Permitir desenvolvimento mais simples

📌 Ideia principal:  
👉 Cada nível **depende do nível abaixo** e **serve o nível acima**

🧠 Analogia do PDF:

- Como um **prédio** → cada andar tem sua função, mas todos trabalham juntos

---

## 🧱 2. Os 6 Níveis da Computação
### 🔹 Nível 1: Hardware (Base)

É a **parte física do computador**:

- CPU
- Memória (RAM)
- Dispositivos de entrada/saída

📌 Função:

- Executar operações diretamente

📌 Exemplo:

- Processador acessando dados na memória

👉 É o nível mais baixo e fundamental

---

### 🔹 Nível 2: Microcódigo

- Atua como um **intermediário interno do processador**

📌 Função:

- Traduz instruções da máquina em sinais elétricos

📌 Ideia importante:  
👉 É como um **“manual interno” da CPU**

---

### 🔹 Nível 3: Linguagem de Máquina

- Linguagem que o computador entende diretamente

📌 Características:

- Binária (0 e 1)
- Executada diretamente pelo hardware

📌 Exemplo:

- `101010` → pode representar uma instrução

👉 Difícil para humanos

---

### 🔹 Nível 4: Assembly

- Representação **mais legível da linguagem de máquina**

📌 Características:

- Usa comandos simbólicos
- Ainda é próxima do hardware

📌 Exemplo do PDF:

MOV AX, 1  
ADD AX, 2

👉 Traduzido:

- Coloca 1 no registrador
- Soma 2

---

### 🔹 Nível 5: Linguagens de Alto Nível

- Linguagens usadas por programadores

📌 Exemplos:

- Python
- Java
- C++

📌 Características:

- Mais fáceis de entender
- Mais produtivas

📌 Exemplo do PDF:

a = 1  
b = 2  
print(a + b)

👉 Esse código passa por vários níveis até virar execução real

---

### 🔹 Nível 6: Aplicações (Topo)

- Programas usados no dia a dia

📌 Exemplos:

- Navegador
- WhatsApp
- Editor de texto

📌 Ideia importante:  
👉 O usuário interage **somente com esse nível**

---

### 🔗 3. Conexão entre os níveis

Os níveis funcionam como uma **cadeia de tradução**:

Aplicação → Alto nível → Assembly → Máquina → Microcódigo → Hardware

📌 Exemplo do PDF:

- Clicar em “Enviar” no WhatsApp
- O comando passa por TODOS os níveis até ser executado

👉 Cada nível transforma a informação para o próximo

---

### ⚙️ 4. Por que isso é importante?

- Simplifica sistemas complexos
- Permite abstração (não precisamos entender tudo ao mesmo tempo)
- Facilita desenvolvimento de software

---

### 🧠 5. Ideia MAIS IMPORTANTE (pra prova)

👉 **Abstração em camadas**

- Cada nível esconde a complexidade do nível inferior
- Programadores não precisam mexer com bits diretamente

---

### Lembre-se:

- Computação é organizada em camadas  
-  Cada nível depende do outro  
- Do mais baixo ao mais alto:

1. Hardware
2. Microcódigo
3. Linguagem de Máquina
4. Assembly
5. Linguagens de Alto Nível
6. Aplicações

`Fluxo:   **Usuário → Aplicação → Hardware → Resultado**`

------------------

## Resumo – UCP (CPU)
### 🔷 1. O que é a UCP

A ==**Unidade Central de Processamento (CPU)**== é o componente principal do computador.

👉 Funções principais:

- Executar instruções (programas)
- Controlar todos os outros componentes

Ela funciona como um **sistema sequencial**, executando uma instrução de cada vez.

---

## 🔌 2. Comunicação da CPU

A CPU se comunica com memória e dispositivos por meio de **barramentos**:

### 🔹 Barramento de Endereço

- Indica **onde** está o dado
- Se tem _n bits_ → pode acessar **2ⁿ posições de memória**

---

### 🔹 Barramento de Dados

- Transporta os dados
- Define quantos bits são processados por vez

---

### 🔹 Barramento de Controle

- Envia sinais como:
    - leitura (READ)
    - escrita (WRITE)
    - interrupções

👉 Tudo isso permite comunicação bidirecional CPU ↔ memória

---

## 🔄 3. Ciclo de Instrução (ESSENCIAL)

É o funcionamento básico da CPU:

### Etapas:

1. **Fetch (buscar)**
    - CPU pega a instrução da memória
2. **Decode (decodificar)**
    - Entende o que deve fazer
3. **Execute (executar)**
    - Realiza a operação
4. **Store (armazenar)**
    - Guarda o resultado
5. **Repetir**

👉 Esse ciclo ocorre continuamente

---

## ⚙️ 4. Estrutura Interna da CPU

## 🔹 4.1 ULA (Unidade Lógica e Aritmética)

Responsável por operações:

- Aritméticas:
    - soma, subtração, multiplicação, divisão
- Lógicas:
    - AND, OR, XOR
- Bit a bit:
    - deslocamentos

👉 É literalmente onde os cálculos acontecem

---

## 🔹 4.2 Registradores

São **memórias internas ultra rápidas**

### Principais:

- **ACC (Acumulador)** → guarda resultados
- **IR (Instruction Register)** → instrução atual
- **PC (Program Counter)** → próxima instrução
- **REM (MAR)** → endereço da memória
- **RDM (MDR)** → dados da memória

👉 Acesso muito mais rápido que RAM

---

## 🔹 4.3 Unidade de Controle (UC)

- Coordena tudo
- Envia sinais para:
    - ULA
    - memória
    - registradores

👉 Decide:

- o que fazer
- quando fazer

---

## 🔹 4.4 Clock

- Controla o tempo da CPU
- Frequência (Hz) define velocidade

Ex:

- 1 GHz = 1 bilhão de ciclos/segundo

👉 Cada operação ocorre em ciclos

---

## ⚡ 5. Processamento vs Controle

### 🔹 Processamento

- Executa operações
- ULA + registradores

### 🔹 Controle

- Coordena tudo
- UC + clock

👉 A CPU é basicamente a união dessas duas funções

---

## 📏 6. Tamanho da Palavra

Define quantos bits a CPU trabalha de uma vez:

|Tipo|Exemplo|
|---|---|
|8 bits|antigo|
|16 bits|intermediário|
|32 bits|comum|
|64 bits|atual|

👉 Mais bits = mais desempenho

📌 Exemplo do PDF:

- CPU 8 bits → soma em partes
- CPU 16 bits → soma direto

---

## 🧩 7. Instruções de Máquina

Uma instrução é composta por:

### 🔹 Opcode (operação)

- Ex: somar, mover, comparar

### 🔹 Operando(s)

- Onde estão os dados

---

## 📌 Tipos de operações:

- Matemáticas
- Lógicas
- Transferência de dados
- Controle de fluxo (jump, if)

---

## 📌 Formatos:

- 1 operando
- 2 operandos
- 3 operandos

---

## 🔄 8. Ciclo na prática

Exemplo do PDF:

1. PC aponta instrução
2. Instrução vai para IR
3. UC decodifica
4. Busca dados na memória
5. ULA executa
6. Resultado volta para registrador

👉 Depois repete

---

## 🧠 9. Arquiteturas

### 🔹 CISC

- Instruções complexas
- Menos código
- Mais pesado

---

### 🔹 RISC

- Instruções simples
- Mais rápido
- Mais eficiente

---

## Lembre-se:

👉 CPU = processa + controla  
👉 ULA = faz cálculos  
👉 UC = coordena tudo  
👉 Registradores = memória rápida  
👉 Barramentos = comunicação  
👉 Ciclo = buscar → decodificar → executar  
👉 Clock = velocidade  
👉 Palavra = quantidade de bits