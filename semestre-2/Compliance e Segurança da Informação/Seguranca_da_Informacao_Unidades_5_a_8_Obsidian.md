---
title: "Segurança da Informação — Unidades 5 a 8"
aliases:
  - Revisão de Segurança da Informação — Unidades 5 a 8
tags:
  - faculdade
  - seguranca-da-informacao
  - prova
  - ava
created: 2026-11-23
status: revisão
---

# Segurança da Informação — Unidades 5 a 8

> [!abstract] Objetivo
> Revisão para a prova de **Compliance e Segurança da Informação**, com conceitos, exemplos e um mini-simulado.

A **Unidade 5** explica quem pode acessar um sistema, a **6** mostra quais ameaças ele enfrenta, a **7** ensina como montar a defesa e a **8** explica como a criptografia protege dados e ajuda a comprovar sua origem.

## Unidade 5 — Identidade, autenticação e controle de acesso

**IAM** (*Identity and Access Management*) é o conjunto de políticas, processos e tecnologias que gerencia identidades e acessos. Uma conta individual permite rastrear as ações de cada pessoa. Se três funcionários usam o mesmo login, o sistema registra a conta usada, mas fica difícil saber quem executou a ação.

| Conceito | Pergunta que responde | Exemplo em um sistema de comandas |
| --- | --- | --- |
| **Identificação** | Quem você diz ser? | O funcionário informa seu usuário. |
| **Autenticação** | Como você comprova sua identidade? | Entra com senha e confirma um código no aplicativo autenticador. |
| **Autorização** | O que você pode fazer? | Pode atualizar pedidos, mas o financeiro fica restrito ao gerente. |
| **Auditoria** | Quem fez o quê, quando e com qual resultado? | O sistema registra uma tentativa bloqueada de acesso ao financeiro. |

**AAA** reúne **autenticação, autorização e auditoria**. No **MFA**, a pessoa comprova sua identidade com fatores de categorias diferentes. A senha é algo que você **sabe**, o token é algo que você **tem**, e a biometria é algo que você **é**. Duas senhas pertencem à mesma categoria.

- **RBAC** concede acesso pelo papel. O perfil de motoboy pode consultar entregas.
- **ABAC** avalia atributos do usuário, do recurso ou do contexto. O motoboy só pode consultar pedidos atribuídos a ele.
- **Privilégio mínimo** dá a cada pessoa as permissões necessárias para sua função.
- **Segregação de funções** distribui etapas críticas. Quem solicita um pagamento e quem o aprova são pessoas diferentes.
- **Revisão de acessos** evita o acúmulo de permissões. Na mudança de setor, revise os acessos antigos. No desligamento, revogue a conta. Proteja os registros de auditoria contra alterações.

## Unidade 6 — Ameaças, vulnerabilidades e resposta a incidentes

**Ameaça** é algo que pode causar dano. **Vulnerabilidade** é uma fraqueza que pode ser explorada. **Risco** considera a possibilidade de o dano ocorrer e seu impacto. Em um painel desatualizado, a falha é uma vulnerabilidade, um criminoso interessado em acessá-lo representa uma ameaça, e o vazamento dos dados é um dos riscos.

| Ameaça | Como reconhecer em uma questão |
| --- | --- |
| **Phishing** | Uma mensagem fraudulenta tenta induzir alguém a clicar, informar dados ou agir com urgência. *Spear phishing* é direcionado, *whaling* mira executivos, *vishing* usa voz e *smishing* usa SMS. |
| **Malware** | Categoria de software malicioso. Vírus depende de um hospedeiro, *worm* se propaga sozinho, *trojan* se disfarça de programa legítimo e *spyware* coleta dados. |
| **Ransomware** | Bloqueia ou cifra dados para extorquir. Na **dupla extorsão**, também há roubo de dados e ameaça de divulgação. O backup ajuda a recuperar a operação, enquanto a investigação determina se houve vazamento. |
| **DoS e DDoS** | Buscam tornar um serviço indisponível. No DDoS, o ataque vem de múltiplas origens. |
| **Man-in-the-Middle** | Um intermediário intercepta a comunicação entre duas partes. Validar certificados e usar TLS ajuda a proteger a conexão. |

A **Cyber Kill Chain** representa as etapas de um ataque, do reconhecimento à ação final. Para a defesa, ajuda a encontrar pontos em que o incidente pode ser detectado e interrompido. O **CVSS** indica a gravidade técnica de uma vulnerabilidade. A prioridade de correção também depende da exposição do ativo e de sua importância para o negócio.

### Resposta a incidentes no modelo PICERL

**Preparação → Identificação → Contenção → Erradicação → Recuperação → Lições aprendidas.**

Imagine um computador infectado. **Isolá-lo** é contenção. **Remover o malware e corrigir a causa** é erradicação. **Validar que o equipamento pode voltar à operação** é recuperação. O material também destaca backups testados, treinamento e uma cultura em que as pessoas comuniquem rapidamente erros e suspeitas.

## Unidade 7 — Defesa em camadas, redes e aplicações

**Defesa em profundidade** combina controles humanos, físicos, de rede, de dispositivos, de aplicações e de dados. Se um controle falhar, os demais ainda podem detectar o problema ou limitar o dano. A resiliência depende de **prevenir, detectar e responder**.

