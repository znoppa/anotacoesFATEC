03/03/2026

-----------------


## 12. Fork, Wait e Funções POSIX

### 12.1 Funções de identificação (padrão POSIX)

| Função | Retorno |
|---|---|
| `getpid()` | ID do processo atual |
| `getppid()` | ID do processo pai (retorna 1 se o pai não existir mais — processo init) |
| `getpgrp()` | ID do grupo de processos (caso tenha filhos/threads) |

### 12.2 `fork()` — Criação de processo filho
- Função de **chamada de sistema** padrão POSIX.
- Cria um **processo filho idêntico ao pai** (mesmas variáveis, registros — cópia exata).
- Após o fork, pai e filho são executados **independentemente** — o que acontece em um **não afeta o outro**.
- Usa-se `if` para separar o que o pai executa e o que o filho executa (baseado no retorno do fork).
  - Exemplo:
    *"Fork é como uma célula se dividindo: a célula filha nasce idêntica à mãe, com o mesmo DNA. Mas a partir daquele momento, cada uma vive sua própria vida de forma independente."*

### 12.3 `wait()` — Esperar processo filho
- Permite que o **processo pai espere** o término de um processo filho.
- Devolve o status de retorno do processo filho que terminar.
  - Exemplo:
    *"O pai manda o filho comprar pão e fica esperando na porta (wait). Só depois que o filho volta é que o pai continua o que estava fazendo."*

### 12.4 — Exemplo de código
Adendos: Antes de iniciar, deve-se ir para uma pasta criada fora da raiz;
`cd /home/labex/projeto`

Depois crie o nano
`nano codigo.c`

E digite o código:
```
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    int id;
    id = fork();

    if (id != 0) {
        printf("eu sou o pai e espero pelo filho %d\n", id);
        wait(0);
        printf("meu filho acabou de terminar vou terminar tambem\n");
    } else {
        printf("sou filho %d e espero 10 segundos\n", getpid());
        sleep(10);
        printf("ja esperou e vou embora\n");
    }

    exit(0);
}
```

Agora saia com Ctrl+X configure:
`gcc codigo.c -o codigo

Depois, execute:
`./codigo`

### 12.5 Compilação em C no Linux
```bash
gcc -v                        # Verifica versão do gcc
gcc codigo.c -o codigo        # Compila
./codigo                      # Executa

