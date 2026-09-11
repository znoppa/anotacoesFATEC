# Resumo pré-prova — Desenvolvimento Web

Este resumo reúne o conteúdo disponível nas anotações e nos exemplos da disciplina: fundamentos de HTML, links, imagens, listas, tabelas, formulários, frames e introdução ao CSS.

## 1. HTML e estrutura básica

HTML (*HyperText Markup Language*) é uma **linguagem de marcação** usada para estruturar e dar significado ao conteúdo de uma página. A aparência deve ser controlada principalmente pelo CSS.

```html
<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Minha página</title>
</head>
<body>
  Conteúdo visível
</body>
</html>
```

- `<!DOCTYPE html>`: informa o uso do HTML5.
- `<html>`: elemento raiz; `lang="pt-BR"` informa o idioma.
- `<head>`: metadados e configurações.
- `charset="UTF-8"`: permite acentos e caracteres especiais.
- `viewport`: adapta a página a celulares e tablets.
- `<title>`: texto exibido na aba do navegador.
- `<body>`: conteúdo visível e interativo.

Uma **tag** determina o elemento; um **atributo** acrescenta uma informação:

```html
<a href="pagina.html">Abrir página</a>
```

Nesse exemplo, `a` é a tag e `href` é o atributo.

## 2. Tags de texto

| Tag | Função |
|---|---|
| `<h1>` a `<h6>` | Títulos, em ordem decrescente de importância |
| `<p>` | Parágrafo |
| `<br>` | Quebra de linha |
| `<hr>` | Separação temática |
| `<strong>` | Grande importância, geralmente em negrito |
| `<em>` | Ênfase, geralmente em itálico |
| `<b>` e `<i>` | Destaque apenas visual |
| `<mark>` | Texto marcado ou realçado |
| `<small>` | Observação secundária |
| `<del>` e `<ins>` | Conteúdo removido e inserido |
| `<sub>` e `<sup>` | Subscrito e sobrescrito |
| `<code>` | Pequeno trecho de código |
| `<pre>` | Preserva espaços e quebras de linha |

```html
<h1>Introdução ao HTML</h1>
<p>HTML é uma linguagem de <strong>marcação</strong>.</p>
<p>Água: H<sub>2</sub>O — potência: 2<sup>2</sup>.</p>
```

Tags antigas como `<font>`, `<center>`, `<u>`, `<s>` e `<marquee>` podem aparecer nos exemplos, mas são obsoletas ou inadequadas para apresentação moderna. Prefira CSS.

## 3. Links e caminhos

A âncora `<a>` cria um hiperlink. O destino fica em `href`.

```html
<a href="https://www.example.com">Link externo</a>
<a href="exemplo2.html">Outro arquivo</a>
<a href="#contato">Ir para contato</a>

<h2 id="contato">Contato</h2>
```

- URL absoluta: contém protocolo e domínio completos.
- `./`: pasta atual.
- `../`: pasta imediatamente superior.
- `#identificador`: elemento da página que possui o `id` correspondente.
- `target="_blank"`: abre em outra aba; em links externos, use também `rel="noopener noreferrer"`.

Prefira textos descritivos no link em vez de “clique aqui”. Para âncoras internas, a forma moderna é aplicar `id` ao elemento de destino, em vez de usar `<a name="...">`.

## 4. Imagens

```html
<img src="./assets/foto.jpg" alt="Descrição da foto" width="200">
```

| Atributo | Função |
|---|---|
| `src` | Caminho ou URL da imagem |
| `alt` | Descrição alternativa e acessível |
| `width` | Largura |
| `height` | Altura |

`<img>` é um elemento vazio, portanto não possui tag de fechamento. O `alt` deve transmitir a finalidade da imagem; se ela for apenas decorativa, pode ser `alt=""`.

Uma imagem pode ser usada como link:

```html
<a href="https://www.google.com">
  <img src="google.png" alt="Acessar o Google">
</a>
```

Evite distorcer a proporção da imagem. Em layouts modernos, dimensões e ajustes como `object-fit` costumam ser controlados por CSS.

## 5. Listas

```html
<ul>
  <li>Item sem ordem</li>
</ul>

<ol>
  <li>Primeiro item</li>
</ol>
```

- `<ul>`: lista não ordenada, normalmente com marcadores.
- `<ol>`: lista ordenada, normalmente numerada.
- `<li>`: item de uma lista.
- Listas podem ser aninhadas, colocando uma nova `<ul>` ou `<ol>` dentro de um `<li>`.

## 6. Tabelas

```html
<table>
  <caption>Notas</caption>
  <thead>
    <tr><th>Aluno</th><th>Nota</th></tr>
  </thead>
  <tbody>
    <tr><td>Ana</td><td>9,0</td></tr>
  </tbody>
</table>
```

- `<table>`: tabela.
- `<caption>`: título da tabela.
- `<tr>`: linha.
- `<th>`: célula de cabeçalho.
- `<td>`: célula de dados.
- `<thead>`, `<tbody>` e `<tfoot>`: agrupam semanticamente as partes.
- `colspan`: faz uma célula ocupar várias colunas.
- `rowspan`: faz uma célula ocupar várias linhas.

Tabelas servem para dados tabulares, não para montar o layout da página.

## 7. Formulários

```html
<form action="destino" method="post">
  <label for="nome">Nome:</label>
  <input id="nome" name="nome" type="text" required>

  <button type="submit">Enviar</button>
</form>
```

