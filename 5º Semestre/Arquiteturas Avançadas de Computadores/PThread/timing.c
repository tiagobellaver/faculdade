#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
   time_t t_ini, t_fim;
   float tempo;

   t_ini = time(NULL);
   sleep(5);
   t_fim = time(NULL);
   tempo = difftime(t_fim, t_ini);

   printf("Tempo de execucao: %f\n", tempo);
}





7 - 58 - 47 - 35 - 24 - 12