# Instalação do gcc:
rm /var/lib/dpkg/lock
apt-get update
apt-get install gcc
```

---



# Resumo Completo: Escalonamento – Política de Escalonamento

**Disciplina:** Sistemas Operacionais (ADS)
**Professor:** Sandro Roberto Armelin

[[PDFESCALONAMENTO.pdf]] - Material desta Aula

---

## 1. O que é Escalonamento?

Quando **2 ou mais processos** estão na fila de pronto, o SO precisa decidir **qual será executado primeiro**. Essa decisão é feita por **algoritmos de escalonamento**.

- Ocorre em Sistemas Operacionais **multiprogramados**.
- Múltiplos processos/threads **competem** pelo uso da CPU ao mesmo tempo.
- **Objetivo:** manter a CPU ocupada o máximo possível e balancear a utilização do processador entre os processos.
  - Exemplo:
    *"É como um juiz de uma competição de karaokê com um único microfone. Ele precisa decidir quem canta primeiro, por quanto tempo, e quando trocar de cantor — senão o microfone fica parado ou só uma pessoa canta a noite toda."*

---

## 2. Funções Básicas da Política de Escalonamento

- Manter o processador **ocupado** a maior parte do tempo.
- **Privilegiar** execução de aplicações críticas.
- Oferecer **tempo de resposta razoável** para o usuário.
- **Balancear** a utilização do processador entre os processos.
- **Maximizar throughput** (quantidade de processos concluídos por intervalo de tempo).
  - Exemplo:
    *"Se o juiz do karaokê deixa uma pessoa cantar 3 músicas seguidas e as outras 10 ficam esperando, o throughput é péssimo. O ideal é que todos cantem e ninguém espere tempo demais."*

---

## 3. Chaveamento de Processos (Context Switch)

Quando o escalonador troca o processo em execução, ocorre o **==chaveamento==**, que é ==custoso para o processador==. O processo envolve:

1. **Salvar** o estado atual do processo (registradores na tabela de processos).
2. **Salvar** o mapa de memória (bits de referência na tabela de páginas).
3. **Selecionar** outro processo.
4. **Carregar** o mapa de memória do novo processo.
5. **Chavear** informações de memória cache para memória principal.
6. **Iniciar** o novo processo.

- Exemplo:
  *"Imagine um cozinheiro que está fazendo uma receita e precisa trocar para outra. Ele precisa: anotar onde parou, guardar os ingredientes, pegar a nova receita, separar os novos ingredientes, organizar a bancada... Tudo isso leva tempo. Se ele trocar de receita a cada 10 segundos, vai passar mais tempo organizando do que cozinhando."*

---

## 4. Quando Escalonar?

O escalonador entra em ação quando:

1. **Um processo termina** sua execução.
2. **Um processo bloqueia** para E/S (esperando disco, rede, etc.).
3. **Uma interrupção de E/S ocorre** — um dispositivo terminou seu trabalho e o processo bloqueado volta para a fila de pronto. O escalonador decide se esse processo recém-pronto deve executar agora.

- Exemplo:
  *"No karaokê: o cantor terminou a música (processo terminou), o cantor esqueceu a letra e precisa procurar no celular (bloqueou para E/S), ou o cantor que estava procurando a letra achou e está pronto para voltar ao palco (interrupção de E/S)."*

---

## 5. Preemptivo vs. Não-Preemptivo

	Preempção é o ato de possibilidade entre interromper ou não um processo no meio da sua execução;

### Não-Preemptivo 
- O escalonador escolhe um processo e o deixa executar **até que ele mesmo termine ou se bloqueie voluntariamente**.
- O SO **não interrompe** o processo.
  - Exemplo:
    *"É como uma apresentação escolar: cada aluno sobe no palco e só desce quando termina. O professor não pode cortar a apresentação no meio."*

### Preemptivo
- O escalonador ==escolhe um processo== e define um **tempo máximo** de execução. Se o tempo acabar e o processo ainda estiver rodando, ele é **suspenso** e outro é escolhido.
  - Exemplo:
    *"Agora o professor tem um cronômetro: cada aluno tem 3 minutos. Acabou o tempo? Sai do palco, mesmo que não tenha terminado. Volta na próxima rodada."*

---

## 6. Critérios de Escalonamento - Importante 

Os SOs consideram diversas variáveis para gerenciar o escalonamento:

| Critério                       | Descrição                                                                                                                                                                                       |
| ------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Utilização do processador**  | Manter a CPU ocupada o maior tempo possível                                                                                                                                                     |
| **Throughput**                 | Quantidade de processos finalizados por intervalo de tempo - quantos processos eu realizei em 2 segundos por exemplo                                                                            |
| **Tempo de Processador (UCP)** | Tempo que o processo realmente passa em execução - quando um fica muito tempo, temos que entender o por que disso.                                                                              |
| **Tempo Turnaround**           | Tempo total desde a criação do processo até seu término (inclui espera). O SO tenta **minimizar** esse tempo; Qual o prazo de tempo que o processo existe no SO. (Duração de tempo na EXECUÇÃO) |
| **Tempo de Resposta**          | Diferença entre a requisição do usuário e o instante em que recebe a resposta                                                                                                                   |

---

## 7. Fórmulas Importantes

Antes de entrar nos algoritmos, é essencial entender as fórmulas usadas nos exemplos:

| Fórmula                               | Cálculo                                                |
| ------------------------------------- | ------------------------------------------------------ |
| **Turnaround (TR)**                   | Tempo da criação ao termino, considera-se a espera     |
| **Tempo Médio de Retorno (TMR)**      | Soma de todos os Turnarounds ÷ Quantidade de processos |
| **Tempo de Espera do Processo (TEP)** | Tempo final − Tempo de criação − Tempo de execução     |
| **Tempo Médio de Espera (TME)**       | Soma de todos os TEPs ÷ Quantidade de processos        |

- Exemplo:
  *"Se você entrou na fila do banco às 14h, foi atendido às 14h30 e ficou 10 minutos no caixa, saindo às 14h40: Turnaround = 40 min (14h40 − 14h00), Tempo de espera = 40 − 10 = 30 min."*

---

## 8. Algoritmos de Escalonamento

 - FIFO - First In First Out – FCFS– Primeiro a chegar primeiro a ser servido. -> Contudo, executar os processos com menos tempo de espera e depois os com um tempo mais longo, torna o processo mais efetivo.
 
- SJF Preemptivo e não preemptivo - Shortest-job-first– Menor trabalho primeiro. 

- Round-Robin – Circular – equivalente FIFO, ao ser executado processo tem uma fatia tempo (Quantum). 

- Prioridade – prioridade de execução, cada processo recebe uma prioridade, o maior tem vantagem(tempo não importa). 

- Circular por prioridade – escalonamento por tempo e prioridade (leva em consideração os dois). ]

- Loteria - escalonamento por sorteio – função Random. -> Basicamente da mais bilhetes para um processo que tem mais prioridade, mas mesmo assim um processo que tem 1 pode ser executado primeiro.

- Circular virtual – igual ao Round Robin, porem cria uma lista virtual para os estados I/O que tendem a atrasar o processamento pois ficam em espera.

### 8.1 FIFO (First In, First Out) / FCFS (First Come, First Served)

**Tipo:** Não-preemptivo.

**Como funciona:**
- O processo que **chega primeiro** à fila de pronto é o primeiro a ser executado.
- Utiliza uma **fila única** de processos prontos.
- O processo usa a CPU **pelo tempo que desejar** (até terminar ou ser bloqueado).
- Quando um processo bloqueado fica pronto novamente, volta para o **final da fila**.

**Vantagem:** Simples de entender e implementar. Justo no sentido de "quem chegou primeiro, é atendido primeiro".

**Desvantagem:** Processos curtos que chegam depois de processos longos ficam esperando muito tempo. Processos com dependência de E/S podem atrasar outros.

- Exemplo:
  *"É a fila do supermercado sem caixa preferencial: quem chegou primeiro passa primeiro. Se a pessoa da frente tem um carrinho cheio com 200 itens e você só quer comprar um chiclete, azar o seu — vai esperar."*

![[Exemplo FIFO.png]]
**Adendo: Os valores dos exemplos abaixo são diferentes dos exemplos da imagem.**
![[Exemplo FIFO2.png]]

#### Exemplo numérico (todos chegam no tempo 0):

![[Exemplo fifo3.png]]

| Processo | Tempo de Execução |
|---|---|
| A | 6 |
| B | 8 |
| C | 4 |

```
Linha do tempo:
|---A (6)---|------B (8)------|---C (4)---|
0           6                 14          18
```

- **Turnaround:** A=6, B=14, C=18
- **TMR:** (6+14+18)/3 = **12,66**
- **TEP:** A=0, B=6, C=14
- **TME:** (0+6+14)/3 = **6,67**

#### Exemplo com tempos de criação/chegada diferentes:
![[FIFO Tempo de Criacao.png]]
O B começa a execução por estar em tempo de criação 0, em 4 temos "A" sendo adicionado a fila, pois por ele ser não-preemptivo não podemos encerrar o B e iniciar o A. E assim por diante se desenrola os processos.

| Tempo Criação | Processo | Tempo Execução |
| ------------- | -------- | -------------- |
| 4             | A        | 6              |
| 0             | B        | 8              |
| 8             | C        | 4              |

```
Linha do tempo:
|------B (8)------|---A (6)---|---C (4)---|
0                 8           14         18
```
B chega primeiro (tempo 0), então é executado primeiro. A chega no tempo 4 mas B ainda está executando. C chega no tempo 8.

- **Turnaround:** A=10, B=8, C=10
- **TMR:** 28/3 = **9,33**
- **TEP:** A=4, B=0, C=6
- **TME:** 10/3 = **3,33**

- Exemplo:
  *"B chegou ao supermercado às 8h e tem uma compra grande (8 itens). A chegou às 8h04 com 6 itens. C chegou às 8h08 com 4 itens. Cada um espera o anterior terminar. Note que A esperou 4 minutos e C esperou 6 minutos."*

---

### 8.2 SJF Não-Preemptivo (Shortest Job First)

**Tipo:** Não-preemptivo.

**Como funciona:**
- Supõe que os **tempos de execução são conhecidos previamente**.
- Na fila de pronto, o escalonador sempre escolhe o processo com o **menor tempo de execução**.
- Uma vez que o processo começa a executar, **não é interrompido**.

**Vantagem:** Minimiza o tempo médio de espera em relação ao FIFO.

**Desvantagem:** Na prática, é difícil **saber antecipadamente** o tempo de execução. O SO faz estimativas baseadas em **análises estatísticas de execuções passadas**, mas para processos interativos isso é muito impreciso.

- Exemplo:
  *"É como o caixa do supermercado que olha pra fila e diz: 'Quem tem menos itens no carrinho passa primeiro!' Assim, quem só quer pagar uma água não fica preso atrás de quem está com o carrinho lotado."*

#### Exemplo numérico (todos chegam no tempo 0):

| Processo | Tempo Execução |
|---|---|
| A | 6 |
| B | 8 |
| C | 4 |

Ordem de execução (menor primeiro): **C → A → B**

```
|--C (4)--|---A (6)---|------B (8)------|
0        4          10                18
```

- **Turnaround:** C=4, A=10, B=18
- **TMR:** (4+10+18)/3 = **10,67**
- **TEP:** C=0, A=4, B=10
- **TME:** (0+4+10)/3 = **4,67**

Compare com o FIFO: TME caiu de **6,67** para **4,67**.

#### Exemplo com tempos de chegada diferentes:

| Processo | Tempo Execução | Tempo Chegada |
|---|---|---|
| A | 2 | 0 |
| B | 4 | 0 |
| C | 1 | 3 |
| D | 1 | 3 |
| E | 1 | 3 |

No tempo 0, apenas A e B estão disponíveis. A é menor (2), então executa primeiro. A termina no tempo 2, B começa. No tempo 3, C, D e E chegam mas B já está executando e **não é interrompido** (não-preemptivo). B termina no tempo 6, e então C, D, E são executados (todos com tempo 1).

```
|A(2)|---B (4)---|C|D|E|
0    2          6 7 8 9
```

- **TMR:** (2+6+4+5+6)/5 = **4,6**
- **TME:** (0+2+3+4+5)/5 = **2,8**

- Exemplo:
  *"No caixa do supermercado, quando A (2 itens) e B (4 itens) chegam juntos, A vai primeiro. Mas quando B já está sendo atendido e C, D e E chegam com 1 item cada, eles precisam esperar B terminar — porque o caixa não pode parar no meio do atendimento."*

# acabou neste exemplo - continuação na [[Sistemas Operacionais/Aula 004|Aula 004]]
---
