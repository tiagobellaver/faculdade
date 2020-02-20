/******************************************************************************
* AUTHOR: Guilherme A. Madalozzo
* LAST REVISED: 25/09/18
******************************************************************************/
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int valor_global;

// Função que a Thread executa quando criada
void *Thread_Um()
{
   printf("Valor ao entrar na Thread: %d\n", valor_global);
   valor_global = 99;
   printf("Valor alterado na Thread: %d\n", valor_global);
   // Encerra a Thread
   pthread_exit(NULL);
}

// Função main do programa
int main(int argc, char *argv[])
{
   // criação do vetor de threads do tipo pthread_t
   pthread_t thread;
   
   valor_global = 10;
   
   printf("Valor antes da Thread: %d\n", valor_global);
   // Comando para criar uma Thread
   pthread_create(&thread, NULL, Thread_Um,  NULL);

   printf("Valor depois da Thread: %d\n", valor_global);
   // Última ação da main é finalizar as possíveis threads
   pthread_exit(NULL);
}