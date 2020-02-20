#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int valor_global;

//função que a Thread 
void *Thread_Um(){

	printf("Valor ao entrar no Thread %d\n", valor_global);
	valor_global = 99;
	printf("Valor alterado no Thread %d\n", valor_global);
	//Encerra a Thread
	pthread_exit(NULL);

}

//Função main do programa
int main(int argc, char *argv[]){

	//criação do vetor de threads do tipo pthread_t
	pthread_t thread;

	valor_global = 10;

	printf("Valor antes do Thread %d\n", valor_global);
	//comando para criar uma thread
	pthread_create(&thread, NULL, Thread_Um, NULL);

	printf("Valor depois do Thread %d\n", valor_global);
	//ultima ação do main é finalizar as possíveis threads
	pthread_exit(NULL);

}