| Controle | Função |
| --- | --- |
| **Segmentação e firewall** | A segmentação divide a rede. O firewall aplica regras ao tráfego. Um exemplo é separar o Wi-Fi de visitantes da rede do caixa. |
| **VPN, TLS e DNS seguro** | VPN protege o tráfego que passa pelo túnel. TLS protege a conexão, como no HTTPS. DNSSEC verifica a autenticidade das respostas DNS. DoH e DoT criptografam as consultas até o resolvedor. |
| **SIEM e EDR** | SIEM centraliza e correlaciona registros. EDR monitora dispositivos, como computadores e servidores, e ajuda a responder a incidentes nesses equipamentos. |
| **Zero Trust** | Avalia identidade, dispositivo, contexto e permissão para conceder acesso a um recurso. A localização na rede é apenas um dos sinais possíveis. |

O **OWASP Top 10** reúne categorias de riscos em aplicações web, como falhas de controle de acesso, injeção e configurações inseguras.

- **XSS.** Conteúdo indevido é interpretado como script no navegador. Uma defesa central é codificar a saída conforme o contexto em que será exibida.
- **CSRF.** O navegador envia uma ação indesejada a um site em que a pessoa já tem sessão ativa. Tokens CSRF e cookies com o atributo `SameSite` ajudam a proteger essas ações.

Em **dispositivos móveis**, a unidade destaca permissões mínimas, armazenamento seguro de credenciais e proteção de tráfego. Em **inteligência de ameaças**, um **IOC** é um indicador observado, como um hash associado a malware. **TTPs** descrevem padrões de comportamento por meio de táticas, técnicas e procedimentos.

> [!note] Versão do NIST CSF
> O slide apresenta cinco funções. **Identificar, Proteger, Detectar, Responder e Recuperar**. Se a questão especificar **CSF 2.0**, inclua também **Governar**. [NIST Cybersecurity Framework 2.0](https://doi.org/10.6028/NIST.CSWP.29)

## Unidade 8 — Criptografia, assinaturas digitais e blockchain

**Substituição** troca os símbolos, como nas cifras de César e Vigenère. **Transposição** muda a ordem dos símbolos. **Esteganografia** esconde a existência da mensagem.

| Recurso | Para que serve | O que lembrar |
| --- | --- | --- |
| **Criptografia simétrica** | Proteger a confidencialidade de grandes volumes de dados | Usa a mesma chave secreta para cifrar e decifrar. Exemplo **AES**. |
| **Criptografia assimétrica** | Permitir operações como autenticação, assinatura e estabelecimento de chaves | Usa um par de chaves, uma pública e outra privada. **RSA** e algoritmos de curvas elípticas pertencem a essa família. |
| **Hash** | Gerar um resumo para verificar a integridade | É de mão única. O **SHA-256** produz 256 bits, normalmente representados por 64 caracteres hexadecimais. Uma pequena mudança no arquivo altera o resumo. |
| **Assinatura digital** | Verificar autoria e integridade | A chave **privada** assina. A chave **pública** verifica. |
| **Certificado digital e PKI** | Vincular uma identidade a uma chave pública | Uma autoridade certificadora atesta o vínculo dentro de uma cadeia de confiança. |

Para conferir se um PDF mudou, compare seu hash com um hash obtido de fonte confiável. Para verificar quem assinou o PDF e se ele foi alterado depois, verifique a assinatura digital.

- **TLS** combina um *handshake* para estabelecer a sessão com criptografia simétrica para proteger o tráfego. O envio de uma chave cifrada com RSA é o exemplo didático do slide. O **TLS 1.3** retirou esse mecanismo de transporte de chaves. [RFC 8446](https://www.rfc-editor.org/rfc/rfc8446)
- **Blockchain** encadeia blocos por meio de hashes. Alterações quebram a correspondência com os hashes registrados depois. A **árvore de Merkle** facilita verificar se uma transação pertence a um bloco. **Proof of Work** usa trabalho computacional, enquanto **Proof of Stake** usa participação econômica colocada em garantia.
- **Criptografia pós-quântica** busca proteger dados contra futuros computadores quânticos capazes de ameaçar algoritmos como o RSA. **ML-KEM** serve ao estabelecimento de chaves e **ML-DSA** serve a assinaturas digitais. [Padrões pós-quânticos do NIST](https://csrc.nist.gov/projects/post-quantum-cryptography)

## Mini-simulado

1. Um usuário entra com senha e biometria. Qual conceito se aplica? Qual etapa decide se ele pode excluir um pedido?
2. O sistema concede acesso pelo perfil de gerente e exige um dispositivo corporativo para consultar o financeiro. Onde entram RBAC e ABAC?
3. Uma empresa recupera os arquivos de um ransomware pelo backup, mas recebe ameaça de publicação dos dados. Que tipo de extorsão ocorreu?
4. Durante um incidente, a equipe isola um servidor e depois remove o malware. Como se chamam essas etapas?
5. Em um cenário, uma página executa script indevido no navegador. Em outro, o navegador envia uma ação indesejada usando a sessão já ativa. Qual é XSS e qual é CSRF?
6. Você quer verificar quem assinou um contrato e se o documento mudou. Qual recurso usa e com qual chave faz a verificação?

### Gabarito

1. **MFA** na autenticação. A **autorização** decide se ele pode excluir o pedido.
2. **RBAC** define o acesso pelo papel de gerente. **ABAC** aplica a condição sobre o dispositivo.
3. **Dupla extorsão.** A empresa recebeu ameaça de divulgação além do bloqueio dos arquivos.
4. **Contenção** ao isolar o servidor. **Erradicação** ao remover o malware.
5. O primeiro é **XSS**. O segundo é **CSRF**.
6. **Assinatura digital**, verificada com a **chave pública do assinante**.

## Materiais

- [AVA da FATEC — Compliance e Segurança da Informação](https://fatecead.cps.sp.gov.br/course/view.php?id=457), apresentações das unidades 5 a 8.
- [Revisão anterior — Unidades 1 a 4](Seguranca_da_Informacao_Unidades_1_a_4_Obsidian.md).
