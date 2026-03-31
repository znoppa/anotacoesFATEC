Data: 06/03/2026

Materiais usado em aula:

[[ROTEIRO.pdf]] - Roteiro que iremos seguir
[[briefing.pdf]] - Modelo de Briefing a ser feito

---

# 📚 Projeto Integrador – Desenvolvimento de Software (FATEC)

O desenvolvimento de um sistema não acontece apenas programando.  
Ele segue um **processo estruturado**, que envolve:

- entendimento do problema
- planejamento
- construção do sistema
- testes
- implantação
- manutenção

Esse processo garante que o software seja:

- funcional
    
- seguro
    
- economicamente viável
    
- alinhado às necessidades do cliente.
    

---

# 🔷 FASE 1 — Estratégica (Entendimento do Problema)

Essa fase define **se o projeto faz sentido e o que realmente precisa ser desenvolvido**.

Se ela for mal feita, o sistema nasce errado.

## 1️⃣ Prospecção

### O que é

Momento inicial onde se avalia:

- se o projeto é viável
    
- se o cliente realmente precisa da solução
    
- se o problema pode ser resolvido com software
    

### O que é analisado

- ramo da empresa
    
- tamanho da organização
    
- número de usuários
    
- existência de sistemas atuais
    
- existência de equipe de TI
    

### Perguntas importantes

- Qual é o problema atual?
    
- Quanto esse problema custa para a empresa?
    
- O que acontece se nada for feito?
    
- Já tentaram resolver antes?
    

### Tipos de problemas identificados

O sistema pode resolver:

- problemas **operacionais** (processos manuais)
    
- problemas **estratégicos** (falta de informação)
    
- problemas **legais** (ex: LGPD)
    
- problemas **de escala** (empresa cresceu)
    

### Entregável

📄 **Resumo inicial do projeto**

Contendo:

- contexto do negócio
    
- problema identificado
    
- objetivo do sistema
    
- funcionalidades gerais
    

---

## 2️⃣ Briefing Inicial

### O que é

Coleta estruturada de informações que transformam uma ideia em projeto.

Se a **prospecção é diagnóstico**,  
o **briefing é direcionamento**.

### Definições importantes

#### Objetivo do sistema

Exemplo:

- automatizar processos
    
- reduzir erros humanos
    
- gerar relatórios gerenciais
    
- melhorar controle interno
    

#### Identificação de stakeholders

Stakeholders são as pessoas envolvidas:

- solicitante
    
- usuários
    
- gestores
    
- equipe técnica
    

#### Visão macro de funcionalidades

Ainda **não é requisito detalhado**.

Exemplo:

- cadastro de clientes
    
- controle financeiro
    
- relatórios
    
- painel administrativo
    

#### Restrições

Podem ser:

**Legais**

- LGPD
    
- proteção de dados
    

**Técnicas**

- servidor local
    
- banco de dados específico
    

**Operacionais**

- usuários com pouca experiência
    
- acesso somente interno
    

---

# 🔷 FASE 2 — Projeto do Sistema

Agora começa a **transformação da ideia em um sistema planejado**.

---

# 3️⃣ Levantamento de Requisitos

Essa é **uma das fases mais importantes do desenvolvimento de software**.

Aqui o problema vira **especificação técnica**.

Exemplo:

❌ Antes

> "preciso de um sistema para organizar meus clientes"

✔ Depois

> O sistema deve permitir cadastrar clientes com nome, CPF, telefone e email.

---

## Como levantar requisitos

### 1️⃣ Entender o processo atual

Antes de criar algo novo é necessário entender:

- como o trabalho funciona hoje
    
- onde ocorrem erros
    
- onde existe retrabalho
    

Ferramentas usadas:

- entrevistas
    
- observação
    
- análise de planilhas
    
- fluxogramas
    

---

### 2️⃣ Entrevistas estruturadas

Pessoas entrevistadas:

- solicitante
    
- usuários operacionais
    
- gestores
    
- equipe de TI
    

Perguntas importantes:

- O que acontece primeiro?
    
- O que nunca pode acontecer?
    
- Onde ocorrem mais erros?
    
- Que relatórios são necessários?
    

---

## Tipos de Requisitos

### 🔹 Requisitos Funcionais

São **funcionalidades do sistema**.

Exemplos:

- cadastrar clientes
    
- editar registros
    
- gerar relatório em PDF
    
- exportar dados para Excel
    
- enviar notificações
    

Forma correta de escrever:

👉 **O sistema deve + ação + condição**

Exemplo:

> O sistema deve permitir cadastro de clientes contendo nome, CPF, telefone e email.

---

### 🔹 Requisitos Não Funcionais

São **características de qualidade do sistema**.

Exemplos:

- sistema responde em até 2 segundos
    
- disponibilidade de 99%
    
- autenticação segura
    
- compatibilidade com navegadores
    

Eles definem **como o sistema deve funcionar**, não o que ele faz.

---

### 🔹 Regras de Negócio

São **restrições e validações da empresa**.

Exemplos:

- apenas administrador pode excluir registros
    
- desconto máximo de 10%
    
- cliente com contrato ativo não pode ser excluído
    
- data final não pode ser menor que a inicial
    

Essas regras representam **como a empresa opera**.

---

### 🔹 Restrições

Limitações externas ao sistema.

Podem ser:

**Técnicas**

- banco de dados já definido
    
- servidor local
    

**Legais**

- LGPD
    
- armazenamento de dados sensíveis
    

**Operacionais**

