	24/03/2026

# Resumo Completo: Gerenciamento de Memória

**Disciplina:** Sistemas Operacionais (ADS)
**Professor:** Sandro Roberto Armelin
Materiais:
PDF: [[pdf memoria ram.PDF]]
EXERCICIO: Não da pra adicionar o link, mas está em materiais

---

## 1. Memória Principal (RAM)

- Uma das maiores preocupações no desenvolvimento de SOs.
- Recurso **importante, escasso e de alto custo**.
- O processador **só executa instruções que estão na RAM** — tudo que precisa ser executado precisa estar lá.
- Todo programador deseja memória: **grande, rápida e não volátil**.
- Em SOs **monoprogramáveis**, o gerenciamento é simples.
- Em SOs **multiprogramáveis**, torna-se **crítico** — é preciso maximizar o número de usuários e aplicações usando a memória de forma eficiente.

- Exemplo:
  *"A RAM é como uma bancada de trabalho: o carpinteiro só consegue trabalhar com o que está sobre ela. O que está no armário (disco) precisa ser trazido para a bancada antes de ser usado. Uma bancada pequena com muitos projetos ao mesmo tempo = problema."*

---

## 2. Funções da Gerência de Memória

O SO é responsável por:

- **Controlar** o uso da memória (quais partes estão em uso e quais estão livres).
- **Alocar** memória aos processos quando precisam.
- **Liberar** memória quando os processos terminam.
- **Gerenciar a troca** de processos entre memória principal e disco.
- **Manter o maior número de processos** residentes na RAM ao mesmo tempo.
- **Mesmo ==sem espaço livre**==, permitir que novos processos sejam aceitos → isso é feito através do **Swapping** e da **Memória Virtual**.

- Exemplo:
  *"O gerente da bancada controla o que está sobre ela: o que chegou, o que precisa de espaço, o que pode guardar no armário temporariamente, e o que vai lá direto sem precisar ocupar espaço físico (memória virtual)."*

---

## 3. Quando a Memória Não é Suficiente?

Na prática, a RAM frequentemente não é grande o suficiente para todos os processos. Dois métodos resolvem isso:

| Técnica | Descrição |
|---|---|
| **Swapping** | Troca processos entre RAM e disco. Processos ociosos são temporariamente enviados ao disco |
| **Memória Virtual** | Permite que programas rodem mesmo estando **apenas parcialmente** carregados na RAM |

- Exemplo:
  *"Swapping: a bancada está cheia, então você guarda o projeto que está parado no armário para abrir espaço para um novo. Memória Virtual: você nem precisa ter todo o projeto na bancada — só a parte que está usando agora."*

---

## 4. Esquemas de Gerenciamento de Memória

### 4.1 Alocação Contígua Simples

- Implementada nos **primeiros SOs**.
- Memória dividida em apenas **duas áreas**: uma para o SO e outra para o programa.
- O programador precisava se preocupar em **não ultrapassar** o espaço disponível.
- **Problema:** qualquer usuário poderia acessar a área do SO → solução: **registrador de proteção** que delimita as áreas.
- Se o programa não preenchesse toda a memória, o espaço restante ficava **desperdiçado**.
- Programas estavam **limitados ao tamanho da RAM**.

![[alocacaocontiguasimples.png]]
- Exemplo:
  *"Como um apartamento onde metade é reservada ao porteiro (SO) e a outra metade ao morador. Se o morador só usar 1 quarto, o restante fica vazio sem ninguém poder usar."*