- `<form>`: envolve os controles.
- `action`: destino dos dados.
- `method="get"`: envia os valores na URL; adequado para buscas e filtros.
- `method="post"`: envia os valores no corpo da requisição; adequado para cadastros e alterações.
- `<label for="id">`: associa um rótulo ao controle e melhora a acessibilidade.
- `name`: nome usado no envio do dado.
- `required`: torna o preenchimento obrigatório.

Tipos comuns de `<input>`: `text`, `password`, `email`, `number`, `date`, `radio`, `checkbox`, `file`, `submit` e `reset`. Também aparecem `<textarea>` para textos longos e `<select>` com `<option>` para uma lista de escolhas.

Em botões de opção (`radio`), controles com o mesmo `name` formam um grupo no qual apenas uma opção pode ser marcada. Em caixas de seleção (`checkbox`), várias opções podem ser escolhidas.

## 8. Frames e divisão da página

Os exemplos incluem `frameset`, `frame` e `iframe`.

- `<iframe>` incorpora outra página dentro da página atual.
- `<frameset>` e `<frame>` pertencem a versões antigas do HTML e são obsoletos no HTML5.
- Hoje, a divisão do layout é feita com elementos semânticos e CSS; um `iframe` deve ser usado apenas quando a incorporação de outro documento for realmente necessária.

## 9. Introdução ao CSS

CSS (*Cascading Style Sheets*) controla a apresentação: cores, fontes, tamanhos, espaçamento, posicionamento e responsividade.

```css
seletor {
  propriedade: valor;
}
```

Formas de aplicar CSS:

1. **Inline:** atributo `style` no elemento; evite para projetos maiores.
2. **Interno:** regras dentro de `<style>` no `<head>`.
3. **Externo:** arquivo `.css` ligado à página; é a forma mais reutilizável.

```html
<link rel="stylesheet" href="estilo.css">
```

Seletores principais:

```css
p { color: navy; }        /* elemento */
.destaque { color: red; } /* classe, reutilizável */
#topo { padding: 10px; }  /* id, identificador único */
```

## 10. Propriedades CSS vistas nos exemplos

- Texto e fontes: `color`, `font-family`, `font-size`, `font-weight`, `line-height`, `text-align`.
- Fundo: `background-color`, `background-image`.
- Dimensões: `width`, `height`, `min-height`, `max-width`.
- Espaçamento: `margin` é o espaço externo; `padding` é o espaço interno.
- Bordas e efeitos: `border`, `border-radius`, `box-shadow`.
- Imagens: `object-fit: cover` preenche a área preservando a proporção, podendo recortar.
- Posicionamento: `position: relative` cria uma referência; `position: absolute` posiciona em relação ao ancestral posicionado mais próximo.
- `box-sizing: border-box`: inclui borda e preenchimento no tamanho declarado.
- `float`: desloca elementos lateralmente; `clear: both` impede que o próximo elemento continue ao lado deles. É uma técnica antiga de layout.

### Centralização com Flexbox

```css
body {
  min-height: 100vh;
  display: flex;
  justify-content: center;
  align-items: center;
}
```

- `display: flex`: ativa o Flexbox.
- `justify-content`: alinha no eixo principal.
- `align-items`: alinha no eixo transversal.
- `100vh`: altura total da janela visível.

### Medidas úteis

- `px`: unidade fixa em pixels.
- `%`: relativa ao tamanho do elemento pai.
- `rem`: relativa ao tamanho da fonte do elemento raiz.
- `vw` e `vh`: relativas à largura e à altura da janela.
- `clamp(mínimo, ideal, máximo)`: cria um valor fluido limitado.
- `margin: 0 auto`: pode centralizar horizontalmente um bloco que possua largura definida.

## 11. Box model

Todo elemento é tratado como uma caixa composta por:

1. **conteúdo**;
2. **padding** (espaço interno);
3. **border** (borda);
4. **margin** (espaço externo).

```css
.caixa {
  width: 300px;
  padding: 20px;
  border: 2px solid black;
  margin: 10px;
  box-sizing: border-box;
}
```

Com `border-box`, os 300 px já incluem conteúdo, padding e borda. Sem essa regra, padding e borda são somados à largura.

## 12. Boas práticas para a prova

- Separe **estrutura** (HTML) de **apresentação** (CSS).
- Use tags semânticas e respeite a hierarquia dos títulos.
- Feche corretamente os elementos que exigem fechamento e aninhe-os na ordem correta.
- Use `alt` em imagens e `label` em campos de formulário.
- Prefira caminhos relativos para arquivos internos do projeto.
- Não use `<br>` para criar layout ou grandes espaços; use CSS.
- Evite recursos obsoletos como `<font>`, `<center>`, `<marquee>`, `<frameset>` e `<frame>`.
- Verifique contraste, foco visível e legibilidade.

## Revisão-relâmpago

- **HTML estrutura; CSS estiliza.**
- **Tag** cria o elemento; **atributo** configura o elemento.
- `href` é o destino de um link; `src` é a origem de uma imagem.
- `class` pode ser reutilizada; `id` deve identificar um elemento específico.
- `margin` fica fora; `padding` fica dentro.
- `GET` expõe os parâmetros na URL; `POST` envia no corpo da requisição.
- `float`/`clear` são técnicas antigas; Flexbox é mais apropriado para muitos layouts atuais.