- acesso apenas na rede interna
    

---

### Entregáveis dessa fase

📄 Documento contendo:

- lista de requisitos
    
- regras de negócio
    
- requisitos técnicos
    
- restrições
    

---

# 🔷 FASE 3 — Planejamento Formal do Projeto

Aqui o projeto deixa de ser apenas uma ideia e vira **um acordo formal entre cliente e desenvolvedor**.

---

# 4️⃣ Documento de Escopo

O escopo define:

👉 **O que será entregue no sistema**

Ele evita:

- mal-entendidos
    
- mudanças infinitas no projeto
    
- pedidos fora do combinado
    

---

## Conteúdo do documento

### ✔ O que está incluído (In Scope)

Funcionalidades que serão entregues.

Exemplo:

1. Cadastro de clientes
    
2. Controle de ordens de serviço
    
3. Relatórios em PDF
    
4. Controle de acesso por perfil
    

---

### ❌ O que está fora (Out of Scope)

Funcionalidades que **não fazem parte do projeto**.

Exemplo:

- aplicativo mobile
    
- integração com sistema financeiro
    
- dashboards avançados
    
- controle de estoque
    

Isso evita um problema chamado:

⚠ **Scope Creep**

Expansão silenciosa do projeto.

---

### 📌 Premissas

Condições assumidas como verdadeiras.

Exemplo:

- cliente fornecerá regras de negócio
    
- empresa fornecerá servidor
    
- equipe do cliente participará da homologação
    

Se essas premissas falharem, o projeto pode atrasar.

---

### 📅 Cronograma Macro

Divisão das fases do projeto.

Exemplo:

|Fase|Duração|
|---|---|
|Levantamento|1 semana|
|Arquitetura|1 semana|
|Desenvolvimento|4 semanas|
|Testes|1 semana|
|Homologação|1 semana|
|Implantação|3 dias|

---

### ✔ Critérios de Aceite

São regras que determinam que o sistema foi entregue corretamente.

Exemplo:

- todas as funcionalidades funcionando
    
- sem erros críticos
    
- cliente aprovou o sistema
    
- usuários conseguem acessar o sistema
    

Sem critérios de aceite **o projeto nunca termina**.

---

# 🔷 FASE 4 — Desenvolvimento Técnico

Agora começa a parte **técnica do sistema**.

---

## 1️⃣ Planejamento técnico

Define:

- backlog
    
- sprints
    
- prioridades
    
- papéis da equipe
    

Ferramentas usadas:

- Jira
    
- Trello
    
- ClickUp
    

---

## 2️⃣ Arquitetura do sistema

Define:

- linguagem
    
- framework
    
- banco de dados
    
- integrações
    
- segurança
    

Exemplo:

- Backend: Node / Java / C#
    
- Frontend: React
    
- Banco: MySQL
    
- Cloud: AWS / Azure
    

---

## 3️⃣ UX/UI

Desenho das telas e experiência do usuário.

Ferramentas usadas:

- Figma
    
- Adobe XD
    

Aqui são criados:

- protótipos
    
- wireframes
    
- fluxos de navegação
    

---

## 4️⃣ Desenvolvimento

O sistema é construído **por módulos ou sprints**.

Exemplo:

Sprint 1

- cadastro de usuários
    

Sprint 2

- cadastro de clientes
    

Sprint 3

- relatórios
    

---

## 5️⃣ Testes

Tipos de testes:

**Teste unitário**

verifica partes do código.

**Teste de integração**

verifica comunicação entre módulos.

**Teste de performance**

verifica velocidade do sistema.

**Teste de segurança**

verifica vulnerabilidades.

---

# 🔷 FASE 5 — Implantação

Quando o sistema está pronto.

---

## 1️⃣ Homologação (UAT)

Usuários reais testam o sistema.

Eles verificam se:

- o sistema resolve o problema
    
- funciona no processo real
    

---

## 2️⃣ Implantação (Go Live)

Sistema entra em produção.

Pode envolver:

- migração de dados
    
- publicação em servidor
    
- configuração final
    

---

# 🔷 FASE 6 — Operação e Evolução

Após o sistema estar funcionando.

---

## Treinamento

Usuários aprendem a usar o sistema.

Pode incluir:

- manuais
    
- vídeos
    
- treinamentos
    

---

## Suporte pós-implantação

Primeiras semanas são críticas.

Correções rápidas são feitas.

---

## Manutenção

O sistema evolui com o tempo:

- novas funcionalidades
    
- melhorias
    
- atualizações de segurança
    

---

# 📊 Fluxo Completo do Desenvolvimento

```
Problema
 ↓
Prospecção
 ↓
Briefing
 ↓
Levantamento de Requisitos
 ↓
Documento de Escopo
 ↓
Planejamento
 ↓
Arquitetura
 ↓
Desenvolvimento
 ↓
Testes
 ↓
Homologação
 ↓
Implantação
 ↓
Suporte
 ↓
Evolução
```

---

💡 **Dica importante para o Projeto Integrador da FATEC**

Essas etapas são **basicamente o ciclo de vida de um software**, que aparece em metodologias como:

- **Cascata**
    
- **Scrum**
    
- **RUP**
    
- **DevOps**
    

---

✅ Se quiser, eu também posso te entregar uma versão que **quase sempre cai em prova ou apresentação de PI**, que é:

- **apenas 5 fases simplificadas**
    
- com **diagramas**
    
- e **exemplos reais (tipo o sistema ORCA que você está desenvolvendo no TCC)**.