	24/02/2026

# Processos
---

## 1. Concorrência e Tipos de Sistemas

- **Monoprogramáveis/Monotarefa:** executam apenas um programa por vez, com processador, memória e periféricos dedicados exclusivamente a ele. Qualquer outra aplicação precisa aguardar o término do programa corrente.
  - Exemplo:
    *"Na padaria, cada pessoa é atendida completamente por vez. O padeiro só começa a atender o próximo cliente quando terminar tudo com o atual — mesmo que o cliente esteja indeciso."*

- **Multiprogramáveis/Multitarefa:** compartilham recursos entre diversas aplicações. Enquanto um programa espera por um evento (como E/S), outros podem usar o processador. O SO gerencia o acesso concorrente.
  - Exemplo:
    *"Na padaria, uma vez que uma pessoa pega um pão, ela vai ao final da fila, caso precise de mais. Se não precisar, vai embora. Assim o padeiro nunca fica parado esperando alguém se decidir."*

---

## 2. Processos

### 2.1 Definição
- Conceito **fundamental** dos Sistemas Operacionais.
- É a **abstração de um programa em execução**.
- Base para sistemas multiprogramáveis.
- O SO associa cada programa a um processo e gerencia sua execução.
- O usuário tem a **impressão** de possuir o processador inteiro, mas na verdade os recursos estão sendo compartilhados.
  - Exemplo:
    *"Imagine que você está num computador público. Parece que o computador é só seu, mas na verdade o SO está revezando entre o seu programa e vários outros em segundo plano — como um mágico que faz malabarismo tão rápido que parece estar segurando todas as bolas ao mesmo tempo."*

### 2.2 Pseudoparalelismo
- Em uma **única CPU**, os processos não rodam de verdade ao mesmo tempo — o processador **chaveia** rapidamente entre eles (taxa não uniforme).
- Isso cria a **impressão de paralelismo** (pseudoparalelismo).
- Em processadores multinúcleo, cada núcleo executa **um processo por vez**.
  - Exemplo:
    *"Um professor corrigindo provas sozinho: ele corrige um pouco da prova A, depois um pouco da B, depois da C... Para os alunos, parece que todas foram corrigidas ao mesmo tempo, mas ele só fez uma de cada vez, alternando rápido."*

### 2.3 Mesmo programa executado 2x = 2 processos
- Abrir o mesmo aplicativo duas vezes gera **dois processos distintos**.
- O SO pode compartilhar o mesmo código na memória, mas são **processos independentes**.
  - Exemplo:
    *"Abrir duas janelas do Word é como duas pessoas lendo o mesmo livro da biblioteca: o livro (código) é um só, mas cada pessoa (processo) está em uma página diferente, fazendo anotações diferentes."*

### 2.4 Exemplo do Servidor Web
- Solicitações de páginas chegam de toda parte.
- Se a página está em cache, é enviada de volta. Se não, uma requisição de disco é feita.
- Enquanto o disco busca a página (operação lenta para a CPU), **muitas outras requisições podem chegar**.
- É necessário uma forma de **controlar essa simultaneidade** — aí entram os processos e threads.
  - Exemplo:
    *"É como um garçom que anota o pedido da mesa 1 e manda para a cozinha. Enquanto a cozinha prepara, ele não fica parado — vai anotar o pedido da mesa 2, da mesa 3... Quando o prato da mesa 1 fica pronto, ele entrega."*

---

## 3. Criação de Processos

Processos são criados de 4 formas:

1. **Inicialização do SO** — vários processos são criados automaticamente (foreground e background).
2. **Por outro processo em execução** — um processo faz chamadas de sistema (`fork()`) para criar novos processos.
3. **Requisição do usuário** — ao abrir um aplicativo.
4. **Tarefa em lote (batch job)** — tarefas programadas.

---

## 4. Processos Foreground e Background

| Tipo | Descrição |
|---|---|
| **Foreground** (1º plano) | Interagem diretamente com o usuário (entrada/saída pelo terminal) |
| **Background** (2º plano) | Não estão associados a usuários em particular, rodam "escondidos" |

- Exemplo de Background: *um processo que fica esperando e-mails chegarem — fica inativo a maior parte do tempo, mas acorda quando uma mensagem chega.*
![[SistemasOperacionaisAula002_1.png]]

---

## 5. Término de Processos

