/******************************************************************************
* AUTHOR: Guilherme A. Madalozzo
* LAST REVISED: 30/03/19
******************************************************************************/
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

// Quantidades de Threads a serem criadas - 1 2 4 16
#define NUM_THREADS  2

int by_thread = 0;
int AlliedArmy[50] = {
                        110, 120, 130, 410, 150, 160, 170, 180, 190, 919,
                        140, 240, 350, 407, 550, 460, 170, 845, 290, 199,
                        150, 240, 350, 450, 570, 690, 720, 580, 930, 299,
                        160, 240, 350, 405, 580, 607, 730, 806, 940, 997,
                        170, 240, 350, 460, 550, 690, 704, 480, 950, 969
                     };

int EnemyArmy[50]  = {
                        310, 120, 190, 412, 160, 260, 70, 10, 19,   219,
                        440, 220, 300, 402, 570, 260, 70, 84, 20,   299,
                        550, 220, 300, 420, 580, 590, 70, 80, 30,   399,
                        150, 230, 354, 234, 540, 407, 73, 86, 1940, 697,
                        190, 200, 334, 442, 510, 290, 74, 48, 1950, 569
                     };

/*
 * 2 variáveis
 * - endThreads: controla a quantidade de threads finalizadas
 * - endThreadsBLOCKED: garante a atomicidade. Não permite que 2 ou mais threads tentam acessar e modificar a variável endThreads
 */ 
int endThreads, endThreadsBLOCKED;

void Job(int i) {
   int resultado = AlliedArmy[i]-EnemyArmy[i];

   // Operador ternário fazer o absoludo da subtração
   resultado < 0 ? resultado *= -1 : resultado;

   // Imprime a posição do Array, os valores a serem calculados e o resultado
   printf("\n[%d] %d - %d = %d", i, AlliedArmy[i], EnemyArmy[i], resultado);
   sleep(1);
}

// Função que a Thread executa quando criada
void *ThreadJob(void *thread_id)
{
   long t_id;
   t_id = (long)thread_id;
   // Variáveis para gerenciar início e fim do calculo
   int begin, end;
   begin = (t_id-1)*by_thread;
   end = (t_id)*by_thread;

   printf("\nT[%d] de %d a %d", (int)t_id, begin, end);

   for (int i=begin; i<end; i++) 
      Job(i);

   // Verifica se a thread tem que calcular mais
   int calcular = 50%NUM_THREADS >= t_id;
   if (calcular) {
      // Procura o indice que a thread tem que calcular a mais
      int calc =  (by_thread * NUM_THREADS) + t_id;
      Job(calc);
   } 

   // Thread ficará boqueada neste ponto caso uma outra thread esteja modificando a variável endThreads
   while(endThreadsBLOCKED);
   // Bloqueia a variável endThreads garantindo que esta será a unica thread a modificando
   endThreadsBLOCKED = 1;
   // Modifica o valor da variável
   endThreads++;
   // Liberada a variável para ser modificado pela próxima thread que solicitar
   endThreadsBLOCKED = 0;
   // Encerra a Thread
   pthread_exit(NULL);
}

// Função main do programa
int main(int argc, char *argv[])
{
   // Controle de tempo
   time_t t_ini, t_fim;
   float tempo;
   t_ini = time(NULL);

   /*
    * Apenas um limitador
    * para mostrar o bloco
    * principal a ser executado
    */
   {
      // criação do vetor de threads do tipo pthread_t
      pthread_t threads[NUM_THREADS];
      long i, thread_id;
      endThreads = 0;
      endThreadsBLOCKED = 0;
      
      by_thread = 50/NUM_THREADS;

      for(i = 0; i < NUM_THREADS; i++) {
         thread_id = i+1;
         
         // Comando para criar uma Thread
         pthread_create(&threads[i], NULL, ThreadJob, (void *)thread_id);
      }
   }
   while(endThreads != NUM_THREADS);

   t_fim = time(NULL);
   tempo = difftime(t_fim, t_ini);

   printf("\n\n-----> Tempo de execucao: %f <-----\n", tempo);

   // Última ação da main é finalizar as possíveis threads
   pthread_exit(NULL);
}