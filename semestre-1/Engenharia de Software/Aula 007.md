27/04/2026
Primeira aula com a **Ana Célia** 
Email: ana.portes@cps.sp.gov.br

Materiais:
**Livro: **https://engsoftmoderna.info/

----------
## Agilidade
### Manifesto ágil

Os conceitos de:
- Indivíduos e Interações 
- Software Funcional
- Colaboração com o cliente
- Resposta às mudanças
São mais valorizado que:
- Processos e Ferramentas
- Documentação Abrangente
- Negociação de Contrato
- Seguir um Plano

Características:
- Entrega incremental do software
- Equipes pequenas, comprometidas e motivadas
- Simplicidade e menos formalismo
- Comunicação e colaboração
- Satisfação do cliente

###  Modelo SCRUM
- Modelo ágil para desenvolvimento de produtos e para gerenciamento de projetos baseados em ciclo de vida iterativa-incremental.
- Foco na entrega antecipada e frequente de funcionalidades que agregam valor para o cliente.
- Não define ou detalha as práticas de engenharia.

### Papéis dentro do SCRUM

**Product Owner :**
- Representando do Cliente
- Define a visão do produto
- Apresenta os requisitos do produto para o time do projeto
- Prioriza os requisitos de acordo com o valor para o cliente
- Planeja as entregas
- Responsável pelo retorno do investimento (ROI)

**Scrum Master:**
- Facilita o dia-a-dia do time do projeto
- Protege o time de interferências externas
- Garante que o time esteja funcional e produtivo
- Remove impedimentos
- Promove a comunicação
- GARANTE o uso do SCRUM
- Promove a realização de cerimônias 

**Time:**
- Aproximadamente 7 membros
- Comprometimento: O time realiza o que for preciso, dentro dos limites do projeto, para cumprir as metas acordadas 
- Próximos fisicamente
- Auto Organização
- Multidisciplinaridade: Enquanto time, todos estão aptos para realizar o serviço, porém cada pessoa tem uma afinidade maior em áreas especificas, essas pessoas priorizam tarefas que tem mais aptidão, caso termine, essas pessoas são responsáveis por ajudar em outros setores.


### Fluxo do SCRUM:

O **Product Owner** é o responsável por introduzir a ideia do projeto, por exemplo através de 
uma frase que define a visão ou escopo do projeto.

Aplicando o conceito de decomposição, pegamos a ideia e quebramos em vários setores (product backlog), serão a lista de requisitos a ser resolvido, uma lista de coisas a serem feitas. Geralmente são escritas em formato de histórias de usuário.

Entramos em um processo de desenvolvimento (Sprint), onde desenvolvemos basicamente a base a serem entregues para o usuário. Este desenv. tem um tempo definido para a realização, geralmente de 2 a 4 semanas (Sprint) e também um loop menor que geralmente tem 24 hrs, onde selecionamos o requisito que tem mais prioridade ou que devem ser melhorados a partir de uma reuniao 

----

## Atividade: Criar histórias de usuário



