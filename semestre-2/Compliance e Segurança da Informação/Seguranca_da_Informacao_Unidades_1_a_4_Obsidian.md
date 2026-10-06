---
title: "Segurança da Informação — Unidades 1 a 4"
aliases:
  - Segurança da Informação AVA
  - Revisão Segurança da Informação
tags:
  - faculdade
  - seguranca-da-informacao
  - prova
  - ava
  - lgpd
  - iso27001
  - iso27002
  - iso31000
created: 2026-10-06
status: revisão
---

# 🔐 Segurança da Informação — Unidades 1 a 4

> [!abstract] Objetivo
> Resumo das **Unidades 1 a 4 do AVA** para revisão de prova, com foco em conceitos, diferenças importantes, exemplos e pontos que podem virar pegadinha.

---

# Unidade 1 — Fundamentos da Segurança da Informação

## Dado, Informação e Conhecimento

| Conceito | Significado | Exemplo |
|---|---|---|
| **Dado** | Elemento bruto, sem contexto | `38` |
| **Informação** | Dado com contexto | `38°C é a temperatura do paciente` |
| **Conhecimento** | Interpretação da informação para tomar decisão | Identificar febre e decidir como agir |

### Fluxo mental

**Dado → contexto → Informação → interpretação → Conhecimento**

> [!example] Exemplo do RA
> Um RA isolado é apenas uma sequência numérica. Dentro do contexto acadêmico, seus números identificam unidade, curso, ano, semestre e matrícula.

## Ativos

**Ativo** é qualquer coisa que tenha valor para uma organização e que precisa ser protegida.

Exemplos: computadores, servidores, redes, sistemas, banco de dados, código-fonte, credenciais, contratos, informações, reputação, conhecimento das equipes e continuidade da operação.

> [!important]
> Quanto maior o impacto caso um ativo seja perdido, alterado, vazado ou fique indisponível, **maior deve ser sua prioridade de proteção**.

## Ameaça × Vulnerabilidade × Risco

| Conceito | Definição | Exemplo |
|---|---|---|
| **Ativo** | O que quero proteger | Banco de dados |
| **Ameaça** | Algo com potencial de causar dano | Hacker, malware, roubo de credenciais |
| **Vulnerabilidade** | Fraqueza que pode ser explorada | Senha fraca, sistema desatualizado |
| **Risco** | Possibilidade de a ameaça explorar a vulnerabilidade e gerar impacto | Invasão e vazamento |

> [!tip]
> **Ameaça explora uma Vulnerabilidade de um Ativo → gera Risco.**

O risco normalmente considera **probabilidade + impacto**.

## Pilares da Segurança da Informação

### Tríade CIA / CID

| Pilar | Significado | Exemplo de violação |
|---|---|---|
| **Confidencialidade** | Somente autorizados acessam | Outro aluno vê suas notas |
| **Integridade** | Informação não sofre alteração indevida | Nota muda de 7,5 para 9,5 sem autorização |
| **Disponibilidade** | Informação/sistema acessível quando necessário | Sistema cai durante a rematrícula |

### Pilares complementares

- **Autenticidade:** garantir que uma pessoa, sistema ou origem é realmente quem afirma ser.
- **Não repúdio / Irretratabilidade:** permitir comprovar que determinada pessoa realizou uma ação.
- **Legalidade:** as ações de segurança também precisam estar de acordo com a legislação.

> [!warning] Pegadinha
> Um incidente pode comprometer **vários pilares ao mesmo tempo**.

## Segurança Física × Segurança Lógica

### Segurança Física
Protege prédio, salas, servidores, equipamentos, pessoas e infraestrutura.

Exemplos: câmeras, catracas, crachás, biometria, guardas, nobreaks e áreas restritas.

### Segurança Lógica
Protege o ambiente digital.

Exemplos: senhas, MFA, firewall, permissões, antivírus, backups, logs e criptografia.

> [!example]
> Não adianta ter um servidor extremamente protegido digitalmente se qualquer pessoa consegue entrar na sala e levar o disco físico.

