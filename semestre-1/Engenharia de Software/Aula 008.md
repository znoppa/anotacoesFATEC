27/04/2026
# 📅 Engenharia de Software I — Modelos Ágeis

> 👩‍🏫 **Profa. Ana Célia Portes**
> 📖 **Aula:** Agilidade • Modelos Ágeis • SCRUM

---

## 1. Agilidade

**Agilidade** é a possibilidade de responder rapidamente às constantes mudanças de:

- **Requisitos** do software
- **Tecnologias**
- **Pessoas** que trabalham nos projetos

---

## 2. Modelos Ágeis

Os modelos ágeis consistem em uma **evolução da Engenharia de Software tradicional**, para atender exigências de:

- **Flexibilidade**, pois é difícil prever, no início de um projeto, todos os requisitos do software que será desenvolvido.
- **Maior produtividade** e **redução dos prazos** de desenvolvimento.

### 📜 Origem

- Movimento iniciado na indústria de software no **final da década de 90**, em um cenário de descontentamento com as formas usadas para desenvolver projetos de software.
- Amplamente adotados a partir da assinatura do **"Manifesto para Desenvolvimento Ágil de Software" (2001)**.
- 🔗 [agilemanifesto.org](https://agilemanifesto.org)

---

## 3. Manifesto Ágil

| Mais valorizado | que |
|:---|:---:|
| **Indivíduos e Interações** | Processos e ferramentas |
| **Software que funciona** | Documentação abrangente |
| **Colaboração com o cliente** | Negociação de contrato |
| **Resposta às mudanças** | Seguir um plano |

### Características

- Entrega **incremental** do software
- Equipes **pequenas, comprometidas e motivadas**
- **Simplicidade** e menos formalismo
- **Comunicação e colaboração**
- **Satisfação do cliente**

> 💡 As atividades genéricas do processo de software — **comunicação, planejamento, modelagem, construção, implantação** — são todas praticadas de forma **simplificada**.
> Os métodos ágeis podem ser aplicados a **qualquer projeto** de desenvolvimento de software.

🔗 **Princípios completos:** [agilemanifesto.org/iso/ptbr/principles.html](https://agilemanifesto.org/iso/ptbr/principles.html)

---

## 4. Modelos Ágeis Citados

- **SCRUM**
- **XP** (Extreme Programming)

---

## 5. SCRUM

- Modelo ágil para **desenvolvimento de produtos** e para **gerenciamento de projetos**, baseado em **ciclo de vida iterativo-incremental**.
- Foco na **entrega antecipada e frequente** de funcionalidades que agregam valor para o cliente.
- **Não define ou detalha** as práticas de engenharia.

### Estrutura Geral

O Scrum prescreve um fluxo de trabalho para o desenvolvimento ágil de software:

- **Papéis:** PO, SM, Time
- **Artefatos:** Product Backlog, Sprint Backlog
- **Cerimônias:** Planejamento, Reuniões Diárias, Demonstração, Retrospectiva

---

## 6. Papéis

### 🎯 Product Owner (PO)

- Representante do **cliente**
- Define a **visão do produto**
- Apresenta os **requisitos** do produto para o time do projeto
- **Prioriza os requisitos** de acordo com o valor para o cliente
- **Planeja as entregas**
- Responsável pelo **retorno do investimento (ROI)**

### 🛡️ Scrum Master (SM)

- Facilita o **dia a dia** do time do projeto
- **Protege o time** de interferências externas
- Garante que o time esteja **funcional e produtivo**
- **Remove impedimentos**
- **Promove a comunicação**
- **Garante o uso do SCRUM**
- Promove a realização das **cerimônias**

### 👨‍💻 Time

- Aproximadamente **7 participantes**
- **Comprometimento:** o time realiza o que for preciso, dentro dos limites do projeto, para cumprir as metas acordadas
- **Próximos fisicamente**
- **Auto-organização**
- **Multidisciplinaridade**

---

## 7. Fluxo do Scrum

A sequência geral do fluxo é:

**Visão → Product Backlog → Sprint Backlog → Sprint → Reunião Diária → Demonstração → Retrospectiva**

---

## 8. Visão

- O **Product Owner** estabelece a **Visão do Produto**.
- A Visão representa a **necessidade que deve ser satisfeita** ao final do projeto.

### 🛗 Visão com a Frase do Elevador

> "Para **\<cliente/público alvo\>**
> que **\<necessidade do cliente/público ou oportunidade\>**,
> o **\<nome do produto\>**
> é um **\<categoria/tipo do produto\>**
> que **\<principal benefício ou razão para comprar o produto\>**.
> Diferentemente do **\<principal competidor/alternativa\>**,
> nosso produto **\<principal diferencial\>**."

---

## 9. Product Backlog

- **Lista de requisitos** que serão atendidos para que a Visão do Projeto seja alcançada.
- Os itens são **priorizados e ordenados pelo PO** de acordo com o valor que representam para o cliente.
- Novos itens podem ser **incluídos ou removidos** a qualquer momento. A prioridade pode ser alterada.
- Os itens do **topo da lista** serão implementados primeiro e, portanto, devem estar **mais detalhados**.
- Os itens menos prioritários podem ser **refinados ao longo do projeto**.
- Cada item do Product Backlog é uma **User Story** (História de Usuário).

---

## 10. História de Usuário (User Story)

Descrição do **desejo do usuário**, contendo:

- **Título**
- **Detalhamento**
- **Critérios de aceitação**

Responde a 3 perguntas:

- **Quem?**
- **O quê?**
- **Por quê?**

### Exemplo

> **Exportador de dados**
> *"Como um usuário, eu posso exportar dados em XML para integrar minhas informações com outros sistemas."*

---

## 11. Sprint Backlog

- Conjunto de **histórias eleitas** para serem tratadas na Sprint (topo do Product Backlog).
- As histórias do Sprint Backlog devem conter detalhes suficientes para a implementação:
  - **Detalhamento funcional**
  - **Critérios de aceitação**
  - **Premissas e restrições**

---

## 12. Sprint

- **Esforço concentrado** com **duração fixa (time-box)** para a execução de um trabalho pré-determinado (**incremento de produto**).
- **Duração:** 2 a 4 semanas.
- **Objetivo claro** e conhecido por todos os envolvidos.

### Cerimônias da Sprint

- Reunião de **Planejamento**
- **Reunião Diária**
- **Demonstração**
- Reunião de **Retrospectiva**

---

## 13. Reunião de Planejamento

Realizada no **início de cada Sprint**, dividida em duas partes:

**Parte 1 — Conduzida pelo PO:**
- Estabelece o **Objetivo da Sprint**
- Apresenta para o Time os itens **mais prioritários** do Product Backlog
- Fornece todos os detalhes e esclarece dúvidas

**Parte 2 — Conduzida pelo Time:**
- Entende cada estória
- Realiza a **estimativa**
- Divide a estória em **tarefas menores**
- Planeja o que será entregue ao final da Sprint

> 🃏 **Técnica de estimativa:** *Poker Planning*

---

## 14. Reunião Diária

- **Duração máxima:** 15 minutos
- Cada membro do time responde:
  1. O que **eu fiz** desde a última reunião?
  2. O que **pretendo fazer** até a próxima reunião?
  3. Tenho algum **impedimento**?

### Ferramentas de Visibilidade

- **Scrum Board** — quadro visual com o progresso das tarefas
- **Burndown Chart** — gráfico que mostra o trabalho restante ao longo da Sprint

---

## 15. Demonstração

- O **Time apresenta o resultado da Sprint** para o PO.
- É demonstrado o **incremento do produto** produzido durante a Sprint — **software executável!**
- O PO **avalia** se o Objetivo da Sprint foi atingido.

---

## 16. Retrospectiva

- **Lições aprendidas**
- Conceitos centrais: **Inspeção** e **Adaptação**

Os participantes são incentivados a responder:

- O que foi **bom**?
- O que deve **melhorar**?

> 🎯 **Resultado esperado:** uma lista de **ações** para as Sprints seguintes.

---

## 17. Materiais Complementares

- 🎥 **Vídeo (7 min):** Entrevista com **Jeff Sutherland**, cocriador do SCRUM
  🔗 [youtube.com/watch?v=yFfT6UIFjuo](https://www.youtube.com/watch?v=yFfT6UIFjuo)

- 📘 **Dica de leitura:** Guia do Scrum (versão 2020 — PT-BR)
  🔗 [scrumguides.org](https://scrumguides.org/docs/scrumguide/v2020/2020-Scrum-Guide-PortugueseBR-3.0.pdf)

---

## 🎓 Resumo Final

| Elemento | Itens |
|:---|:---|
| **Papéis** | Product Owner, Scrum Master, Time |
| **Artefatos** | Product Backlog, Sprint Backlog |
| **Cerimônias** | Planejamento, Reunião Diária, Demonstração, Retrospectiva |
| **Duração da Sprint** | 2 a 4 semanas |
| **Daily** | Máx. 15 minutos |
| **Ciclo** | Iterativo-incremental |

---
