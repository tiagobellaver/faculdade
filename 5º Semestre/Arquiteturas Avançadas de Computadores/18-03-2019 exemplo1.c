#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS 1 //Quantidade de Threads a serem cirados

int valor_global;
int end_threads;

//função que a Thread 
void *Thread_Um(){

	printf("Valor ao entrar no Thread %d\n", valor_global);
	valor_global = 99;
	printf("Valor alterado no Thread %d\n", valor_global);

	end_threads++;
	//Encerra a Thread
	pthread_exit(NULL);

}

//Função main do programa
int main(int argc, char *argv[]){

	end_threads = 0;
	//criação do vetor de threads do tipo pthread_t
	pthread_t thread;

	valor_global = 10;

	printf("Valor antes do Thread %d\n", valor_global);
	//comando para criar uma thread
	pthread_create(&thread, NULL, Thread_Um, NULL);

	while(end_threads < NUM_THREADS);

	printf("Valor depois do Thread %d\n", valor_global);
	//ultima ação do main é finalizar as possíveis threads
	pthread_exit(NULL);

}