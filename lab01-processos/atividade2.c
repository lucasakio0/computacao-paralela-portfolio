 # include <stdio.h>
 # include <unistd.h>
 # include <sys/wait.h>
 int main(){
   for(int i = 0; i<4; i++){
      pid_t ids = fork(); //para fazermos um pai ter 4 processos filhos precisamos usar um for
      //caso contrario acabamos fazendo filhos dos filhos
      if (ids<0){
         fprintf(stderr, "Erro em criar processos filhos!\n");
      }
      else if(ids == 0){
         printf("Filho %d com ID de %d \n", i+1, getpid());
         return 0;

      }
   }
   for(int j = 0; j<4; j++){
        wait(NULL); //aqui sincronizo todos os filhos para evitar processos zumbis.
   }
   printf("Todos os filhos terminaram.");
}
 