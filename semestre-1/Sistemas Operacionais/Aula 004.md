
Data: 10/03/2026
Continuação da [[Primeiro Semestre/Sistemas Operacionais/Aula 003|Aula 003]]
-----
### 8.3 SJF Preemptivo (SRTN – Shortest Remaining Time Next)

**Tipo:** Preemptivo.

**Como funciona:**
- Versão preemptiva do SJF.
- O escalonador sempre escolhe o processo com o **menor tempo RESTANTE** de execução.
- Quando um **novo processo chega**, seu tempo é comparado ao tempo **restante** do processo em execução. Se o novo for menor, o processo atual é **interrompido**.

**Vantagem:** Reduz ainda mais o tempo médio de espera.

**Desvantagem:** Exige conhecer previamente os tempos de execução. Processos longos podem sofrer **starvation** (nunca serem executados se sempre chegarem processos menores).

- Exemplo:
  *"Agora o caixa do supermercado é mais agressivo: se alguém com 1 item chega enquanto ele está atendendo alguém com 5 itens restantes, ele PARA o atendimento atual e atende o de 1 item primeiro. Depois volta pro anterior."*

#### Exemplo detalhado (passo a passo):

| Processo | Tempo Execução | Tempo Chegada |
|---|---|---|
| A | 7 | 0 |
| B | 4 | 2 |
| C | 1 | 4 |
| D | 4 | 5 |