| Tipo | Descrição |
|---|---|
| **Saída normal** (voluntária) | Processo terminou seu trabalho com sucesso |
| **Saída por erro** (voluntária) | Processo descobre um erro (ex: comando inexistente) |
| **Erro fatal** (involuntário) | Erro no programa (ex: divisão por zero, referência a memória inexistente) |
| **Cancelamento por outro processo** (involuntário) | Outro processo mata ele (ex: `kill` no Linux) |


---

## 6. Estados de um Processo

| Estado | Descrição |
|---|---|
| **Execução** | Usando a CPU naquele momento |
| **Pronto** | Parado temporariamente para dar lugar a outro processo; aguarda escalonamento |
| **Bloqueado** | Não pode executar pois depende de evento externo (E/S). Mesmo com CPU livre, **não consegue rodar** |

- Exemplo:
  *"Execução: você está sendo atendido no banco. Pronto: você está na fila, esperando sua vez — está pronto para ser atendido, só falta chamar. Bloqueado: você foi ao banco mas esqueceu o RG em casa — mesmo que não tenha fila, você NÃO pode ser atendido até buscar o documento."


### 6.1 Transições entre Estados

- **T1 — Execução → Bloqueado:** o processo precisa esperar por uma entrada/saída (E/S).
  - *"Você está sendo atendido, mas precisa de um documento que está no cartório. Tem que esperar."*
- **T2 — Execução → Pronto:** o escalonador decide que o processo já usou CPU suficiente e dá a vez a outro.
  - *"O atendente diz: 'Você já ficou tempo demais, vá para o final da fila para os outros serem atendidos também.'"*
- **T3 — Pronto → Execução:** o escalonador seleciona esse processo da fila para executar.
  - *"Sua vez chegou na fila, agora você será atendido."*
- **T4 — Bloqueado → Pronto:** o evento externo que o processo esperava aconteceu; ele volta para a fila de prontos.
  - *"Seu documento chegou do cartório! Agora você pode voltar para a fila e esperar sua vez."
![[SistemasOperacionaisAula002_2.png]]

---

## 7. Status de Processos no Linux

| Status | Descrição |
|---|---|
| **Running** | Processo ativo, executando |
| **Waiting** | Esperando algum evento do sistema (ex: E/S em disco). Em falha, pode configurar **deadlock** |
| **Suspended** | Suspenso/parado pelo usuário |
| **Zombie** | Finalizou a execução mas ainda consta na tabela de processos porque o processo pai ainda não foi notificado do término |

- Exemplo:
  *"Running: funcionário trabalhando. Waiting: funcionário esperando uma peça chegar do fornecedor. Suspended: funcionário que o chefe mandou pausar. Zombie: funcionário que já foi embora, mas o crachá dele ainda está no sistema porque ninguém deu baixa."*

---

## 8. Tabela de Processos (PCB – Process Control Blocks)

Principal estrutura que viabiliza a implementação de processos. Armazena para cada processo:

- **Estado** do processo
- **ID** (PID)
- **Contador de programa** — quantas vezes foi executado pelo processador
- **Ponteiro da pilha**
- **Alocação de memória**
- **Estado dos arquivos abertos**

- Exemplo:
  *"É como a ficha cadastral de cada paciente no hospital: nome, número do prontuário, qual sala está, quais exames já fez, quais medicamentos está tomando. Sem essa ficha, o hospital não conseguiria gerenciar ninguém."*

---

## 9. Processos CPU-Bound e I/O-Bound

| Tipo | Descrição |
|---|---|
| **CPU-Bound** | Passa a maior parte do tempo em **execução** (uso intensivo de processador), poucas operações de E/S |
| **I/O-Bound** | Passa a maior parte do tempo em **espera**, pois realiza muitas operações de entrada/saída |

- Exemplo:
  *"CPU-Bound: um matemático que fica horas fazendo cálculos complexos na cabeça sem parar. I/O-Bound: um secretário que passa o dia inteiro esperando documentos chegarem pelo correio para poder trabalhar."*

---

## 10. Gerenciamento no Windows e Linux

### Windows — Gerenciador de Tarefas
- **Processos:** gerenciar, expandir processos vinculados, criar arquivo de despejo (.dmp), ir para detalhes, exibir local do arquivo.
- **Desempenho:** monitoramento de CPU, memória, disco, GPU.
- **Outros:** histórico de aplicativos, programas na inicialização, usuários conectados, detalhes de processos/threads, serviços.

**Diferença entre termos no Windows:**
| Termo | Significado |
|---|---|
| **Aplicativo** | Programa com interação do usuário na área de trabalho |
| **Processo** | Instância de um executável (1 aplicação = vários processos) |
| **Serviço** | Processo em background, sem interação com a área de trabalho |

