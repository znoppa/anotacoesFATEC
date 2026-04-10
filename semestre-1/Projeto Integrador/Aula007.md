

# Projeto Integrador-1 — 10/04/2026

Fala, Mestre do Universo! Vou completar suas anotações com descrições e exemplos de **Requisitos Funcionais** e **Não Funcionais**.

---

## 📊 Fluxogramas (5 a 6)
- Considerar as principais funcionalidades do sistema para representar

---

## Requisitos Funcionais (RF)

Definem **o que o sistema deve fazer**. São as funcionalidades, serviços e comportamentos que o software precisa executar. Cada RF representa uma ação concreta — se removido, o sistema perde uma capacidade. São descritos como um **verbo** (cadastrar, alterar, excluir, consultar, gerar...).

> *Referência: Sommerville (2011) — Engenharia de Software; IEEE Std 830-1998.*

### Categorias

#### 📥 Inclusão
Operações de **cadastro/registro** de novos dados no sistema.
> Ex: *O sistema deve permitir o cadastro de clientes.*

#### ✏️ Alteração
Operações de **atualização/edição** de dados já existentes.
> Ex: *O sistema deve permitir a alteração dos dados de um produto.*

#### 🗑️ Exclusão
Operações de **remoção** de registros (lógica ou física).
> Ex: *O sistema deve permitir a exclusão de um fornecedor.*

#### 🔍 Consulta
Operações de **busca, pesquisa e filtragem** de informações.
> Ex: *O sistema deve permitir a consulta de produtos por categoria.*

#### 📊 Relatórios
Operações de **geração e exportação** de dados consolidados para análise.
> Ex: *O sistema deve gerar relatório de vendas por período em PDF.*

#### 💰 Movimentação
Operações que envolvem **transações e processos de negócio** — compra, venda, devolução, transferência — e que geralmente alteram o estado de mais de uma entidade (ex: registrar uma venda atualiza estoque, financeiro e histórico).
> Ex: *O sistema deve registrar uma venda vinculando cliente, produtos e forma de pagamento.*

---

## Requisitos Não Funcionais (RNF)

Definem **como o sistema deve se comportar**. São atributos de qualidade, restrições e propriedades técnicas que não descrevem funcionalidades, mas sim características mensuráveis do sistema. São descritos como um **adjetivo/atributo** (rápido, seguro, disponível...).

> *Referência: ISO/IEC 25010:2011 (SQuaRE); Sommerville (2011).*

### Principais Categorias

| Categoria | O que define | Exemplo |
|-----------|-------------|---------|
| **Desempenho** | Tempo de resposta e velocidade de processamento | *Requisições respondidas em até 3 segundos* |
| **Disponibilidade** | Tempo que o sistema fica no ar | *Disponível 99,5% do tempo (uptime)* |
| **Segurança** | Proteção de dados e controle de acesso | *Senhas armazenadas com hash bcrypt* |
| **Usabilidade** | Facilidade de uso e aprendizado | *Interface responsiva (mobile e desktop)* |
| **Escalabilidade** | Capacidade de crescimento | *Suportar 200 usuários simultâneos* |
| **Confiabilidade** | Tolerância a falhas e recuperação | *Backup automático diário do banco de dados* |
| **Conformidade** | Leis e regulamentos | *Seguir as diretrizes da LGPD* |
| **Portabilidade** | Compatibilidade entre plataformas | *Funcionar nos navegadores Chrome, Firefox e Edge* |

---

### Diferença Resumida

| | **RF** | **RNF** |
|---|---|---|
| **Pergunta** | *O que* o sistema faz? | *Como* o sistema faz? |
| **Natureza** | Verbo (ação) | Adjetivo (qualidade) |
| **Se falhar** | Usuário não completa a tarefa | Usuário tem experiência ruim |
| **Mensurável?** | Testável por funcionalidade | Testável por métrica (tempo, %, taxa) |
