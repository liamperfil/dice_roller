# Simulador de Dados Online com Chance Controlada
## Dinamica de jogos de azar

Este projeto consiste em um simulador de lançamento de três dados interativo, construído com HTML, CSS e JavaScript. Ele oferece uma experiência visual de rolagem de dados e apresenta os resultados na tela.

## Funcionalidades

* **Lançamento de Três Dados:** Simula o lançamento de três dados de seis faces simultaneamente.
* **Animação de Rolagem:** Ao clicar no botão "Lançar Dado", os dados exibem uma animação de rotação para simular o movimento.
* **Exibição de Resultados:** Após a animação, os valores de cada dado são mostrados individualmente e a combinação dos três resultados é apresentada.
* **Chance Controlada:** O sistema implementa uma lógica que permite ao editor (através da modificação do código JavaScript) influenciar a probabilidade de ocorrência de resultados específicos, como dois ou três dados com o mesmo valor.
* **Informações de Chance:** Durante o processo, informações sobre a chance configurada e um número aleatório interno ("sorte") são brevemente exibidas para ilustrar a lógica de controle de resultados.

## Como Usar

1.  **Abra o arquivo `index.html`** (ou o nome do arquivo HTML principal) em seu navegador web.
2.  **Clique no botão "Lançar Dado"** para iniciar a simulação.
3.  Observe a animação dos dados.
4.  O resultado do lançamento será exibido abaixo dos dados.
5.  Informações sobre a "chance" e o número da "sorte" também serão mostradas temporariamente.

## Dinâmica do Simulador

Ao clicar no botão de lançamento:

1.  Uma animação de "girar" é aplicada aos elementos visuais dos dados.
2.  Imagens dos dados são trocadas rapidamente para criar a ilusão de rolagem.
3.  Após um período, a animação cessa e os resultados finais são determinados por uma lógica JavaScript.
4.  Essa lógica considera uma "chance" predefinida para manipular a probabilidade de obter certos padrões de resultados (por exemplo, dois ou três números iguais). Um número aleatório interno ("sorte") é comparado com essa chance para decidir se o resultado seguirá essa tendência.
5.  Os valores finais dos dados são exibidos, e as imagens correspondentes são mostradas.

## Manipulação de Resultados (Para o Editor)

A probabilidade de resultados específicos pode ser ajustada modificando as seguintes variáveis no código JavaScript (dentro da tag `<script>`):

* `chance = 42;`: Esta variável (expressa em porcentagem) define a probabilidade de que pelo menos dois dos três dados mostrem o mesmo valor. Aumentar este valor tornará mais provável a ocorrência de pares ou trios.
* `chanceDeTres = 17;`: Esta variável (expressa em porcentagem, dentro dos casos onde há resultados iguais) define a probabilidade de que os três dados mostrem o mesmo valor.

Ao alterar esses valores, o comportamento do simulador pode ser adaptado para demonstrar diferentes distribuições de resultados.

## Arquivos

* `index.html`: A estrutura HTML da página.
* `styles.css`: (Embora o estilo esteja incorporado no HTML) Um arquivo CSS para estilos adicionais, caso seja separado.
* `dice1.png`, `dice2.png`, `dice3.png`, `dice4.png`, `dice5.png`, `dice6.png`: Imagens representando as faces dos dados.

## Notas

* Este simulador foi criado para fins de demonstração e pode ser adaptado para diversas aplicações.
* A manipulação dos resultados é feita através da lógica de programação e não reflete a aleatoriedade de lançamentos de dados reais.

---