## Modelo AAA

**AAA = Autenticação + Autorização + Auditoria**

| Etapa | Pergunta | Exemplo |
|---|---|---|
| **Autenticação** | Quem é você? | Login com RA + senha |
| **Autorização** | O que você pode fazer? | Aluno consulta nota, professor altera |
| **Auditoria** | O que foi feito e quando? | Logs de acessos e alterações |

> [!tip]
> **Autenticação = identidade**  
> **Autorização = permissão**  
> **Auditoria = evidência**

## Phishing

Phishing é uma forma de **engenharia social** usada para enganar a vítima e roubar dados, credenciais ou induzir a instalação de malware.

Sinais comuns: mensagem urgente, ameaça de bloqueio, link estranho, pedido de senha, pedido de código MFA, boleto ou anexo inesperado.

## Segurança em Camadas

A segurança não deve depender de uma única proteção.

### Camadas principais
1. Governança e políticas
2. Física
3. Lógica
4. Dados
5. Humana

### Conceitos importantes

- **Firewall:** filtra tráfego de rede.
- **IDS:** detecta e alerta.
- **IPS:** detecta e pode bloquear.
- **Antivírus/Antimalware:** detecta arquivos maliciosos.
- **EDR:** monitora comportamento dos endpoints e auxilia na resposta.
- **Patch:** atualização usada para corrigir falhas e vulnerabilidades.
- **Criptografia:** torna o dado ilegível sem a chave adequada.
- **DLP:** ajuda a impedir vazamento de informações sensíveis.
- **Backup:** cópia de segurança para recuperação.

> [!summary]
> **Segurança em camadas = pessoas + processos + tecnologia trabalhando juntas.**

---

# Unidade 2 — LGPD, Privacidade e Conformidade

## Ideia central

A pergunta deixa de ser apenas **“como proteger o dado?”** e passa a incluir:

- Posso usar esse dado?
- Por que estou coletando?
- Para qual finalidade?
- Quem pode acessar?
- Por quanto tempo devo manter?
- Consigo provar que estou agindo corretamente?

## LGPD na prática

A LGPD exige tratamento de dados com finalidade, fundamento adequado, limites, responsabilidade, controle e registro.

Ela afeta coleta, uso, compartilhamento, armazenamento e eliminação.

> [!important]
> **LGPD não é sinônimo de consentimento.** Consentimento é apenas uma das possibilidades de fundamento para tratamento.

## Legalidade × Privacidade × Conformidade

| Conceito | Pergunta principal |
|---|---|
| **Legalidade** | Tenho fundamento para tratar esse dado? |
| **Privacidade** | Estou usando apenas o necessário? |
| **Conformidade** | Consigo provar que estou seguindo as regras? |

## Minimização de Dados

Pergunta-chave:

> **Eu realmente preciso desse dado?**

Boas práticas: reduzir campos de formulários, limitar acessos, evitar compartilhamento excessivo, definir prazo de retenção e evitar armazenamento indefinido.

## Papéis na LGPD

- **Controlador:** decide sobre o tratamento dos dados.
- **Operador:** executa o tratamento conforme as orientações do controlador.
- **Encarregado:** atua como ponto de comunicação e orientação relacionado à proteção de dados.

## Direitos do Titular

Entre os direitos trabalhados no conteúdo:

- acesso;
- correção;
- exclusão;
- portabilidade;
- retirada do consentimento, quando aplicável.

## Governança e Evidências

Não basta dizer que a organização segue a LGPD. É preciso demonstrar isso.

Exemplos de evidências: registros, políticas, contratos, revisão de acessos, trilhas de auditoria, decisões documentadas, critérios de retenção e registros de descarte.

## Incidente com Dados Pessoais

Incidente não significa apenas ataque hacker.

Também pode ser planilha enviada para a pessoa errada, arquivo exposto, compartilhamento por canal inadequado ou acesso indevido interno.

### Fluxo básico

