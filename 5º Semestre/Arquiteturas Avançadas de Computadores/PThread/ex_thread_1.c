/******************************************************************************
* AUTHOR: Guilherme A. Madalozzo
* LAST REVISED: 25/09/18
******************************************************************************/
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// Função que a Thread executa quando criada
void *Thread_Um()
{
  printf("# Hello World!\n");  
  // Encerra a Thread
  pthread_exit(NULL);
}

// Função main do programa
int main(int argc, char *argv[])
{
   // criação do vetor de threads do tipo pthread_t
   pthread_t thread;

   // Comando para criar uma Thread
   pthread_create(&thread, NULL, Thread_Um, NULL);

   // Última ação da main é finalizar as possíveis threads
   pthread_exit(NULL);
}