==Exemplo na página 28 do PDF:== 
[[Primeiro Semestre/Sistemas Operacionais/Materiais/PDFESCALONAMENTO.pdf#page=28&selection=0,0,4,3|PDFESCALONAMENTO, página 28]]

**Passo a passo:**

- **Tempo 0:** Só A existe. A começa a executar.
- **Tempo 2:** B chega (tempo=4). A tem 5 restantes. 4 < 5 → **B interrompe A**.
- **Tempo 3:** B executando (3 restantes). Ninguém novo chegou. Continua.
- **Tempo 4:** C chega (tempo=1). B tem 2 restantes. 1 < 2 → **C interrompe B**.
- **Tempo 5:** C termina. D chega (tempo=4). Na fila: B(2 restantes), A(5 restantes), D(4). **B é o menor** → B executa.
- **Tempo 7:** B termina. Na fila: D(4), A(5). **D é menor** → D executa.
- **Tempo 11:** D termina. Só resta A(5) → A executa.
- **Tempo 16:** A termina.

```
|A-A|B-B-C|B-B|--D (4)--|----A (5)----|
0  2    5  7         11              16
```

**Como calcular o tempo de espera do SJF:**
```
TEP (TEMPODE ESPERA DO PROCESSO)
TEP = FINAL - CRIAÇÃO - EXECUÇÃO
TEP A = 16 - 0 - 7 = 9
TEP B = 7 - 2 - 4 = 1
TEP C = 5 - 4 - 1 = 0
TEP D = 11 - 5 - 4 = 2

TEMPO MEDIO ESPERA (TME)
TME = (9 + 1 + 0 + 2) / 4 = 3
```
- **Turnaround:** A=16, B=5, C=1, D=6
- **TMR:** (16+5+1+6)/4 = **7**
- **TEP:** A=16-0-7=9, B=7-2-4=1, C=5-4-1=0, D=11-5-4=2
- **TME:** (9+1+0+2)/4 = **3**

- Exemplo:
  *"No pronto-socorro com triagem constante: se chega um paciente com uma dor de cabeça (4h de atendimento) enquanto tratam um paciente de 5h restantes, o novo é mais rápido e toma a vez. Mas se chega alguém com um corte no dedo (1 minuto), esse passa na frente de todos."*

---

### 8.4 Round Robin (Escalonamento Circular)

**Tipo:** Preemptivo.

**Como funciona:**
- Atribui frações de tempo iguais (**quantum**) para cada processo, de forma **circular**.
- O processo executa até:
  - **Terminar** seu processamento, OU
  - **Bloquear** voluntariamente para E/S, OU
  - Sua **fatia de tempo (quantum) acabar** → sofre preempção e vai pro final da fila.
- Semelhante ao FIFO, mas com o **limite de tempo do quantum**.
- **Imune ao Starvation** — todos os processos eventualmente são executados.

Resumindo, roda o quantum de todos e volta pro começo, se um acabar antes e tiver mais depois dele ainda continua não retorna ao inicio.
**Observação sobre o quantum:**
- **Muito alto:** comporta-se como FIFO (processos terminam antes do quantum acabar).
- **Muito baixo:** excesso de chaveamentos, prejudicando desempenho (o processador gasta mais tempo trocando processos do que executando).

**Vantagem:** Nenhum processo monopoliza a CPU.

**Desvantagem:** Processos **CPU-bound** são beneficiados pois usam o quantum inteiro. Processos **I/O-bound** muitas vezes liberam a CPU antes do quantum acabar (vão para espera), "desperdiçando" seu tempo.

- Exemplo:
  *"É uma roda de videogame: cada jogador tem 2 minutos para jogar (quantum = 2). Acabou o tempo? Passa o controle. Se o jogador terminou a fase antes dos 2 minutos, também passa. Se ele precisa esperar um loading (E/S), passa o controle enquanto carrega."*

#### Exemplo numérico (Quantum = 2, todos chegam no tempo 0):

| Ordem | Processo | Tempo Execução |
|---|---|---|
| 1 | A | 6 |
| 2 | B | 8 |
| 3 | C | 4 |
| 4 | D | 2 |

```
|A|B|C|D|A|B|C|A|B|B|
0 2 4 6 8 10 12 14 16 18 20
```

Detalhamento: A(2), B(2), C(2), D(2→termina), A(2), B(2), C(2→termina), A(2→termina), B(2), B(2→termina)

- **Turnaround:** A=16, B=20, C=14, D=8
- **TMR:** 58/4 = **14,5**
- **TEP:** A=10, B=12, C=10, D=6
- **TME:** 38/4 = **9,5**

- Exemplo:
  *"4 amigos dividem 1 computador para jogar. Cada um tem 2 minutos. A precisa de 6 min total, B de 8, C de 4 e D de 2. D termina na primeira rodada! C termina na segunda. A termina na terceira. B é o último a acabar porque precisa de mais tempo total."*

#### Exemplo com tempos de chegada diferentes (Quantum = 2):

| Tempo Criação | Processo | Tempo Execução |
|---|---|---|
| 0 | A | 8 |
| 1 | B | 5 |
| 3 | C | 1 |
| 6 | D | 4 |

**Passo a passo (gerenciando a fila):**

- **Tempo 0-2:** A executa 2 u.t. → preempção → A vai pro final da fila. B já chegou (tempo 1).
  - Fila: B, A
- **Tempo 2-4:** B executa 2 u.t. → preempção. C chegou (tempo 3).
  - Fila: C, A, B
- **Tempo 4-5:** C executa 1 u.t. → **termina**.
  - Fila: A, B (D ainda não chegou)
- **Tempo 5-7:** A executa 2 u.t. → preempção. D chegou (tempo 6).
  - Fila: B, D, A
- **Tempo 7-9:** B executa 2 u.t. → preempção.
  - Fila: D, A, B
- **Tempo 9-11:** D executa 2 u.t. → preempção.
  - Fila: A, B, D
- **Tempo 11-13:** A executa 2 u.t. → preempção.
  - Fila: B, D, A
- **Tempo 13-14:** B executa 1 u.t. → **termina** (já executou 5 total).
  - Fila: D, A
- **Tempo 14-16:** D executa 2 u.t. → **termina** (já executou 4 total).
  - Fila: A
- **Tempo 16-18:** A executa 2 u.t. → **termina** (já executou 8 total).

```
|A-A|B-B|C|A-A|B-B|D-D|A-A|B|D-D|A-A|
0  2   4 5  7   9  11 13 14  16  18
```

- **Turnaround:** A=18, B=13, C=4, D=10
- **TMR:** 45/4 = **11,25**
- **TEP:** A=10, B=8, C=3, D=6
- **TME:** 27/4 = **6,75**

---

### 8.5 Escalonamento por Prioridade

**Tipo:** Preemptivo ou Não-Preemptivo.

**Como funciona:**
- Cada processo recebe uma **prioridade**.
- O processo com **maior prioridade** na fila de pronto é escolhido primeiro.
- Processos com **prioridades iguais** são escalonados por FIFO.
- **Não existe fatia de tempo** — o processo executa até terminar, bloquear, ou ser interrompido por um processo de prioridade **maior**.

**Prioridade Estática:** Não muda durante a vida do processo.

**Prioridade Dinâmica:** Pode ser ajustada pelo SO durante a execução (ex: aumentar a prioridade de quem espera muito).

**Problema principal: STARVATION** — Processos de baixa prioridade podem **nunca ser executados** se sempre chegarem processos de prioridade maior.

**Solução:** Na alocação dinâmica, **incrementar** a prioridade dos processos que permanecem muito tempo na fila de pronto.

- Exemplo:
  *"No hospital, o médico atende primeiro quem está em estado mais grave (maior prioridade). Um paciente com unha encravada (prioridade baixa) pode esperar horas se sempre chegarem urgências. Starvation é quando o coitado da unha encravada nunca é atendido. A solução dinâmica é: 'se você está esperando há mais de 4 horas, sua prioridade sobe automaticamente.'"*

#### Classes de Prioridade
- Processos são agrupados em **classes** (ex: 4 classes).
- **Dentro de cada classe**, usa-se escalonamento circular (Round Robin).
- Enquanto houver processos na classe de maior prioridade, as classes inferiores **não executam**.
- Se as prioridades não forem ajustadas → **Starvation** nas classes inferiores.

- Exemplo:
  *"Num aeroporto com 4 filas de embarque: Classe 4 (pilotos e tripulação), Classe 3 (primeira classe), Classe 2 (executiva), Classe 1 (econômica). Enquanto tiver gente na Classe 4, ninguém da econômica embarca. Se sempre chegar tripulação, a econômica morre de esperar."*

#### Exemplo Não-Preemptivo (todos no tempo 0):

| Processo | Tempo Execução | Prioridade |
|---|---|---|
| A | 10 | 2 |
| B | 4 | 1 |
| C | 3 | 3 (maior) |

Ordem: **C (prio 3) → A (prio 2) → B (prio 1)**

```
|C(3)|----A (10)----|B(4)|
0   3              13   17
```

#### Exemplo Preemptivo com reavaliação (tempos de chegada diferentes):

| Processo | Tempo Execução | Tempo Criação | Prioridade |
|---|---|---|---|
| A | 8 | 0 | 2 |
| B | 4 | 2 | 5 |
| C | 1 | 4 | 6 (maior) |
| D | 4 | 5 | 4 |

**Passo a passo:**
- **Tempo 0-2:** Só A existe → A executa.
- **Tempo 2:** B chega (prio 5 > prio 2 de A) → **B interrompe A**.
- **Tempo 4:** C chega (prio 6 > prio 5 de B) → **C interrompe B**.
- **Tempo 5:** C termina. D chega (prio 4). Na fila: B(prio 5), A(prio 2), D(prio 4). **B tem maior** → B volta.
- **Tempo 7:** B termina. D(prio 4) vs A(prio 2) → **D executa**.
- **Tempo 11:** D termina → **A executa** os 6 restantes.
- **Tempo 17:** A termina.

```
|A-A|B-B|C|B-B|--D(4)--|---A (6)---|
0  2   4 5  7        11          17
```

- Exemplo:
  *"No hospital: A (prioridade baixa) começa a ser atendido. B chega com urgência maior e toma a vez. C chega em estado crítico e toma a vez de B. Quando C é liberado, B volta (é mais urgente que D que acabou de chegar e que A). Depois D, e por último A — que esperou bastante."*

---

### 8.6 Escalonamento Circular com Prioridade

**Tipo:** Preemptivo (por tempo E por prioridade).

**Como funciona:**
- Combina o conceito de **fatia de tempo (quantum)** com **prioridade**.
- O processo executa até:
  - **Terminar**, OU
  - **Bloquear** voluntariamente, OU
  - Sofrer **preempção por tempo** (quantum acabou), OU
  - Sofrer **preempção por prioridade** (chegou processo com prioridade maior).
- Permite melhor **balanceamento** no uso da CPU.

- Exemplo:
  *"No hospital agora com regra dupla: cada atendimento tem no máximo 2 horas (quantum). Se um paciente grave chegar, o médico para e atende o grave (preempção por prioridade). Se o tempo do paciente atual acabar, ele volta pra fila na posição da sua prioridade."*

#### Exemplo apenas com preempção por tempo (todos no tempo 0, Quantum = 2):

| Processo | Tempo Execução | Prioridade |
|---|---|---|
| A | 8 | 5 (maior) |
| B | 5 | 4 |
| C | 1 | 2 (menor) |
| D | 4 | 4 |

A ordem na fila segue a prioridade: **A, B, D, C**. Dentro da mesma prioridade (B e D, ambos prio 4), segue FIFO.

```
|A|B|D|C|A|B|D|A|B|A|
0 2 4 6 7 9 11 13 15 16 18
```

- **Turnaround:** A=18, B=16, C=7, D=13
- **TMR:** 54/4 = **13,25**
- **TEP:** A=10, B=11, C=6, D=9
- **TME:** 36/4 = **9**

#### Exemplo com preempção por tempo E prioridade (tempos de chegada diferentes):

| Tempo Criação | Processo | Tempo Execução | Prioridade |
|---|---|---|---|
| 0 | A | 8 | 4 |
| 1 | B | 3 | 5 (maior) |
| 3 | C | 1 | 1 (menor) |
| 6 | D | 4 | 1 (menor) |

**Quantum = 2**

**Passo a passo:**
- **Tempo 0-1:** A executa (único processo).
- **Tempo 1:** B chega (prio 5 > prio 4 de A) → **B interrompe A** (preempção por prioridade).
- **Tempo 1-3:** B executa 2 u.t. → preempção por quantum. C chegou (tempo 3, prio 1). Na fila: A(prio 4), C(prio 1). Escalonador olha a fila e escolhe o de **maior prioridade exceto B** → **A executa**.
- **Tempo 3-5:** A executa 2 u.t. → preempção por quantum. Fila: B(prio 5), C(prio 1). **B tem maior** → B volta.
- **Tempo 5-6:** B executa 1 u.t. → **termina**. D chega (tempo 6, prio 1). Fila: A(prio 4), C(prio 1), D(prio 1). **A tem maior** → A executa.
- **Tempo 6-8:** A executa 2 u.t. → preempção. Fila: C(1), D(1). Mesma prioridade, FIFO → **C executa**.
- **Tempo 8-9:** C executa 1 u.t. → **termina**. Fila: D(1), A(4). **A tem maior** → A executa.
- **Tempo 9-11:** A executa 2 u.t. → preempção. Fila: D(1). **D executa**.
- **Tempo 11-13:** D executa 2 u.t. → preempção. Fila: A(4). **A executa**.
- **Tempo 13-15:** A executa 2 u.t. → preempção. Fila: D(1). **D executa**.
- **Tempo 15:** D executa → **termina** (já executou 4 total, restava 2).
  - Mas espera, vamos recalcular... A executou: 1+2+2+2+? restam 1 u.t. D executou: 2+? restam 2.
  - **Tempo 13-14:** A executa 1 u.t. → **termina**.
  - **Tempo 14-15:** D executa...
  
Conforme os dados do PDF:

- **Turnaround:** A=16, B=5, C=6, D=9
- **TMR:** 36/4 = **9**
- **TEP:** A=8, B=2, C=5, D=5
- **TME:** 20/4 = **5**

- Exemplo:
  *"Hospital com cronômetro E prioridade: cada médico atende no máximo 2 horas (quantum). Mas se chegar alguém mais grave, ele para e atende o grave. Se acabar o tempo e ninguém grave chegou, o paciente volta pra fila conforme sua prioridade."*

---

### 8.7 Escalonamento por Loteria

**Tipo:** Preemptivo (por sorteio).

**Como funciona:**
- Cada processo recebe **bilhetes de loteria**.
- O prêmio é um **intervalo de tempo de CPU**.
- A cada escalonamento, um **bilhete é sorteado aleatoriamente** e o processo dono do bilhete ganha a CPU.
- Processos mais importantes recebem **mais bilhetes** → maior chance de serem sorteados.

**Vantagem:** Simples, flexível, e a probabilidade de execução é proporcional à importância do processo.

**Desvantagem:** Por ser aleatório, não há garantia de ordem — um processo pode ter "azar" e demorar para ser sorteado.

- Exemplo:
  *"Imagine uma rifa no churrasco: quem é mais importante ganha mais números. O cara que trouxe a carne (processo importante) tem 4 números, o que trouxe o refrigerante tem 2, e o que veio de mãos vazias tem 1. A cada rodada, sorteia um número e quem ganhou escolhe o que quer comer primeiro."*

#### Exemplo numérico:

| Processo | Tempo Execução | Qtd Bilhetes | IDs dos Bilhetes | Tempo Criação |
|---|---|---|---|---|
| A | 8 | 4 | 1, 6, 7, 10 | 0 |
| B | 3 | 2 | 2, 8 | 0 |
| C | 1 | 1 | 3 | 0 |
| D | 4 | 3 | 4, 5, 9 | 6 |

**Prêmio:** 2 u.t. de CPU por sorteio.

**Chances no tempo 0** (7 bilhetes totais, D ainda não existe):
- A: 4/7 = **57%**
- B: 2/7 = **29%**
- C: 1/7 = **14%**

**Ordem dos sorteios (conforme exemplo do PDF):**
- Tempo 0: sorteado bilhete **2** → Processo B
- Tempo 2: sorteado bilhete **6** → Processo A
- Tempo 4: sorteado bilhete **8** → Processo B
- Tempo 5: B termina (só precisava de 1 u.t. mais). Sorteado **10** → Processo A
- Tempo 7: sorteado **3** → C. Depois **4** → D. Depois **1** → A. Depois **9** → D. Depois **5** → D termina. Depois **7** → A termina.

- **Turnaround:** A=16, B=5, C=8, D=14
- **TMR:** 43/4 = **10,75**
- **TEP:** A=8, B=2, C=7, D=4
- **TME:** 21/4 = **5,25**

---

### 8.8 Escalonamento Circular Virtual

**Tipo:** Preemptivo (refinamento do Round Robin).

**Como funciona:**
- É um **Round Robin aprimorado** que resolve o problema dos processos I/O-bound serem prejudicados.
- Quando um processo sai do estado de **espera (bloqueado)**, ele vai para uma **fila auxiliar de pronto** (não para a fila principal).
- Processos na **fila auxiliar têm preferência** sobre a fila principal.
- O escalonador só pega processos da fila principal **quando a fila auxiliar está vazia**.
- A fatia de tempo do processo da fila auxiliar é: **quantum − tempo que ele usou da última vez** que foi escalonado (para compensar o tempo que "perdeu" em E/S).

**Vantagem:** Corrige a injustiça do Round Robin com processos I/O-bound, dando-lhes preferência ao voltar de espera.

**Desvantagem:** Mais complexo de implementar.

- Exemplo:
  *"Na roda de videogame, se um jogador teve que parar porque o jogo travou (E/S), quando voltar ele vai pra uma 'fila VIP' e tem preferência sobre quem está na fila normal. Além disso, se ele só jogou 30 segundos dos 2 minutos antes de travar, quando voltar ele ganha os 1 minuto e 30 segundos restantes — não 2 minutos novos."*

#### Exemplo detalhado (Quantum = 2, todos no tempo 0):

| Processo | Tempo Execução | Tipo | Tempo Espera | Tempo Processador |
|---|---|---|---|---|
| A | 6 | CPU | — | — |
| B | 8 | I/O | 1 | 1 |
| C | 4 | I/O + CPU | 1 | 1 |
| D | 2 | CPU | — | — |
| E | 1 | I/O | 2 | 1 |

**Legenda:**
- **CPU:** processo CPU-bound (não faz E/S)
- **I/O:** processo I/O-bound (alterna entre processador e espera)
- **Tempo Espera:** quanto tempo fica bloqueado (em E/S) a cada vez
- **Tempo Processador:** quanto tempo usa de CPU antes de ir pra espera

**Passo a passo simplificado:**

- **Tempo 0-2:** A executa 2 u.t. → preempção por quantum → volta final da fila de pronto (é CPU-bound).
- **Tempo 2-3:** B executa 1 u.t. → vai pra **espera** (I/O, usa 1 de processador depois espera 1).
- **Tempo 3-4:** C começa a executar. B está em espera.
- **Tempo 4:** C executou 1 u.t. → vai pra espera (I/O). B sai da espera → vai pra **fila auxiliar** (preferência!).
- **Tempo 4-5:** B executa da fila auxiliar (tem preferência). Preempção por quantum.
- **Tempo 5-6:** C sai da espera → fila auxiliar. C executa 1 u.t.
- **Tempo 6-8:** Fila auxiliar vazia → volta pra fila principal. D executa 2 u.t. → **termina**.
- **Tempo 8-9:** E executa 1 u.t. → vai pra **espera** (I/O, espera 2 u.t.).

E assim por diante, com os processos I/O-bound recebendo preferência ao voltar de espera...

**Resultado final:**

- **Turnaround:** A=17, B=23, C=15, D=8, E=11
- **TMR:** 74/5 = **14,8**
- **TEP:** A=11, B=15, C=11, D=6, E=10
- **TME:** 53/5 = **10,6**

- Exemplo:
  *"Imagine 5 funcionários compartilhando 1 impressora. A e D só digitam (CPU). B e E digitam um pouco e precisam esperar o scanner (E/S). C faz um pouco de tudo. No Round Robin normal, B e E seriam prejudicados porque ficam parados esperando o scanner. No Circular Virtual, quando o scanner termina, eles ganham uma 'fila VIP' e são atendidos antes dos outros — assim compensam o tempo perdido."*

---

## 9. Tabela Comparativa dos Algoritmos

| Algoritmo | Tipo | Preemptivo? | Starvation? | Complexidade | Melhor para |
|---|---|---|---|---|---|
| **FIFO** | Fila simples | Não | Não | Baixa | Sistemas simples, batch |
| **SJF Não-Preemptivo** | Menor job primeiro | Não | Sim (jobs longos) | Média | Quando tempos são conhecidos |
| **SJF Preemptivo (SRTN)** | Menor tempo restante | Sim | Sim (jobs longos) | Média-Alta | Minimizar tempo médio de espera |
| **Round Robin** | Circular com quantum | Sim (por tempo) | Não | Média | Sistemas interativos, tempo compartilhado |
| **Prioridade** | Baseado em prioridade | Sim/Não | Sim (baixa prioridade) | Média | Aplicações com diferentes importâncias |
| **Circular + Prioridade** | Quantum + prioridade | Sim (tempo e prioridade) | Possível | Média-Alta | Balanceamento geral |
| **Loteria** | Sorteio aleatório | Sim | Improvável (mas possível) | Baixa | Flexibilidade e simplicidade |
| **Circular Virtual** | Round Robin + fila auxiliar | Sim (por tempo) | Não | Alta | Sistemas com muitos processos I/O-bound |

---

## 10. Glossário Rápido

| Termo | Significado |
|---|---|
| **Quantum** | Fatia de tempo que cada processo recebe para usar a CPU |
| **Preempção** | Interrupção forçada de um processo para dar lugar a outro |
| **Starvation** | Quando um processo nunca é executado por sempre perder a vez |
| **Throughput** | Quantidade de processos concluídos por unidade de tempo |
| **Turnaround** | Tempo total de vida do processo (da criação ao término) |
| **Context Switch** | Chaveamento de contexto — troca entre processos no processador |
| **CPU-bound** | Processo que usa muito processador e pouca E/S |
| **I/O-bound** | Processo que faz muita E/S e usa pouco processador |

---

**Referências do material original:** Tanenbaum (*Sistemas Operacionais Modernos*) e Machado & Maia (*Arquitetura de Sistemas Operacionais*).