**Identificar → avaliar → conter → registrar → comunicar quando necessário → corrigir**

> [!warning]
> Incidentes com dados pessoais podem gerar impacto **operacional, financeiro, legal e reputacional**.

---

# Unidade 3 — Governança, Gestão de Riscos e ISO

## Governança

Governança organiza como as decisões são tomadas.

Ela ajuda a responder:

- Quem decide?
- Quem autoriza?
- Quem executa?
- Quem acompanha?
- Quem é responsável?

> [!tip]
> Governança não significa burocracia pela burocracia. Significa criar **responsabilidade, direção e critérios**.

## Gestão de Riscos

Gerir riscos é desenvolver a capacidade de olhar antes que o problema aconteça.

### Gestão de riscos significa

- identificar;
- analisar;
- priorizar;
- tratar;
- acompanhar;
- revisar.

### Elementos importantes

**Contexto + Probabilidade + Impacto + Prioridade**

> [!example]
> Um evento pode ter baixa probabilidade, mas impacto extremamente alto. Mesmo assim, pode exigir alta prioridade.

## ISO 31000

A **ISO 31000** é uma referência internacional para **gestão de riscos** e não é exclusiva de TI.

Pode ser usada em segurança da informação, continuidade, compliance, governança e tomada de decisão.

### Três grandes eixos

1. **Princípios**
2. **Estrutura**
3. **Processo**

### Ideia central

A organização deve compreender seu contexto, identificar riscos, analisar consequências, avaliar prioridades, definir tratamentos, monitorar e revisar continuamente.

> [!important]
> O risco não é analisado apenas uma vez. Sistemas, pessoas, fornecedores, contratos e ameaças mudam.

## Família ISO/IEC 2700x

### ISO/IEC 27001

Define requisitos para estabelecer, implementar, manter e melhorar um **SGSI — Sistema de Gestão de Segurança da Informação**.

### ISO/IEC 27002

Fornece orientações sobre **controles de Segurança da Informação**.

> [!tip]
> **27001 = Sistema de Gestão / Requisitos**  
> **27002 = Controles / Boas práticas**

## Grupos de Controles

### 1. Organizacionais
Políticas, responsabilidades, inventário de ativos, classificação da informação, fornecedores, incidentes, continuidade e conformidade.

### 2. Pessoas
Conscientização, treinamento, responsabilidades, cláusulas contratuais e comportamento seguro.

### 3. Físicos
Controle de acesso, proteção de equipamentos, áreas seguras, descarte de mídias e proteção ambiental.

### 4. Tecnológicos
Autenticação, criptografia, antivírus, firewall, backup, monitoramento, redes e proteção contra malware.

> [!warning]
> Os controles devem ser escolhidos conforme **contexto, escopo e riscos identificados**.

## PDCA

**PDCA = melhoria contínua**

- **P — Plan:** planejar.
- **D — Do:** executar.
- **C — Check:** verificar.
- **A — Act:** agir e melhorar.

Exemplo:

**Plan:** identificar risco de senhas fracas.  
**Do:** implantar nova política.  
**Check:** verificar se funcionou.  
**Act:** corrigir falhas e aprimorar.

---

# Unidade 4 — Controles de Segurança na Prática

## Visão geral

Segurança deve proteger pessoas, ambientes, equipamentos, redes, sistemas, documentos e processos.

## Segurança Física

Protege instalações e recursos físicos.

Exemplos: crachás, câmeras, fechaduras, controle de visitantes, áreas restritas e registro de entrada e saída.

> [!example]
> Um documento confidencial deixado sobre a mesa pode causar vazamento sem existir qualquer ataque digital.

## Segurança Ambiental

Protege contra riscos do próprio ambiente.

### Riscos
- queda de energia;
- superaquecimento;
- incêndio;
- infiltração;
- umidade;
- poeira;
- falha de climatização;
- surtos elétricos.

### Controles
- nobreak;
- gerador;
- climatização;
- sensores de fumaça;
- extintores adequados;
- proteção elétrica.

