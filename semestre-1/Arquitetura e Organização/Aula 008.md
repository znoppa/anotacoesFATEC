16/04/2026

# Assembly — Recapitulação: Memória do Processador

---

## 1. O Bit — A Menor Unidade

Cada posição da memória armazena **bits** (0 ou 1). Agrupamos bits para formar unidades maiores:

| Unidade | Tamanho | Valores possíveis |
|---|---|---|
| **1 bit** | 1 | $$2^1 = 2$$ |
| **1 nibble** | 4 bits | $$2^4 = 16$$ |
| **1 byte** | 8 bits | $$2^8 = 256$$ |
| **1 word** | 16 bits | $$2^{16} = 65.536$$ |
| **1 dword** | 32 bits | $$2^{32} \approx 4,29 \times 10^9$$ |

---

## 2. A Memória como Coluna

A memória é uma **tabela vertical**: cada linha tem um **endereço** e guarda uma **palavra** (conjunto fixo de bits).

```
    ENDEREÇO │       CONTEÚDO
   ──────────┼─────────────────────
    00h      │  0001 1011 0100       ← instrução (LDA B4)
    01h      │  0011 1011 0101       ← instrução (ADD B5)
    ...      │       ...
    B4h      │  0001 1010 0111       ← dado (1A7h)
    B5h      │  0000 0111 1101       ← dado (07Dh)
    ...      │       ...
    FFh      │  0000 0000 0000
   ──────────┴─────────────────────
```

> 🔑 **Instruções e dados ficam misturados** na mesma memória. O processador diferencia pelo **contexto** (PC aponta instruções, operandos apontam dados).

---

## 3. Operações com a Memória

| Operação | Fluxo |
|---|---|
| **Leitura** | CPU envia endereço (REM) + sinal de leitura → Memória devolve dado (RDM) |
| **Escrita** | CPU envia endereço (REM) + dado (RDM) + sinal de escrita → Memória armazena |

---

## 4. Por que Isso Importa para o Assembly?

No Assembly, **você manipula diretamente esses endereços e registradores**:

```asm
MOV AX, [00B4h]    ; Lê o valor do endereço B4h → registrador AX
ADD AX, [00B5h]    ; Soma AX com o valor do endereço B5h
MOV [00B6h], AX    ; Grava o resultado no endereço B6h
```

É exatamente o que o processador hipotético fez com `LDA B4` e `ADD B5` — só que em sintaxe Assembly real.

---
# Conjunto de instruções Assembly

| Instrução | Operação            | Descrição                                             |
| --------- | ------------------- | ----------------------------------------------------- |
| LDA Op    | ACC ← (Op)          | Load — Carrega no ACC o valor do endereço Op          |
| STA Op    | (Op) ← ACC          | Store — Armazena o ACC no endereço Op                 |
| ADD Op    | ACC ← ACC + (Op)    | Add — Soma (Op) com ACC                               |
| NOT       | ACC ← ~ACC          | Not — Inverte todos os bits do ACC (complemento de 1) |
| AND Op    | ACC ← ACC & (Op)    | And — E lógico bit a bit entre ACC e (Op)             |
| OR Op     | ACC ← ACC \| (Op)   | Or — OU lógico bit a bit entre ACC e (Op)             |
| JMP Op    | PC ← Op             | Jump — Desvio incondicional                           |
| JZ Op     | Se ACC = 0, PC ← Op | Jump if Zero                                          |
| JP Op     | Se ACC > 0, PC ← Op | Jump if Positive                                      |
| JN Op     | Se ACC < 0, PC ← Op | Jump if Negative                                      |
| GET Op    | (Op) ← entrada      | Get — Lê da porta de entrada                          |
| PRT Op    | saída ← (Op)        | Print — Escreve na porta de saída                     |
| HLT       | —                   | Halt — Para a execução                                |
Glossário:

- **Op (Operando)** - Endereço de memória onde está o dado a ser utilizado pela instrução. (Op) com parênteses indica o conteúdo armazenado naquele endereço
- **ACC (Acumulador)** - Registrador principal do processador. É onde os dados são carregados, manipulados e armazenados temporariamente durante as operações
- **PC (Contador de Programa)** - Registrador que armazena o endereço da próxima instrução a ser executada. Incrementa automaticamente a cada instrução, exceto quando alterado por instruções de desvio (JMP, JZ, JP, JN)

## Capacidade dos Registradores

| Registrador | Tamanho | Justificativa |
|---|---|---|
| **ACC** | **8 bits** | Tamanho suficiente para armazenar os dados processados pela ULA |
| **PC** | **8 bits** | Igual ao barramento de endereços — precisa endereçar até $$2^8 = 256$$ posições de memória |
| **REM** | **8 bits** | Igual ao barramento de endereços — armazena o endereço a ser acessado na memória |
| **RDM** | **8 bits** | Armazena os dados transferidos de/para a memória |
| **IR** | **16 bits** | Precisa armazenar a **instrução completa**: **4 bits** do opcode + **8 bits** do operando = 12 bits, mas possui **16 bits** para comportar instruções maiores ou possíveis expansões do conjunto de instruções |

---

## Por que o IR tem 16 bits?

O **IR** é o único registrador com **16 bits** porque:

1. Ele precisa armazenar a **instrução inteira** de uma só vez (opcode + operando)
2. Com **16 bits**, há espaço para:
   - Expandir o **código de operação** além de 4 bits (mais instruções)
   - Expandir o **campo de operando** além de 8 bits (mais endereços)
3. Garante **compatibilidade futura** com instruções mais complexas

> 📌 Resumindo: os registradores de **dados e endereços** (ACC, PC, REM, RDM) acompanham o barramento de **8 bits**, enquanto o **IR** é maior para comportar a instrução completa com margem de expansão.

Precisa de mais algum ajuste, Mestre do Universo? 🚀

## Por que instruções de subtração, multiplicação e divisão são "obsoletas"

---

### O Princípio

O processador **só precisa da soma** como operação aritmética fundamental. As demais podem ser **derivadas** a partir dela e de operações lógicas.

---

### Subtração → Soma com Complemento de 2

Subtrair é o mesmo que **somar com o valor negativo**:

$$A - B = A + (-B)$$

E como representamos $$-B$$ em binário? Com o **complemento de 2**:

1. Inverte todos os bits (complemento de 1)
2. Soma 1

```
Exemplo: 5 - 3 = 5 + (-3)

  3  = 0011
 ~3  = 1100  (inverte bits)
 +1  = 1101  (-3 em complemento de 2)

  5 + (-3) = 0101 + 1101 = 0010 = 2 ✅
```

> 💡 Só precisa de **inversão de bits (NOT)** + **soma (ADD)**.

---

### Multiplicação → Somas Sucessivas

$$A \times B = A + A + A + ... \text{(B vezes)}$$

```
Exemplo: 4 × 3 = 4 + 4 + 4 = 12

    LDA 00h      ; ACC = 0 (resultado)
    ADD 10h      ; ACC = 0 + 4 = 4
    ADD 10h      ; ACC = 4 + 4 = 8
    ADD 10h      ; ACC = 8 + 4 = 12
```

Ou com um **loop**:

```
    ; Multiplicar (10h) × (11h)
    ; 10h = 4, 11h = 3, 12h = 0 (resultado), 13h = 1 (constante)

    LDA 12h       ; ACC = 0
loop:
    ADD 10h       ; ACC = ACC + 4
    STR 12h       ; salva parcial
    LDA 11h       ; ACC = contador (3)
    SUB 13h       ; ACC = contador - 1
    STR 11h       ; atualiza contador
    JP loop       ; se ACC > 0, repete
    LDA 12h       ; carrega resultado final
    HLT
```

---

### Divisão → Subtrações Sucessivas

$$A \div B = \text{quantas vezes B cabe em A}$$

```
Exemplo: 12 ÷ 4

    12 - 4 = 8   (1 vez)
     8 - 4 = 4   (2 vezes)
     4 - 4 = 0   (3 vezes) → resultado = 3 ✅
```

Conta-se **quantas subtrações** foram feitas até chegar em zero (ou negativo).

---

### Resumo

| Operação | Como é feita | Operações base necessárias |
|---|---|---|
| **Subtração** | Complemento de 2 + Soma | NOT + ADD |
| **Multiplicação** | Somas repetidas (loop) | ADD + JMP |
| **Divisão** | Subtrações repetidas (loop) | SUB (que é ADD + NOT) + JMP |

---

> 🔑 **Conclusão, Mestre do Universo:** Teoricamente, um processador só precisa de **ADD, NOT e JMP** para fazer qualquer operação aritmética. Na prática, incluímos SUB, MUL e DIV no hardware porque fazer por soma/subtração sucessiva é **muito lento** — circuitos dedicados são ordens de grandeza mais rápidos.

# Programa em Assembly
Programa que decresce de 10 

| Endereço | Valor |
| -------- | ----- |
| 128      | 1     |
| 129      | 10    |


```
0 LDA 128
1 128
2 NOT
3 ADD 128
4 128
5 STA 130
6 130
7 LDA 129
8 129
9 ADD 130
10 130
11 STA 129
12 129
13 JZ 17
14 17
15 JMP 7
16 7
17 HLT
```



## Explicação — Decrescer de 10
---

### Dados Iniciais

| Endereço | Valor |
|---|---|
| 128 | 1 |
| 129 | 10 (contador) |
| 130 | será preenchido com -1 |

---

### Parte 1 — Criar o -1

```
LDA 128    → ACC = 1
NOT        → ACC = ~1 = -2
ADD 128    → ACC = -2 + 1 = -1
STA 130    → MEM[130] = -1
```

> Usa complemento a 2: $$-x = \text{NOT}(x) + 1$$

---

### Parte 2 — Loop de decremento

```
LDA 129    → Carrega o contador
ADD 130    → Soma -1 (decrementa)
STA 129    → Salva o novo valor
JZ  17     → Se ACC = 0, vai pro HLT
JMP 7      → Senão, repete o loop
HLT        → Para
```

---

### Resultado

$$10 \rightarrow 9 \rightarrow 8 \rightarrow \dots \rightarrow 1 \rightarrow 0 \rightarrow \text{HLT}$$

O programa **decrementa de 10 até 0** e para. Simples assim! 🚀