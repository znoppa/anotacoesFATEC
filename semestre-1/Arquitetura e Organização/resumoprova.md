Claro! Aqui vai o mesmo conteúdo em texto puro, amigável para Markdown no GitHub ou para colar no WhatsApp:

---

# 🔣 Álgebra Booleana — Expansão Completa

## 1. O que é Álgebra Booleana?

É um sistema matemático que trabalha apenas com dois valores: 0 (falso) e 1 (verdadeiro). É a base de todos os circuitos digitais e processadores. Foi criada por George Boole em 1854 e aplicada a circuitos eletrônicos por Claude Shannon em 1937.

---

## 2. Operações Fundamentais

**AND (Multiplicação lógica)** — o resultado só é 1 se todos os operandos forem 1. Pense como "precisa dos dois".

**OR (Soma lógica)** — o resultado é 1 se pelo menos um operando for 1. Pense como "basta um".

**NOT (Inversão)** — simplesmente inverte o valor. 0 vira 1, 1 vira 0.

---

## 3. Teoremas Fundamentais

**Propriedades do AND:**
- X · 1 = X → multiplicar por 1 não muda nada (elemento neutro)
- X · 0 = 0 → multiplicar por 0 anula tudo (elemento nulo)
- X · X = X → repetir a variável não muda nada (idempotência)
- X · X̄ = 0 → uma variável E sua negação é sempre 0 (complemento)

**Propriedades do OR:**
- X + 0 = X → somar 0 não muda nada (elemento neutro)
- X + 1 = 1 → somar 1 anula tudo (elemento nulo)
- X + X = X → repetir a variável não muda nada (idempotência)
- X + X̄ = 1 → uma variável OU sua negação é sempre 1 (complemento)

**Dupla Negação:**
NOT(NOT(X)) = X → negar duas vezes volta ao original.

**Comutatividade:**
X · Y = Y · X e X + Y = Y + X → a ordem não importa.

**Associatividade:**
(X · Y) · Z = X · (Y · Z) → o agrupamento não importa.

**Distributividade:**
- X · (Y + Z) = X·Y + X·Z → AND distribui sobre OR
- X + (Y · Z) = (X+Y) · (X+Z) → OR distribui sobre AND

**Absorção:**
- X + X·Y = X
- X · (X + Y) = X
- X + X̄·Y = X + Y

---

## 4. Teoremas de De Morgan

São os mais cobrados em prova. Servem para eliminar barras sobre expressões compostas.

**Regra prática: "Quebra a barra, troca o operador."**

Primeira forma: NOT(X · Y) = X̄ + Ȳ
A negação de um AND vira OR com cada variável negada.

Segunda forma: NOT(X + Y) = X̄ · Ȳ
A negação de um OR vira AND com cada variável negada.

Para mais variáveis funciona igual:
- NOT(A · B · C) = Ā + B̄ + C̄
- NOT(A + B + C) = Ā · B̄ · C̄

**Exemplo aplicado:**
```
NOT(AB + C)
= NOT(AB) · NOT(C)    ← De Morgan 2ª forma
= (Ā + B̄) · C̄        ← De Morgan 1ª forma no termo AB
```

---

## 5. Simplificação Algébrica

O objetivo é reduzir o número de portas lógicas no circuito. A estratégia geral é:
1. Aplicar De Morgan para eliminar barras compostas
2. Usar distributividade para expandir
3. Usar idempotência e complemento para eliminar termos
4. Usar absorção para simplificar o que sobrar

**Exemplo 1:**
```
X = A·(A + B)
  = A·A + A·B      ← distributividade
  = A + A·B        ← idempotência
  = A              ← absorção
```

**Exemplo 2:**
```
X = (A + B)·(A + B̄)
  = A·A + A·B̄ + B·A + B·B̄   ← distributividade
  = A + A·B̄ + A·B + 0        ← idempotência + complemento
  = A + A·(B̄ + B)            ← fatorando
  = A + A·1                   ← complemento
  = A                         ← absorção
```

---

## 6. Mapa de Karnaugh

Método visual e sistemático que garante a expressão mínima sem precisar fazer álgebra manual.

**Regras fundamentais:**
- Agrupar apenas 1s
- Grupos devem ter tamanho em potência de 2: 1, 2, 4, 8...
- Grupos maiores = expressão mais simples
- É permitido sobrepor grupos
- As bordas do mapa são adjacentes (o mapa é "circular")
- Cada grupo elimina uma variável

**A ordem das colunas segue o Código Gray** (só muda 1 bit por vez): 00 → 01 → 11 → 10. Isso garante que células vizinhas sejam logicamente adjacentes.

**Como ler o resultado:**
Cada grupo gera um termo na expressão final. As variáveis que mudam dentro do grupo são eliminadas. As que permanecem fixas formam o termo. Se a variável ficou em 1, entra sem barra. Se ficou em 0, entra com barra.

---

## 7. Formas Canônicas

**Soma de Mintermos (SOP — Sum of Products):**
Cada linha da tabela-verdade onde X = 1 gera um mintermo. A expressão final é a soma OR de todos esses termos.

Exemplo: X = ĀB̄C + ĀBC + ABC̄ + ABC

**Produto de Maxtermos (POS — Product of Sums):**
Cada linha onde X = 0 gera um maxtermo. A expressão final é o produto AND de todos esses termos. Menos comum, mas útil em alguns projetos de circuito.

---

## 8. Conexão com Circuitos Lógicos

Cada operação booleana corresponde a uma porta lógica física no hardware:

AND → Porta AND
OR → Porta OR
NOT → Inversor
NAND → NOT aplicado ao AND, ou seja, NOT(A·B)
NOR → NOT aplicado ao OR, ou seja, NOT(A+B)
XOR → OU exclusivo, verdadeiro quando os operandos são diferentes

**NAND e NOR são chamadas de portas universais** — qualquer circuito lógico do mundo pode ser construído usando apenas portas NAND, ou apenas portas NOR. Por isso são as mais usadas na fabricação de chips.

---

Pronto! Pode colar direto no `.md` do GitHub ou no WhatsApp que fica legível nos dois. Quer que eu faça o mesmo com os outros tópicos de AOC?