### Linux — Comandos principais

| Comando                    | Função                                                        |
| -------------------------- | ------------------------------------------------------------- |
| `top`                      | Monitoramento em tempo real dos processos                     |
| `ps aux`                   | Lista processos com informações detalhadas                    |
| `ps aux \| grep nome`      | Filtra processos por nome                                     |
| `kill PID`                 | Encerra um processo (usar -9 após o 'kill' para ser certeiro) |
| `kill -STOP PID`           | Pausa um processo                                             |
| `kill -CONT PID`           | Retoma um processo pausado                                    |
| `renice PRIORIDADE -p PID` | Altera a prioridade de um processo                            |
| `pwd`                      | Diretório atual                                               |
| `ls`                       | Listou os diretórios                                          |
| `cd nome_diretorio`        | Vai para o diretório indicado                                 |
| `cat > nome_arquivo_txt`   | Cria um arquivo de texto, use Ctrl + D para parar             |
| `tail -f nome_arquivo_txt` | Exibe as últimas partes (10 linhas) de um .txt                |

**Prioridades no Linux:**
- Variam de **-20** (prioridade mais alta) a **+19** (mais baixa)
- Padrão para processos de usuário: **0**
- Exemplo: `renice -19 -p 1295` → define prioridade altíssima para o processo 1295

**Informações do comando `top`:**
- **VIRT:** tamanho virtual total do processo (toda memória que está utilizando)
- **SHR:** quanto do VIRT é compartilhável (bibliotecas, memória compartilhada)
- **RES:** memória física real consumida (equivalente a %MEM)

- Exemplo:
  *"Prioridade é como o grau de urgência num pronto-socorro. -20 é o paciente em estado crítico (atendido primeiro). +19 é quem foi só medir pressão (pode esperar). 0 é o caso padrão."*

---

## 11. Threads

### 11.1 Definição
- **"Mini processos"** — processos dentro de um processo.
- Inicialmente, cada processo tem um espaço de endereçamento e **uma única thread**.
- Threads compartilham o **mesmo espaço de endereçamento** do processo pai (variáveis globais, memória).
- Criação de threads é **~100x mais rápida** que criar um processo, pois não têm recursos próprios associados.
- **Não há proteção entre threads** — qualquer thread pode acessar qualquer endereço de memória do processo.

- Exemplo:
  *"Um processo é como uma casa. Threads são as pessoas morando na mesma casa — compartilham cozinha, sala e banheiro (memória). Processos diferentes são casas separadas — cada uma com seus próprios cômodos, sem acesso à casa do vizinho."*

### 11.2 Exemplo clássico: Processador de Texto com 3 Threads

| Thread | Função |
|---|---|
| **Thread 1** | Interação com o usuário (teclado e mouse) |
| **Thread 2** | Formatação do texto em segundo plano |
| **Thread 3** | Salvamento automático periódico |

- **Por que não 3 processos?** Porque todos precisam trabalhar sobre o **mesmo documento** (mesma memória). Processos separados teriam espaços de endereçamento diferentes e não conseguiriam compartilhar os dados facilmente.
  - Exemplo:
    *"É como 3 cozinheiros preparando o mesmo prato: um corta os legumes, outro mexe a panela, outro tempera. Todos trabalham na mesma cozinha (memória). Se cada um estivesse numa cozinha diferente (processos), não conseguiriam montar o prato junto."*

### 11.3 Outro exemplo: Planilha Eletrônica
- O usuário digita dados em células que interferem em outras (fórmulas).
- Uma thread em segundo plano **recalcula** as células automaticamente enquanto o usuário continua digitando.

### 11.4 Estados de uma Thread
Mesmo conceito dos processos:

| Estado | Descrição |
|---|---|
| **Execução** | Usando a CPU naquele momento |
| **Pronto** | Aguardando escalonamento |
| **Bloqueado** | Esperando evento externo |

### 11.5 Processos vs. Threads — Comparação visual
- **Figura (a):** 3 processos tradicionais → cada um com sua thread e **espaço de endereçamento próprio**.
- **Figura (b):** 1 processo com 3 threads → todas **compartilham o mesmo espaço de endereçamento**.

---


## 13. Referências Bibliográficas

- **TANENBAUM, Andrew S.** *Sistemas Operacionais Modernos.* 2ª Ed. Pearson, 2005.
- **MACHADO, Francis B.; MAIA, Luiz Paulo.** *Arquitetura de Sistemas Operacionais.* 4ª Ed. LTC, 1996.