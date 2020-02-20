/******************************************************************************
* AUTHOR: Guilherme A. Madalozzo
* LAST REVISED: 30/03/19
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

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

void Job(int i) {
   int resultado = AlliedArmy[i]-EnemyArmy[i];

   // Operador ternário fazer o absoludo da subtração
   resultado < 0 ? resultado *= -1 : resultado;

   // Imprime a posição do Array, os valores a serem calculados e o resultado
   printf("\n[%d] %d - %d = %d", i, AlliedArmy[i], EnemyArmy[i], resultado);
   sleep(1);
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
      for (int i=0; i<50; i++) {
         Job(i);
      }
   }

   t_fim = time(NULL);
   tempo = difftime(t_fim, t_ini);

   printf("\n\n-----> Tempo de execucao: %f <-----\n", tempo);

}