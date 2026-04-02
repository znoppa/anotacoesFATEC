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
