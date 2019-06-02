# AsciiGotchi  (¯ ▽ ¯) ノ

## O que é um Tamagotchi?
<p align="justify">O Tamagotchi®, é um brinquedo japonês lançado em 1996 pela Bandai©
.A motivação deste brinquedo consiste em cuidar de um monstrinho virtual como
se fosse real, alimentando-o, dando-lhe carinho, limpando-o, dentre outras
atividades. Além disso, o monstrinho virtual, ao longo do tempo, se
desenvolve e vai envelhecendo. Caso o monstrinho não seja bem cuidado
pelo seu dono, há uma possibilidade de que ele venha a falecer</p>

## E o AsciiGotchi? 
<p align="justify">Neste projeto criaremos uma versão simplificada de Tamagotchi chamada
AsciiGotchi. Nosso monstrinho virtual será representado por um símbolo na tabela
ASCII (figura 2), variando de “@”, quando o monstrinho é apenas um ovo” até “Z”,
quando o monstrinho já é um senhor de idade pronto para partir…”.</p>


## Especificações do projeto:

### Interface dom o usuário (TELA Padrão)
<p>A cada segundo, a tela deve ser atualizada mostrando:</p>
<ul>
  <li> Nome, tempo de vida, o status fome, felicidade e higiene do monstrinho </li>
  <li> O monstrinho (formado por um bloco 2x2 usando o símbolo ASCII referente ao seu estágio de evolução </li>
  <li> Opções do usuário: (1)Comida (2)Carinho (3)Banho (4).... </li>
</ul>

### Características do monstro ASCII
<p>Todo monstro Ascii possui as seguintes características:</p>
<ul>
  <li>Nome: a ser fornecido no começo do jogo</li>
  <li>Tempo de vida: iniciado com zero no começo do jogo e alterado em uma unidade a cada segundo de jogo</br>
      ○ Obs1.: Deve ser reiniciado no momento em que ovo nasce (o monstro se torna “A”)</br>
      ○ Obs2.: Antes de nascer o tempo de vida aparece na tela com o termo “Tempo de gestação”</li>
  <li>Fome: status que indica o grau de fome do monstrinho</br>
      ○ Inicia-se com valor 10 e pode variar de 0 a 15</li>
  <li>Felicidade: status que indica o grau de felicidade do monstrinho</br>
      ○ Inicia-se com valor 10 e pode variar de 0 a 15</li>
  <li> Higiene: status que indica o grau de higiene do monstrinho</br>
      ○ Inicia-se com valor 10 e pode variar de 0 a 15</li>
  <li>Grau de evolução: é indicado por 4 caracteres ASCII (bloco 2x2) variando de “@” a “Z” (é o próprio monstrinho)</li>
 
</ul>