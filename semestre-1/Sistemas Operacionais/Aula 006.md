31/03/2026

### 9.4 LFU (Least Frequently Used — Menos Frequentemente Usada)

**Como funciona:**
- Remove a página que foi **menos referenciada** (menos usada).
- Mantém um **contador** de referências para cada página.
- A página com o **menor contador** é removida.
- Objetivo: manter na RAM as páginas mais utilizadas.

- Exemplo:
  *"Na geladeira, você tem um caderninho anotando quantas vezes usou cada item. Quando precisar de espaço, joga fora o que foi menos acessado. O molho de soja que foi aberto só 1 vez sai primeiro; o leite acessado 30 vezes fica."*

---

### 9.5 LRU (Least Recently Used — Menos Recentemente Usada)

**Como funciona:**
- Remove a página que está há **mais tempo sem ser referenciada**.
- Cada página tem associado o **momento do seu último acesso**.
- Pode ser implementado com **lista encadeada** ordenada pelo momento do último acesso.

```
Lista LRU (da menos recente para a mais recente):
[Página D (acessada há 10s)] → [Página B (há 5s)] → [Página A (há 1s)]
       ↑ Remove esta                                        ↑ Mais recente
```

- **Diferença do LFU:** LRU considera **quando** foi a última vez que foi usada. LFU considera **quantas vezes** foi usada.

- Exemplo:
  *"Geladeira com etiquetas de data do último uso. Joga fora o item que não foi tocado há mais tempo. O leite que você não abre faz 3 semanas sai antes do ketchup que você abriu ontem, mesmo que o ketchup tenha sido aberto poucas vezes no total."*

---

### 9.6 Prioridade

**Como funciona:**
- Remove a página pertencente ao **processo de menor prioridade**.
- Se houver empate de prioridade, remove o **frame mais próximo** (primeiro da lista).
- Princípio: **quem tem mais prioridade tem mais chance de permanecer na RAM**.

- Exemplo:
  *"No hospital com espaço limitado de leitos: se precisar liberar um leito, o paciente com menor urgência (menor prioridade) é transferido primeiro para liberar espaço para um caso mais grave."*

---

### 9.7 FIFO Circular (Clock — Segunda Chance)

**Como funciona:**
- Baseado no FIFO, mas com uma **segunda chance**.
- Páginas estão em uma **estrutura de lista circular** (como um relógio).
- Cada página possui um **bit de referência (R)**:
  - **R = 0** → página não foi usada recentemente
  - **R = 1** → página foi usada recentemente
- Quando precisa substituir uma página, o ponteiro percorre o "relógio":
  - Se **R = 0** → remove essa página.
  - Se **R = 1** → dá uma segunda chance: muda R para 0 e avança o ponteiro (como se a página tivesse acabado de entrar na fila).
  - Se todos tiverem R = 1 → dá uma volta completa, todos viram R = 0, e remove a primeira.
- Quando uma página é **referenciada sem Page Fault**, seu R é setado para **1**.

```
        R=1          R=0
    ┌── Pág A ──┐ ← ponteiro aqui: R=1? Dá segunda chance, muda para R=0, avança.
    │           ↓
  Pág D(R=0)  Pág B(R=0) ← próxima, R=0? Remove!
    ↑           │
    └── Pág C ──┘
         R=1
```

- Exemplo:
  *"É como um fiscal de estacionamento com lista circular. Ele marca um carro (R=0). Se quando voltar o carro ainda estiver lá e sem novo uso (R ainda 0), multa e remove. Se o carro foi usado (R=1), ele dá uma segunda chance: apaga a marca (R=0) e passa para o próximo. Na segunda passagem, todos sem uso são removidos."*

---

## 10. Tabela Comparativa dos Algoritmos de Substituição

| Algoritmo | Critério de Remoção | Implementação | Eficiência | Custo |
|---|---|---|---|---|
| **FIFO** | Página mais antiga na memória | Fácil (fila) | Baixa | Baixo |
| **Ótimo** | Página usada mais longe no futuro | Impossível na prática | Máxima | — |
| **Aleatório** | Sorteio | Fácil | Baixa | Muito baixo |
| **LFU** | Página menos referenciada (contador) | Média (contadores) | Média | Médio |
| **LRU** | Página há mais tempo sem uso | Complexa (lista ordenada) | Alta | Alto |
| **Prioridade** | Processo de menor prioridade | Média | Média | Médio |
| **FIFO Clock** | FIFO + segunda chance (bit R) | Média (lista circular) | Média-Alta | Médio |

---

## 11. Glossário Rápido

| Termo | Significado |
|---|---|
| **Fragmentação Interna** | Espaço desperdiçado **dentro** da partição (partição maior que o programa) |
| **Fragmentação Externa** | Espaço livre total suficiente, mas **espalhado** em pedaços pequenos demais |
| **Swapping** | Troca de processos entre RAM e disco para liberar espaço |
| **Memória Virtual** | Ilusão de memória maior combinando RAM + disco |
| **Page Fault** | Referência a uma página que não está na RAM — precisa ser carregada do disco |
| **Page In** | Trazer página do disco para a RAM |
| **Page Out** | Enviar página da RAM para o disco |
| **MMU** | Hardware responsável por traduzir endereços virtuais em reais |
| **Working Set** | Conjunto de páginas mais usadas por um processo em determinado período |
| **Thrashing** | Excesso de Page Faults degradando o desempenho do sistema |
| **Overhead** | Custo/esforço extra gerado pelo próprio mecanismo de gerenciamento |
| **Overlay** | Técnica de dividir programa em módulos que compartilham a mesma área de memória |

---

**Referências:** Tanenbaum (*Sistemas Operacionais Modernos*) e Machado & Maia (*Arquitetura de Sistemas Operacionais*).