#### Técnica de Overlay (solução para alocação contígua)
- Divide o programa em **módulos independentes** que usam a **mesma área de memória**.
- O programador define quais módulos compartilham o espaço.
- Exemplo: Programa com Módulo Principal (3KB) + Módulo Cadastro (4KB) + Módulo Impressão (4KB). A área de overlay (4KB) é compartilhada pelos dois módulos de acordo com a necessidade.
- **Desvantagem:** A definição das áreas é responsabilidade do **programador**, e ainda pode haver espaço não utilizado.
![[tecnicaoverlay.png]]
- Exemplo:
  *"É como um quarto de hóspedes: quando o parente A visita, ele usa o quarto. Quando vai embora e vem o parente B, o mesmo quarto é dele. O quarto é compartilhado, mas nunca pelos dois ao mesmo tempo."*

---

### 4.2 Alocação Particionada Estática

- Memória dividida em **pedaços de tamanho fixo** (partições), definidos na **inicialização** do sistema.
- Vários programas podem ficar na memória ao mesmo tempo.
- Cada programa é carregado em uma partição **compatível com seu tamanho**.

![[alocacaoparticionadaestatica.png]]
- **Problema: Fragmentação Interna** — os programas raramente preenchem exatamente a partição, desperdiçando espaço dentro dela.

- Exemplo:
  *"É como vagas de estacionamento com tamanhofixo: se todas as vagas têm 5 metros e seu carro tem 3 metros, sobram 2 metros inutilizados em cada vaga. Um carro de 6 metros simplesmente não cabe."*

---

### 4.3 Alocação Particionada Dinâmica

- Elimina o conceito de partições fixas.
- Cada programa ocupa **exatamente o espaço que precisa**.
- **Não há fragmentação interna**.

![[alocacaoparticionadadinamica.png]]

- **Novo problema: Fragmentação Externa** — quando programas terminam, deixam "buracos" na memória que podem ser pequenos demais para novos processos.

- Exemplo:
  *"É como um estacionamento onde cada carro ocupa exatamente o espaço do seu tamanho. Ótimo no início. Mas depois de vários carros entrarem e saírem, sobram espaços vazios espalhados, e um caminhão não consegue estacionar mesmo que o espaço total seja suficiente."*

#### Soluções para Fragmentação Externa:

1. **Reunir espaços adjacentes** — quando um programa termina, o espaço livre é unido ao espaço livre vizinho.
2. **Realocação (Compactação)** — move todos os programas para eliminar os buracos, criando um único bloco livre contíguo.
   - Desvantagem: **custo alto** — mover programas na memória exige tempo e processamento.

- Exemplo:
  *"Solução 1: se duas mesas vazias estão lado a lado, juntar as duas em uma mesa grande. Solução 2: reorganizar toda a sala empurrando todos para um lado e criando um espaço livre grande no outro lado — funciona, mas dá muito trabalho."*

---

## 5. Estratégias de Alocação de Partição

Quando há múltiplos "buracos" disponíveis, qual escolher? O SO usa estas estratégias:

### 5.1 First Fit (Primeiro Encaixe)
- Percorre a lista e escolhe o **primeiro espaço onde o programa cabe**.
- Lista ordenada por **endereço**.
- **Vantagem:** Mais rápido.
- **Desvantagem:** Pode deixar fragmentos no início da memória.

- Exemplo:
  *"Entrar num cinema e sentar no primeiro assento vazio que aparecer, da frente para trás."*

### 5.2 Best Fit (Melhor Encaixe)
- Percorre toda a lista e escolha o espaço que deixa o **menor fragmento restante**.
- Lista ordenada por **tamanho**.
- **Vantagem:** Aproveita melhor os espaços.
- **Desvantagem:** Deixa fragmentos muito **pequenos e inutilizáveis** — piora a fragmentação no longo prazo.

- Exemplo:
  *"Escolher a mala de viagem que melhor se encaixa na mochila — não sobra quase nada. Mas o probleminha é que o espaço restante é tão pequenininho que não serve pra mais nada."*

### 5.3 Worst Fit (Pior Encaixe)
- Escolhe sempre o **maior espaço disponível**.
- **Vantagem:** O espaço restante ainda é **grande o suficiente** para outros programas — reduz a fragmentação.
- **Desvantagem:** Desperdiça espaços grandes.

