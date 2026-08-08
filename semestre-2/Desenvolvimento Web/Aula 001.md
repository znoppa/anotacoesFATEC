- Dinâmica das aulas
- Avaliações
	- HTML/CSS (03/09)
	- JavaScript (08/10)
	- PHP / React Nativa (26/11)
- Trabalho / Projeto ext. (26/11) -> Projeto Integrador
- Ferramentas
	- Visual Studio Code / Similar
	- Xampp + MySQL / MariaDB

Começaremos a Aula falando sobre o Visual Studio Code, que é uma Ambiente de Desenvolvimento Integrado (IDE) além de um editor de texto.

```
<!DOCTYPE html>

<html lang="en">

<head>

    <meta charset="UTF-8">

    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <title>Document</title>

</head>

<body>

</body>

</html>
```
`<html>` -> Isso é uma tag. Tags são a base da escrita de arquivos em HTML, eles quase sempre vão abrir e fechar, portanto, devem começar com `<tag>`  e terminar com `</tag>` com uma barra antes do nome da tag, mas sempre dentro dos <>

> [!DICA(DICK)]
> Notas do Quiggermann
> Também tem como instalar extensões no Visual Studio Code, mas eu só uso duas que são realmente boas.
> 	Live Server, pra você ver seu código WEB em tempo real
> 	Prettier - Code formatter, organização de Código

> [!DICA(DICK)]
> RECOMENDO TAMBÉM UM SITE PARA QUE VOCÊ ESTUDEM MAIS DAS LINGUAGENS, O W3SCHOOLS

## Tags básicas para textos

As tags HTML não servem apenas para mudar a aparência: muitas também indicam o **significado** do conteúdo. Essa informação ajuda navegadores, mecanismos de busca e tecnologias assistivas, como leitores de tela.

| Tag | Funcionalidade |
|---|---|
| `<h1>` até `<h6>` | Criam títulos e subtítulos, do mais importante (`h1`) ao menos importante (`h6`). |
| `<p>` | Define um parágrafo. |
| `<strong>` | Indica que um trecho possui grande importância; normalmente aparece em **negrito**. |
| `<em>` | Dá ênfase a um trecho; normalmente aparece em *itálico*. |
| `<b>` | Destaca visualmente o texto em negrito, sem indicar importância adicional. |
| `<i>` | Diferencia visualmente um trecho, geralmente em itálico, sem acrescentar ênfase semântica. |
| `<mark>` | Marca ou realça um trecho do texto. |
| `<small>` | Representa uma observação secundária, como avisos ou letras pequenas. |
| `<del>` | Indica um conteúdo removido ou desatualizado, geralmente exibido como ~~riscado~~. |
| `<ins>` | Indica um conteúdo adicionado, geralmente exibido sublinhado. |
| `<sub>` | Coloca o texto abaixo da linha, como em H₂O. |
| `<sup>` | Coloca o texto acima da linha, como em 2². |
| `<br>` | Insere uma quebra de linha. Não precisa de tag de fechamento. |
| `<hr>` | Cria uma separação temática entre conteúdos. Não precisa de fechamento. |
| `<code>` | Identifica um pequeno trecho de código. |
| `<pre>` | Preserva espaços e quebras de linha, sendo útil para blocos pré-formatados. |

### Exemplo

```html
<h1>Introdução ao HTML</h1>

<p>
  HTML é uma linguagem de <strong>marcação</strong> usada para estruturar
  páginas. Este trecho tem <em>ênfase</em> e esta palavra está
  <mark>destacada</mark>.
</p>

<p>A água é representada por H<sub>2</sub>O.</p>
<p>Dois ao quadrado é 2<sup>2</sup>.</p>
<p>Preço anterior: <del>R$ 50,00</del>. Novo preço: <ins>R$ 40,00</ins>.</p>
```

> [!important] HTML e CSS possuem funções diferentes
> O HTML descreve a estrutura e o significado do conteúdo. Para controlar cores, fontes, tamanhos, alinhamento e espaçamento, deve-se utilizar CSS.

## Estrutura do documento e hiperlinks

### Estrutura básica