| ID     | Nome                           | História                                                                                                                                                                            | Detalhamento                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              | Prioridade |
| ------ | ------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| HU-001 | Realizar cadastro simplificado | Como doador, voluntário ou apoiador, quero me cadastrar de forma rápida usando WhatsApp, Google ou Facebook, para acessar o sistema sem dificuldades e receber informações da APAE. | O usuário deve conseguir realizar seu cadastro sem precisar preencher formulários longos ou criar senhas complexas. O sistema deve oferecer opções simples de entrada, como login por conta Google, Facebook ou número de WhatsApp.<br><br>Após o cadastro, os dados básicos como nome, telefone, e-mail e CPF devem ser armazenados com segurança, permitindo que o usuário acompanhe suas doações, eventos e atividades.<br><br>Essa funcionalidade deve ser pensada especialmente para usuários com pouca familiaridade tecnológica, incluindo idosos. | Alta       |
| HU-002 | Fazer uma doação via PIX       | Como doador, quero realizar uma doação via PIX de forma simples e rápida, para contribuir financeiramente com a APAE.                                                               | O usuário deverá informar o valor que deseja doar e, em seguida, o sistema deve gerar automaticamente um QR Code PIX e o código copia e cola.<br><br>Após a confirmação do pagamento, o sistema deve exibir uma mensagem de agradecimento e registrar a doação no histórico do usuário.<br><br>A tela deve ser clara, com botões grandes, valores visíveis e instruções simples para facilitar o uso.                                                                                                                                                     | Alta       |
| HU-003 | Visualizar meta de doações     | Como doador ou apoiador, quero acompanhar o progresso da meta de arrecadação, para visualizar o impacto das contribuições da comunidade.                                            | O sistema deverá apresentar uma barra de progresso, gráfico ou indicador numérico mostrando quanto já foi arrecadado e qual é a meta atual.<br><br>Essa visualização ajuda a incentivar novas doações e gera maior engajamento dos usuários.                                                                                                                                                                                                                                                                                                              | Alta       |
| HU-004 | Visualizar eventos             | Como usuário da comunidade, quero consultar os próximos eventos da APAE, para participar das ações promovidas pela instituição.                                                     | O sistema deve disponibilizar uma agenda com os próximos eventos, contendo:<br><br>* nome<br>* data<br>* horário<br>* local<br>* descrição<br><br>O usuário também deve conseguir demonstrar interesse em participar.                                                                                                                                                                                                                                                                                                                                     | Alta       |
| HU-005 | Inscrição como voluntário      | Como voluntário, quero me inscrever em eventos e informar minha disponibilidade, para ajudar a APAE nas ações e campanhas.                                                          | O sistema deverá listar os eventos disponíveis para voluntariado e permitir que o usuário selecione dias e horários em que pode colaborar.<br><br>O processo deve ser simples e objetivo.                                                                                                                                                                                                                                                                                                                                                                 | Média      |
| HU-006 | Consultar prestação de contas  | Como doador, sócio ou visitante, quero consultar a prestação de contas da APAE, para ter confiança sobre como os recursos estão sendo utilizados.                                   | O sistema deverá disponibilizar relatórios financeiros, balanços mensais, metas de arrecadação e documentos institucionais.<br><br>Essa funcionalidade é essencial para transmitir credibilidade.                                                                                                                                                                                                                                                                                                                                                         | Alta       |
| HU-007 | Visualizar feed de notícias    | Como usuário do sistema, quero acompanhar notícias, campanhas e atualizações da APAE, para me manter informado sobre as ações da instituição.                                       | O sistema deve apresentar um feed organizado por data, com imagens, textos e links externos para redes sociais.                                                                                                                                                                                                                                                                                                                                                                                                                                           | Média      |
| HU-008 | Administração de conteúdo      | omo administrador, quero cadastrar, editar e excluir postagens e eventos, para manter o sistema sempre atualizado.                                                                  | O painel administrativo deve permitir gerenciamento completo das publicações e eventos, garantindo que os usuários sempre tenham acesso às informações mais recentes.                                                                                                                                                                                                                                                                                                                                                                                     | Média      |
| HU-009 | Gestão financeira              | Como administrador, quero visualizar relatórios e valores arrecadados, para acompanhar o desempenho das campanhas.                                                                  | O sistema deverá disponibilizar relatórios detalhados com valores arrecadados, metas e histórico de doações.                                                                                                                                                                                                                                                                                                                                                                                                                                              | Alta       |
| HU-010 | Simulação para empresas        | Como empresa parceira, quero simular o benefício fiscal da doação, para entender as vantagens tributárias antes de contribuir.                                                      | O sistema deverá calcular uma estimativa de benefício com base na legislação vigente para empresas em Lucro Real.                                                                                                                                                                                                                                                                                                                                                                                                                                         | Baixa      |


HU-009 — Gerenciar arrecadações

Nome: 

História:
Como administrador, quero visualizar relatórios e valores arrecadados, para acompanhar o desempenho das campanhas.

Detalhamento:
O sistema deverá disponibilizar relatórios detalhados com valores arrecadados, metas e histórico de doações.

Importância / Prioridade: Alta

⸻

HU-010 — Simular benefício fiscal

Nome: Simulação para empresas

História:
Como empresa parceira, quero simular o benefício fiscal da doação, para entender as vantagens tributárias antes de contribuir.

Detalhamento:
O sistema deverá calcular uma estimativa de benefício com base na legislação vigente para empresas em Lucro Real.

Importância / Prioridade: Baixa