## Segurança Lógica

Protege sistemas, redes, aplicações e dados digitais.

Exemplos: login, senha, MFA, firewall, criptografia, antivírus, monitoramento e controle de acesso.

## Princípio do Menor Privilégio

Cada usuário deve acessar **somente aquilo que precisa para executar sua função**.

## Usuários, Senhas e Autenticação

### Problemas comuns
- senha em papel;
- login compartilhado;
- mesma senha em vários sistemas;
- senha fraca;
- phishing;
- falta de atenção;
- códigos MFA compartilhados.

### Boas práticas
- senhas fortes;
- MFA;
- conscientização;
- não compartilhar credenciais;
- revisar permissões;
- registrar acessos.

## Política de Segurança da Informação — PSI

A PSI define princípios, responsabilidades, regras, limites, condutas e procedimentos diante de incidentes.

Ela responde:

- O que pode?
- O que não pode?
- Quem pode?
- Quem é responsável?
- Como agir diante de um problema?

## Classificação da Informação

Nem toda informação possui o mesmo nível de sensibilidade.

### Exemplos de classificação

1. **Pública**
2. **Interna**
3. **Restrita**
4. **Confidencial**

| Informação | Classificação provável |
|---|---|
| Calendário acadêmico | Pública |
| Relatório interno | Interna |
| Dados financeiros | Restrita |
| Folha de pagamento | Confidencial |

A classificação ajuda a definir acesso, armazenamento, compartilhamento e descarte.

## Backup × Continuidade

### Backup

Cópia de segurança para recuperar dados.

Um backup precisa ter frequência definida, local seguro, controle de acesso, integridade e testes de restauração.

> [!warning]
> **Backup que nunca foi testado pode falhar justamente quando mais for necessário.**

### Continuidade do Negócio

É a capacidade de manter atividades essenciais, restaurar operações, definir prioridades, determinar responsáveis e utilizar procedimentos alternativos.

> [!tip]
> **Backup recupera dados.**  
> **Continuidade recupera ou mantém o negócio.**

## Resposta a Incidentes

### Sequência para decorar

**Identificar → Registrar → Conter → Analisar → Comunicar → Recuperar → Aprender**

Exemplos: malware, ransomware, acesso indevido, vazamento, sistema indisponível e uso inadequado de dados.

## Controles Organizacionais

Exemplos: definição de responsabilidades, segregação de funções, auditoria, revisão de acessos, inventário de ativos, treinamento, registros e acompanhamento de conformidade.

## Segregação de Funções

Evita concentrar atividades críticas em uma única pessoa.

> [!example]
> A mesma pessoa não deveria cadastrar, aprovar e executar um pagamento sem supervisão.

## Desligamento de Funcionários

Quando um funcionário sai da organização, contas devem ser desativadas, acessos revogados, credenciais invalidadas e dispositivos devolvidos.

> [!warning]
> Conta antiga ainda ativa = risco de segurança.

## Tecnologias Emergentes

### Nuvem
Exige atenção a acessos, criptografia, contratos, monitoramento e permissões.

### Blockchain
Pode contribuir com integridade, rastreabilidade e descentralização, mas não elimina roubo de credenciais, dados incorretos ou falhas de governança.

### Inteligência Artificial
Pode ajudar a detectar comportamento anômalo, tráfego suspeito e grande volume de eventos, mas não substitui políticas, processos, governança e análise humana.

---

# 🧠 Revisão Relâmpago para a Prova

> [!question] 1. O que é CIA/CID?
> **Confidencialidade + Integridade + Disponibilidade**

> [!question] 2. O que é AAA?
> **Autenticação + Autorização + Auditoria**

> [!question] 3. Qual a diferença entre ameaça e vulnerabilidade?
> **Ameaça** pode causar dano. **Vulnerabilidade** é a brecha que permite o dano.

> [!question] 4. O que é risco?
> Possibilidade de uma ameaça explorar uma vulnerabilidade e gerar impacto.