- `<!DOCTYPE html>` informa ao navegador que o documento utiliza HTML5. Apesar da aparência, essa declaração não é uma tag HTML.
- `<html>` representa o elemento principal da página e contém todos os demais elementos.
- O atributo `lang` informa o idioma predominante do documento. Para uma página em português do Brasil, o valor adequado é `pt-BR`; `en` representa inglês.
- `<head>` reúne metadados e configurações que não fazem parte do conteúdo principal exibido na página.
- `<meta charset="UTF-8">` define a codificação de caracteres e permite representar corretamente acentos, símbolos e caracteres especiais.
- A configuração `viewport` adapta as dimensões da página à tela do dispositivo, sendo essencial para layouts responsivos em celulares e tablets.
- `<title>` define o texto apresentado na aba do navegador e também ajuda mecanismos de busca e favoritos a identificar a página.
- `<body>` contém o conteúdo visível e interativo, como títulos, textos, links, imagens e formulários.

### Tags e atributos

Uma **tag** determina o tipo de elemento, enquanto um **atributo** acrescenta informações ou configura seu comportamento. Os atributos são escritos na tag de abertura e normalmente seguem a estrutura `nome="valor"`.

No exemplo, `href`, `target`, `rel`, `lang`, `charset`, `name` e `content` são atributos. Cada atributo possui uma finalidade e nem todos podem ser utilizados em qualquer elemento.

### A tag de hiperlink

A tag `<a>`, chamada de **âncora**, cria hiperlinks. O texto colocado entre sua abertura e seu fechamento é a parte clicável do link.

O atributo `href` informa o destino e pode representar diferentes tipos de navegação:

| Tipo de link | Funcionamento |
|---|---|
| **Externo** | Usa um endereço completo para levar o usuário a outro site, como uma página do Google. |
| **Interno ou relativo** | Aponta para outro arquivo do mesmo projeto, usando um caminho relativo à página atual. |
| **Âncora interna** | Usa `#` seguido de um identificador para navegar até uma seção da própria página. |

### Caminhos absolutos e relativos

Um **endereço absoluto** contém a URL completa, incluindo protocolo e domínio. Ele é utilizado principalmente para recursos externos.

Um **caminho relativo** parte da localização do arquivo atual:

- `./` representa a pasta atual.
- `../` representa a pasta imediatamente superior.
- Um nome de arquivo sem prefixo também procura o recurso na pasta atual.

Caminhos relativos facilitam a movimentação do projeto entre computadores e servidores, desde que a organização interna das pastas seja mantida.

### Abrindo links em outra aba

O atributo `target="_blank"` solicita que o navegador abra o destino em uma nova aba ou janela. Quando ele é utilizado, recomenda-se adicionar `rel="noopener noreferrer"`:

- `noopener` impede que a página aberta controle a página de origem por meio de `window.opener`.
- `noreferrer` evita o envio do endereço da página de origem no cabeçalho de referência.

Essa combinação melhora a segurança e a privacidade ao abrir páginas externas.

### Navegação dentro da página

Links internos permitem criar um índice e levar o usuário diretamente a uma seção específica. O destino deve possuir um atributo `id`, e o `href` do link deve repetir esse identificador depois de `#`.

> [!important] Forma moderna de criar âncoras
> Embora códigos antigos utilizem o atributo `name` em uma tag `<a>` vazia, no HTML moderno é preferível aplicar `id` diretamente ao título ou à seção de destino. Identificadores simples, como `parte-1` e `voltar-ao-topo`, são mais claros do que valores com espaços.

Para criar a ação “Voltar ao topo”, define-se um identificador próximo ao início da página e todos os links de retorno apontam para ele. O mesmo princípio pode ser usado para acessar as partes 1, 2 e 3.

### Tags auxiliares presentes no exemplo

- `<h1>` identifica o título principal da página. Em geral, deve representar claramente o assunto central do documento.
- `<p>` organiza o conteúdo em parágrafos e adiciona significado estrutural ao texto.
- `<br>` força uma quebra de linha, mas não deve ser utilizado para criar grandes espaços ou estruturar o layout; para isso, utiliza-se CSS.

> [!tip] Boas práticas para links
> O texto clicável deve indicar claramente o destino. Expressões descritivas são mais acessíveis do que textos genéricos como “clique aqui”. Também é importante verificar caminhos relativos e evitar links quebrados.

