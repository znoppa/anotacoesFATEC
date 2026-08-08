---
tipo: aula
semestre: 2
disciplina: Banco de Dados
aula: 1
data: "2026-08-07"
status: revisado
revisao: true
aliases:
  - BD 001 — Fundamentos de Banco de Dados
tags:
  - ads/semestre-2
  - disciplina/banco-de-dados
---

# Aula 001 — Fundamentos de Banco de Dados

> [!abstract] Em uma frase
> Bancos de dados organizam registros brutos para que aplicações possam armazená-los, relacioná-los e recuperá-los com rapidez, segurança e confiabilidade.

## Objetivos

- Diferenciar dado, informação e conhecimento.
- Compreender o papel de um Sistema Gerenciador de Banco de Dados (SGBD).
- Identificar os níveis externo, conceitual e interno da arquitetura de três esquemas.
- Reconhecer as principais categorias de comandos SQL.
- Entender a estrutura básica do modelo relacional.

## Dado, informação e conhecimento

Esses conceitos representam etapas diferentes do uso de registros:

| Conceito | Definição | Exemplo |
|---|---|---|
| **Dado** | Registro bruto, ainda sem contexto suficiente. | `38 °C` |
| **Informação** | Dado processado e contextualizado. | A temperatura de hoje é de 38 °C. |
| **Conhecimento** | Interpretação da informação para compreender uma situação ou tomar uma decisão. | Está muito quente; é necessário evitar exposição prolongada ao sol. |

O banco de dados armazena dados, enquanto as aplicações os consultam e processam para produzir informações úteis. O conhecimento surge quando uma pessoa ou sistema aplica essas informações a um contexto.

## Banco de dados e SGBD

Um **banco de dados** é uma coleção organizada de dados relacionados, mantida para atender às necessidades de pessoas e sistemas de uma organização.

O **Sistema Gerenciador de Banco de Dados (SGBD)** é o software responsável por permitir a definição, a construção, a manipulação, o controle e o compartilhamento do banco de dados.

### Principais responsabilidades

- Definir estruturas, tipos de dados e restrições.
- Inserir, consultar, atualizar e excluir registros.
- Controlar usuários e permissões de acesso.
- Manter a integridade e a consistência dos dados.
- Coordenar o acesso simultâneo de diferentes usuários.
- Realizar cópias de segurança e apoiar a recuperação após falhas.
- Oferecer diferentes visões dos mesmos dados.

Em comparação com arquivos isolados, um SGBD reduz a dependência entre os programas e a forma física de armazenamento. Isso torna as aplicações mais seguras, confiáveis e fáceis de manter.

## Arquitetura de três esquemas

A arquitetura de três esquemas separa a visão dos usuários, a organização lógica do banco e o armazenamento físico. Seu objetivo principal é proporcionar **independência de dados**.

| Nível | Função |
|---|---|
| **Externo** | Apresenta a cada usuário ou grupo apenas a visão dos dados de que necessita. |
| **Conceitual** | Descreve a estrutura lógica global do banco, incluindo entidades, atributos, relacionamentos e restrições. |
| **Interno** | Define como os dados são armazenados fisicamente, incluindo arquivos, índices e caminhos de acesso. |

Essa separação permite alterar detalhes de armazenamento sem obrigar a alteração das telas e aplicações dos usuários. Também possibilita modificar parte da estrutura lógica preservando, quando possível, as visões externas.

## SQL: a linguagem dos bancos relacionais

**SQL** significa *Structured Query Language*. A linguagem reúne comandos que podem ser classificados de acordo com sua finalidade:

| Categoria | Finalidade | Exemplos |
|---|---|---|
| **DDL** — *Data Definition Language* | Definir ou alterar estruturas do banco. | `CREATE`, `ALTER`, `DROP` |
| **DML** — *Data Manipulation Language* | Consultar e manipular registros. | `SELECT`, `INSERT`, `UPDATE`, `DELETE` |
| **DCL** — *Data Control Language* | Administrar permissões. | `GRANT`, `REVOKE` |
| **TCL** — *Transaction Control Language* | Controlar transações. | `COMMIT`, `ROLLBACK` |

Uma **transação** agrupa operações que devem ser tratadas como uma unidade. `COMMIT` confirma as mudanças; `ROLLBACK` desfaz as operações ainda não confirmadas quando ocorre um erro ou quando a transação precisa ser cancelada.

## Modelo relacional

No modelo relacional, os dados são representados por **relações**, normalmente visualizadas como tabelas.

- **Relação:** estrutura que reúne dados relacionados.
- **Tupla:** uma linha da relação; representa uma ocorrência ou registro.
- **Atributo:** uma coluna; representa uma característica dos registros.
- **Domínio:** conjunto de valores permitidos para um atributo.

### Exemplo

| matricula | nome | curso |
|---:|---|---|
| 101 | Ana | ADS |
| 102 | Bruno | ADS |

Nessa relação, `matricula`, `nome` e `curso` são atributos. Cada linha é uma tupla que descreve um aluno.

### Propriedades importantes

- Cada relação deve ser identificável no esquema do banco.
- Cada célula contém um valor do domínio correspondente; no modelo relacional clássico, esse valor é atômico.
- A ordem das linhas e das colunas não altera o significado lógico da relação.
- Uma relação não contém tuplas duplicadas.
- Chaves e restrições ajudam a identificar registros e preservar a integridade dos dados.

> [!important] Tabela não é apenas aparência
> Linhas e colunas são uma forma conveniente de visualizar uma relação. O significado dos dados depende dos atributos, domínios, chaves e restrições, não da posição visual dos registros.

## Exemplo integrado

Em um aplicativo bancário, o usuário vê apenas saldo e movimentações relevantes para sua conta (**nível externo**). O esquema descreve clientes, contas e transações e seus relacionamentos (**nível conceitual**). Arquivos, páginas de disco e índices sustentam o acesso eficiente aos registros (**nível interno**).

Ao realizar uma transferência, o SGBD controla a transação. Se todas as operações forem concluídas corretamente, ocorre `COMMIT`; se alguma etapa falhar, `ROLLBACK` evita que apenas parte da transferência permaneça registrada.

## Conexões

- **Sistemas Operacionais:** o SGBD depende do gerenciamento de arquivos, memória, processos e acesso concorrente oferecido pelo sistema operacional.
- **Engenharia de Software:** os requisitos do sistema determinam quais dados, regras, permissões e operações o banco deve oferecer.
- **Algoritmos:** consultas, índices e estratégias de acesso influenciam o tempo necessário para recuperar informações.

## Revisão ativa

> [!question] Perguntas
> - Qual é a diferença entre dado, informação e conhecimento?
> - Quais problemas um SGBD resolve em comparação com arquivos isolados?
> - O que cada nível da arquitetura de três esquemas representa?
> - Qual é a diferença entre DDL, DML, DCL e TCL?
> - O que são relação, tupla e atributo?
> - Por que a ordem visual das linhas não importa no modelo relacional?
> - Como `COMMIT` e `ROLLBACK` participam de uma transferência bancária?

## Materiais

- Vídeo: `Fundamentos_de_Banco_de_Dados.mp4` (material fornecido para a aula).

---

[[01 - Painel/00 - Início|Início]]