> [!question] 5. IDS e IPS?
> **IDS = detecta e alerta.**  
> **IPS = detecta e bloqueia.**

> [!question] 6. O que é menor privilégio?
> Usuário acessa apenas o necessário para sua função.

> [!question] 7. LGPD é só consentimento?
> **Não.** Consentimento é apenas uma das possibilidades de fundamento para tratamento.

> [!question] 8. Legalidade, Privacidade e Conformidade?
> **Legalidade:** posso tratar?  
> **Privacidade:** preciso de tudo isso?  
> **Conformidade:** consigo provar que estou fazendo corretamente?

> [!question] 9. ISO 31000?
> **Gestão de riscos.**

> [!question] 10. ISO 27001?
> **SGSI e requisitos de gestão de Segurança da Informação.**

> [!question] 11. ISO 27002?
> **Orientações e controles de Segurança da Informação.**

> [!question] 12. PDCA?
> **Plan → Do → Check → Act**

> [!question] 13. Backup e continuidade são iguais?
> **Não.** Backup recupera dados. Continuidade mantém ou restaura atividades essenciais.

> [!question] 14. Fluxo de resposta a incidente?
> **Identificar → Registrar → Conter → Analisar → Comunicar → Recuperar → Aprender**

> [!question] 15. Quais os quatro grupos de controles?
> **Organizacionais + Pessoas + Físicos + Tecnológicos**

---

# 🎯 Mapa Mental Final

```text
SEGURANÇA DA INFORMAÇÃO
│
├── Ativos
│   ├── Ameaças
│   ├── Vulnerabilidades
│   └── Riscos
│
├── CIA / CID
│   ├── Confidencialidade
│   ├── Integridade
│   └── Disponibilidade
│
├── Complementares
│   ├── Autenticidade
│   ├── Não repúdio
│   └── Legalidade
│
├── AAA
│   ├── Autenticação
│   ├── Autorização
│   └── Auditoria
│
├── LGPD
│   ├── Legalidade
│   ├── Privacidade
│   ├── Conformidade
│   ├── Controlador
│   ├── Operador
│   └── Encarregado
│
├── Gestão de Riscos
│   ├── ISO 31000
│   └── Probabilidade + Impacto
│
├── ISO 2700x
│   ├── 27001 → SGSI
│   └── 27002 → Controles
│
├── Controles
│   ├── Organizacionais
│   ├── Pessoas
│   ├── Físicos
│   └── Tecnológicos
│
├── Operação
│   ├── Segurança Física
│   ├── Segurança Ambiental
│   ├── Segurança Lógica
│   ├── Backup
│   ├── Continuidade
│   └── Resposta a Incidentes
│
└── Cultura
    ├── Pessoas
    ├── Processos
    └── Tecnologia
```

---

# 🔗 Notas relacionadas

- [[LGPD]]
- [[Gestão de Riscos]]
- [[ISO 31000]]
- [[ISO 27001]]
- [[ISO 27002]]
- [[Segurança da Informação]]
- [[Resposta a Incidentes]]
- [[Backup e Continuidade]]
- [[Phishing]]
- [[Modelo AAA]]

---

# ✅ Checklist antes da prova

- [ ] Sei explicar CIA/CID sem consultar.
- [ ] Sei diferenciar ameaça, vulnerabilidade e risco.
- [ ] Sei explicar AAA.
- [ ] Sei diferenciar segurança física, ambiental e lógica.
- [ ] Sei explicar LGPD além de consentimento.
- [ ] Sei diferenciar legalidade, privacidade e conformidade.
- [ ] Sei a função da ISO 31000.
- [ ] Sei diferenciar ISO 27001 e ISO 27002.
- [ ] Sei explicar PDCA.
- [ ] Sei diferenciar backup e continuidade.
- [ ] Sei descrever o fluxo de resposta a incidentes.
- [ ] Sei explicar menor privilégio.
- [ ] Sei explicar segregação de funções.
- [ ] Sei dar pelo menos um exemplo prático de cada conceito.