- Exemplo:
  *"Sempre usar a maior mala disponível. Sobra muito espaço, mas pelo menos o que sobra ainda é útil para colocar mais coisas depois."*

---

## 6. Swapping

- Técnica para resolver o problema de **memória insuficiente**.
- Nos esquemas anteriores, o processo ficava na memória **durante toda** sua execução (mesmo esperando por E/S).
- **Swapping:** quando a memória está cheia, o SO escolhe um processo residente e o envia para o disco (**swap out**). Depois, quando necessário, ele volta para a RAM (**swap in**).

```
RAM:                           Disco (Arquivo de Swap):
┌──────────────┐               ┌──────────────┐
│ SO              │  ←swap out─  │ Processo B     │
│ Processo A      │  ─swap in──→ │ Processo H     │
│ Processo G      │               └─────────────┘
└──────────────┘
```

- O algoritmo de escolha deve priorizar processos com **menor chance de execução** para minimizar swappings desnecessários.

- Exemplo:
  *"A bancada está cheia. O carpinteiro pega o projeto que está parado há mais tempo (menor chance de uso imediato) e guarda no armário (disco). Quando precisar novamente, traz de volta."*

- Fun Fact: O Windows geralmente reserva 3x o valor de sua memória física no disco.
---

## 7. Memória Virtual

### 7.1 Conceito
- Técnica **sofisticada** que combina RAM e disco para criar a **ilusão de uma memória maior** do que a física.
- Programas são **divididos em partes** pelo SO — apenas uma parte precisa estar na RAM para ser executada.
- Um programa pode referenciar endereços que estão **fora dos limites da RAM**.
- Funciona com **endereços virtuais** (usados pelo programa) que são mapeados para **endereços reais** (na RAM).

- Exemplo:
  *"Como ler um livro enorme: você não precisa ter todo o livro na mesa. Só a página que está lendo precisa estar aberta. As outras estão no livro (disco), e quando virar a página, o SO traz a próxima."*

### 7.2 Mapeamento (MMU)
- O processador só trabalha com endereços **reais (RAM)**.
- A tradução de **endereço virtual → endereço real** é feita pelo hardware **MMU (Memory Management Unit)** em conjunto com o SO.

```
Programa usa:          MMU traduz:          RAM acessa:
Endereço Virtual  →  [Tabela de Páginas]  →  Endereço Real
```

- Exemplo:
  *"É como um GPS: você digita o nome do lugar (endereço virtual) e o GPS converte para as coordenadas reais (endereço físico). Você não precisa saber a latitude e longitude — o sistema resolve por você."*

---

## 8. Memória Virtual por Paginação

### 8.1 Conceito
- Tanto o **espaço virtual** quanto o **espaço real** são divididos em blocos de **mesmo tamanho** chamados de **páginas**.
- **Páginas virtuais** → espaço virtual do programa.
- **Frames (páginas reais)** → espaço físico da RAM.

```
Memória Virtual:          Tabela de Páginas:       RAM (Frames):
┌──────────────┐          ┌──────────────────┐     ┌──────────┐
│ Página virt 0│ ─────────│ ETP 0 → Frame 2  │────→│ Frame 0  │
│ Página virt 1│ ─────────│ ETP 1 → Disco    │  ↗  │ Frame 1  │
│ Página virt 2│ ─────────│ ETP 2 → Frame 0  │─╯   │ Frame 2  │
│ Página virt 3│          │ ETP 3 → Disco    │      └──────────┘
└──────────────┘          └──────────────────┘
```

### 8.2 Bit de Validade
- Cada entrada na tabela de páginas (ETP) tem um **bit de validade**:
  - **1** → página está na RAM ✅
  - **0** → página está no disco → ocorre **Page Fault** ⚠️

