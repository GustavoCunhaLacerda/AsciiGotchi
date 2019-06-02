# AsciiGotchi  (¯ ▽ ¯) ノ

## O que é um Tamagotchi?
<p align="justify">O Tamagotchi®, é um brinquedo japonês lançado em 1996 pela Bandai©
.A motivação deste brinquedo consiste em cuidar de um monstrinho virtual como
se fosse real, alimentando-o, dando-lhe carinho, limpando-o, dentre outras
atividades. Além disso, o monstrinho virtual, ao longo do tempo, se
desenvolve e vai envelhecendo. Caso o monstrinho não seja bem cuidado
pelo seu dono, há uma possibilidade de que ele venha a falecer.</p>

## E o AsciiGotchi? 
<p align="justify">Neste projeto criaremos uma versão simplificada de Tamagotchi chamada
AsciiGotchi. Nosso monstrinho virtual será representado por um símbolo na tabela
ASCII (figura 2), variando de “@”, quando o monstrinho é apenas um ovo” até “Z”,
quando o monstrinho já é um senhor de idade pronto para partir…”.</p>


## Especificações do projeto

### Interface dom o usuário (TELA Padrão):
<p>A cada segundo, a tela deve ser atualizada mostrando:</p>
<ul>
  <li> Nome, tempo de vida, o status fome, felicidade e higiene do monstrinho </li>
  <li> O monstrinho (formado por um bloco 2x2 usando o símbolo ASCII referente ao seu estágio de evolução </li>
  <li> Opções do usuário: (1)Comida (2)Carinho (3)Banho (4).... </li>
</ul>

### Características do monstro ASCII:
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
  <li>Grau de evolução: é indicado por 4 caracteres ASCII (bloco 2x2) variando de “@” a “Z” (é o próprio monstrinho<a/li>
</ul>
  
### Ações do usuário:
<p>
O usuário pode a cada 10 segundos agir com seu monstrinho selecionando
alguma das seguintes opções:</p>
<ol>
  <li><b>Comida:</b> Fornece alimentação ao monstrinho</br>
      a. Deve aparecer a mensagem: “<nomeMonstro> hora de
comer!\n”, “Humm, que delícia mestre!\n”</br>
      b. Esta ação diminui em 2 o grau de fome e diminui em 2 a higiene
do monstrinho</li>
  <li><b>Carinho:</b> Fornece felicidade ao monstrinho</br>
      a. Deve aparecer a mensagem: “O carinho do mestre me faz bem
:) \n”</br>
      b. Esta ação aumenta em 3 ao grau de felicidade e aumenta em 1
o grau de fome</li>
  <li><b>Banho:</b> Limpa o monstrinho</br>
      a. Deve aparecer a mensagem: “<nomeMonstro> hora do
banho!\n”, “Naooooooo!\n”</br>
      b. Esta ação aumenta em 7 o grau de higiene e diminui em 4 o
grau de felicidade</li>
  <li><b>… :</b> Ignora o monstro</br>
      a. Basicamente esta ação não faz absolutamente nada</li>
</ol>
<p align="justify">Caso o usuário digite outra opção, deve-se exibir a mensagem “O que foi isso
mestre?! O que queria de mim?” e reduzir 5 pontos do grau felicidade do
monstrinho.</br>
O usuário só poderá dar alguma ação novamente na próxima rodada (em 10
segundos).</br>
Obs.: o tempo é parado no momento em que o usuário precisa digitar alguma ação.</p>

### Andamento do Jogo:
<p align="justify">
--> O jogo começa perguntando ao usuário “Qual o nome do monstrinho Ascii?”.
Após isso, é apresentada a tela inicial com o monstrinho formado por um bloco 2x2
com o caractere “@”, indicando que o monstrinho ainda é um ovo.</br></br>
--> No 9° segundo de vida, o ovo deve eclodir, ou seja deve-se transformar o ovo
em um bloco 2x2 de caracteres “A”. No próximo segundo (10º segundo de vida e em
todos os múltiplos de 10 segundos) é dada a chance do usuário interagir com o
monstrinho.</br></br>
--> A cada ação do usuário, caso essa ação envolva a exibição de uma
mensagem, essa mensagem deve ficar disponível por 2 segundos e depois sumir da
tela (esses dois segundos devem ser atualizados na tela do jogo).</br></br>
--> O monstrinho evolui a cada XX segundos, onde XX é o decimal
correspondente ao caractere ASCII que ele é formado (ex.: o caractere ‘A’ é
mapeado no decimal 65, ou seja, ele se tornará ‘B’ em 65 segundos). Ao evoluir,
deve aparecer uma mensagem por dois segundos: “Parabéns <nomeMonstro>
evoluiu!”</br></br>
--> A cada 5 segundos (apenas depois de ter nascido) nosso monstrinho pode
aleatoriamente: ficar com fome (grau de fome é incrementado em 1); ou ficar
carente (grau de felicidade decrementado em 1); ou se sujar (grau de higiene
decrementado em 1).</p>
<p></br>==> Situações em que o monstrinho morre (“Game over!”):</p>
<ul>
  <li>“<nomeMonstro> morreu de fome! :( \n”</br>
    ○ Ocorre quando o grau de fome chega a 15</li>
  <li>“<nomeMonstro> morreu de bucho cheio!\n”</br>
    ○ Ocorre quando o grau de fome chega a zero</li>
  <li> “<nomeMonstro> morreu de desgosto =| \n”</br>
    ○ Ocorre quando o grau de felicidade chega a zero</li>
  <li>“<nomeMonstro> morreu de rir :D ops... :( \n”</br>
    ○ Ocorre quando o grau de felicidade chega a 15</li>
  <li>“<nomeMonstro> morreu de uma doença infecciosa! \n”</br>
    ○ Ocorre quando o grau de higiene chega a 0</li>
  <li>“<nomeMonstro> morreu por falta de anticorpos!\n”</br>
    ○ Ocorre quando o grau de higiene chega a 15</li>
  <li>“<nomeMonstro> teve uma bela vida :)”</br>
    ○ Ocorre quando o monstro chegar ao estágio de evolução “Z”</li>
</ul>
<p>Nas situações de morte, além de exibir as mensagens acima, deve-se terminar o
programa.</p>

## TAREFAS ┌ (> _ <) ┘
#### Base:
- [ ] **Função Principal**
- [ ] Informações do monstro
- [ ] Tela com layout principal
- [ ] Função de perda de status natural
- [ ] Função com a animação base
#### Escolhas:
- [ ] Função para entrada no ramo de escolhas
- [ ] Ramo de Comida
- [ ] Ramo de Carinho
- [ ] Ramo de Banho
- [ ] Ramo de Ignorar
- [ ] Ramo de Escolha Inexistente
#### Morte:
- [ ] Função para aglutinação de mortes
- [ ] Ramo de morte por muita fome
- [ ] Ramo de morte por comer muito
- [ ] Ramo de morte por baixa felicidade (desgosto)
- [ ] Ramo de morte por muita felicidade (rir muito)
- [ ] Ramo de morte por baixa higiene (infecção)
- [ ] Ramo de morte por muita higiene (sem anticorpos)
- [ ] Ramo de morte por level máximo (Z)
#### Opcional:
- [ ] Animação diferente para movimento padrão com 3 estágios
- [ ] Animações adicionais na hora da morte
- [ ] Animações adicionais na hora das escolhas
 










