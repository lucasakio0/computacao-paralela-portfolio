# include <stdio.h>
# include <unistd.h>
# include <sys/wait.h>

int main () {
 pid_t id = fork(); //pid_t declara uma variavel chamada ID, e pid_t é um identificador de processos
 //O fork aqui vai criar um novo processo "duplicando", esse será um filho do processo inicial!
 if (id<0){
   fprintf(stderr, "Houve um erro na criação do processo filho!"); //Valor negativo simboliza que houve um erro na criação de processo filho
 }
 else if (id == 0) {
   printf("Sou o processo filho!, meu processo e de %d!\n", getpid()); //pid retorna 0 para simbolizar que esse é o filho.
 }
 else { //processo pai 
   printf("Sou o processo pai!, meu processo é de %d!\n", getpid());
   wait(NULL); // Espera o processo filho terminar
   printf("O processo filho terminou, então vou finalizar.\n"); 
 }


 return 0;
}