### 8.3 Page Fault (Falta de Página)
- Ocorre quando o programa referencia uma página que **não está na RAM**.
- O SO precisa:
  1. Escolher um frame para **liberar** (algoritmo de substituição de página).
  2. **Carregar** a página do disco para a RAM (**Page In**).
  3. Atualizar a tabela de páginas.
  4. O processo volta do estado de **espera** para **execução**.

- Exemplo:
  *"Você está lendo o livro e vira para uma página que está marcada como 'está no armário' (bit 0 = Page Fault). Você precisa: ir ao armário, pegar a página (Page In), talvez devolver outra para abrir espaço, e continuar lendo."*

### 8.4 Thrashing
- Ocorre quando há um número **excessivo de Page Faults**.
- O SO passa mais tempo trocando páginas do que executando processos.
- Causa inúmeras operações de E/S, **degradando severamente** o desempenho.

- Exemplo:
  *"Você está tão ocupado indo e vindo do armário buscar páginas que nunca consegue realmente ler o livro. O 'trabalho de organização' consume mais tempo do que a leitura em si."*

### 8.5 Working Set
- Conceito que define o **conjunto de páginas** que um processo usa com frequência em um período de tempo.
- O SO tenta manter o Working Set na RAM para **minimizar Page Faults**.
- No **início da execução** de um programa, o número de Page Faults é alto. Com o tempo, **diminui** conforme as páginas mais usadas são carregadas.
- Objetivo: **minimizar o Thrashing**.

- Exemplo:
  *"Um médico que atende sempre os mesmos tipos de casos tem os mesmos 5 livros de referência sempre sobre a mesa (Working Set). Raramente precisa ir ao arquivo. No primeiro dia de trabalho, ele vai ao arquivo toda hora — depois de um tempo, já sabe o que precisa ter na mesa."*

---

## 9. Algoritmos de Substituição de Páginas

Quando ocorre um Page Fault e não há frames livres, o SO precisa **escolher qual página remover**. O objetivo é sempre remover a página com **menor chance de ser usada no futuro próximo**.

> ⚠️ **Atenção:** Quanto mais complexo o algoritmo, maior o **overhead** para o SO processar.

---

### 9.1 FIFO (First In, First Out)

**Como funciona:**
- Remove a página que está há **mais tempo** na memória.
- Implementado com uma **fila** — a primeira a entrar é a primeira a sair.
- **Baixo custo**, fácil de implementar.
- **Desvantagem:** pode remover páginas que ainda são muito usadas só porque estão há mais tempo.

```
Fila: [Mais antiga → ... → Mais recente]
       ↑ Remove daqui              ↑ Entra aqui
```
![[Pasted image 20260324212100.png]]
- Exemplo:
  *"É como uma geladeira onde você sempre joga fora o item mais antigo para abrir espaço. Problema: talvez o item mais antigo seja o leite que você usa todo dia, e o novo que entrou seja o molho de soja que fica meses sem usar."*

---

### 9.2 Algoritmo Ótimo

**Como funciona:**
- Remove a página que **não será mais usada no futuro**, ou que levará **mais tempo** para ser usada novamente.
- **Impossível de implementar** na prática — exigiria conhecer o futuro.
- Usado apenas como **modelo comparativo** em simulações para medir a eficiência dos demais algoritmos.
![[Pasted image 20260324212116.png]]
- Exemplo:
  *"É como um oráculo que sabe exatamente o que você vai precisar amanhã. Ele joga fora exatamente o que você não vai usar por mais tempo. Perfeito na teoria, impossível na vida real."*

---

### 9.3 Aleatório

**Como funciona:**
- Seleciona uma página por **sorteio aleatório**.
- Nenhum critério de seleção.
- **Baixo consumo de recursos**, mas **baixa eficiência**.

- Exemplo:
  *"Fechar os olhos e apontar aleatoriamente para um item na geladeira para jogar fora. Simples, mas pode jogar fora exatamente o que você mais precisa."*

---