## Imagens e hiperlinks visuais

### A tag de imagem

A tag `<img>` incorpora uma imagem à página. Ela é um **elemento vazio**, ou seja, não envolve conteúdo e não possui tag de fechamento.

Seus principais atributos são:

| Atributo | Função |
|---|---|
| `src` | Informa o caminho ou endereço do arquivo de imagem. |
| `alt` | Fornece uma descrição textual alternativa. |
| `width` | Define a largura exibida da imagem. |
| `height` | Define a altura exibida da imagem. |

O atributo `src` aceita tanto endereços externos quanto caminhos relativos. Um caminho iniciado por `./assets/` procura o arquivo dentro da pasta `assets`, localizada junto ao documento HTML atual.

### Texto alternativo e acessibilidade

O atributo `alt` deve comunicar a finalidade da imagem quando ela não puder ser vista. Ele é utilizado por leitores de tela e também aparece como alternativa quando o arquivo não é carregado.

- Em uma imagem que funciona como link, o texto alternativo deve indicar o destino ou a ação, como o nome do site acessado.
- Em uma imagem informativa, deve transmitir a informação relevante apresentada visualmente.
- Em uma imagem puramente decorativa, pode ser vazio (`alt=""`) para que leitores de tela a ignorem.

> [!important] O nome do arquivo não substitui o `alt`
> Um nome como `logo_google.png` ajuda a organizar o projeto, mas não oferece ao usuário a mesma informação acessível fornecida pelo atributo `alt`.

### Imagem como hiperlink

Quando uma tag `<img>` é colocada dentro de uma tag `<a>`, toda a área da imagem se torna clicável. O `href` da âncora determina o destino, enquanto o `alt` da imagem descreve esse link para quem não consegue visualizar o conteúdo.

Logotipos podem ser usados como links para serviços externos, mas é recomendável deixar visualmente claro que são elementos interativos. Estados de foco visíveis também permitem que pessoas que navegam pelo teclado identifiquem qual link está selecionado.

### Dimensões e proporção

Os atributos HTML `width` e `height` recebem valores numéricos que representam pixels, normalmente sem escrever `px`. Informar as duas dimensões ajuda o navegador a reservar espaço antes de carregar a imagem e reduz mudanças inesperadas no layout.

Entretanto, forçar a mesma largura e altura em uma imagem que não é quadrada pode distorcê-la. Para criar layouts responsivos e preservar a proporção, é preferível controlar a apresentação com CSS, utilizando propriedades como `width`, `height` e `object-fit`.

## Apresentação visual: HTML antigo e CSS moderno

O exemplo utiliza atributos de apresentação diretamente no HTML. Eles ajudam a reconhecer códigos antigos, mas não são recomendados em páginas modernas:

| Recurso antigo | Problema | Alternativa moderna |
|---|---|---|
| `background` no `<body>` | Mistura conteúdo com apresentação. | Propriedade CSS `background-image`. |
| `text` no `<body>` | Aplica uma cor geral de maneira pouco flexível. | Propriedade CSS `color`. |
| `<marquee>` | Elemento obsoleto, sem comportamento padronizado e com possíveis problemas de acessibilidade. | Animações CSS, usadas com moderação. |
| `scrollamount` | Funciona apenas com o elemento obsoleto `<marquee>`. | Duração e velocidade configuradas por CSS. |

Separar HTML e CSS traz algumas vantagens:

- Mantém o HTML concentrado na estrutura e no significado do conteúdo.
- Permite reutilizar o mesmo estilo em várias páginas.
- Facilita manutenção, responsividade e adaptação visual.
- Oferece mais controle sobre contraste, movimento e acessibilidade.

### Movimento e acessibilidade

Textos que se deslocam continuamente podem dificultar a leitura e causar desconforto. Quando uma animação realmente for necessária, ela deve ser lenta o suficiente para leitura, permitir interrupção quando possível e respeitar a preferência do sistema por movimento reduzido.

> [!warning] Contraste não depende apenas da cor do texto
> Aplicar texto branco não garante legibilidade sobre qualquer imagem de fundo. É necessário verificar o contraste em toda a área utilizada e, quando preciso, adicionar uma cor de fundo, sobreposição ou sombra adequada.
