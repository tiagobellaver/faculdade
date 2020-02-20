/******************************************************************************
* AUTHOR: Guilherme A. Madalozzo
* LAST REVISED: 25/09/18
******************************************************************************/
#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_THREADS  2 // Quantidades de Threads a serem criadas
#define PI  3.1415 // Quantidades de Threads a serem criadas

float a, b, c;
int end_thread_um;
int end_threads;

// Função que a Thread executa quando criada
void *Thread_Um()
{
   b = a * PI;
   end_thread_um = 1;
   end_threads++;
   // Encerra a Thread
   pthread_exit(NULL);
}

// Função que a Thread executa quando criada
void *Thread_Dois()
{
   c = b * PI;
   end_threads++;
   // Encerra a Thread
   pthread_exit(NULL);
}

// Função main do programa
int main(int argc, char *argv[])
{
   time_t t_ini, t_fim;
   float tempo;

   t_ini = time(NULL);
   end_thread_um = end_threads = a = b = c = 0;
   // criação do vetor de threads do tipo pthread_t
   pthread_t threads[NUM_THREADS];
   a = 5;
   // Comando para criar uma Thread
   pthread_create(&threads[0], NULL, Thread_Um, NULL);
   while(end_thread_um < 0);
   pthread_create(&threads[1], NULL, Thread_Dois, NULL);
   while(end_threads < NUM_THREADS);

   printf("Resultados:\n# a: %f \n# b: %f \n# c: %f \n", a, b, c);

   t_fim = time(NULL);
   tempo = difftime(t_fim, t_ini);
   printf("Tempo de execucao: %f\n", tempo);

   // Última ação da main é finalizar as possíveis threads
   pthread_exit(NULL);
}