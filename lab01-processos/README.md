# Laboratório 01 - [Fundamento sobre Processos]

## Objetivos
- Compilar e executar um programa C com GCC
-  Explicar o que é um processo e como ele é representado no sistema operacional
-  Utilizar fork() para criar processos filhos
-  Identificar a diferença entre código executado pelo pai e pelo filho
-  Utilizar wait() para sincronizar processos
-  Github Documentar suas descobertas no GitHub

## Códigos desenvolvidos
### atividade1.c
 Na atividade 1 foi realizada um teste onde deveriamos fazer o processo pai e o processo filho se identificarem, de tal maneira a entender mais profundamente o funcionamento dos forks.
 [Resolução 1](imagens/problema1.png)

### atividade2.c
 Na atividade 2 houveram mais desafios relacionados a execução dos forks, uma vez que eles acabavam criando muito mais do que 4, uma vez que se não forem feitos dentro de um for, os processos filhos acabam por executar o código também causando a execução descontrolada e deixando clara a importância de adicionar o "return 0" ao fim do processo, evitando processos zumbis e garantindo que os mesmos continuem executando ao longo do código.

#### Dificuldades

 Até que descobrisse o funcionalidade do return 0 e que deveria um for o código não funcionava como desejado e acabava por criar muitos outros PIDS, causando muita confusão no que havia de errado, como pode-se ver na imagem a seguir: 
 [Problema 1](imagens/problema1.png)
 [Problema 2](imagens/problema2.png)
 Mas por fim ao descobrir o que havia de errado tudo deu certo! 
 Imagem da resolução : 
 [Resolução 2](imagens/resuolucao2.png)