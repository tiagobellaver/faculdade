#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS 5 //Quantidades de Threads a serem criados

//Função que a Thread executa quando criada
void *PrintThread(void *thread_id){

	long t_id;
	t_id = (long)thread_id;
	printf("THREAD -> Hello World! Sou eu, a Thread #%ld!\n", t_id);
	// Encerra a Thread
	pthread_exit(NULL);
}

//Função main do programa
int main(int argc, char *argv[]){
	
	//Criação do vetor de threads do tipo pthread_t
	pthread_t threads[NUM_THREADS];
	long i;
	for(i = 0; i < NUM_THREADS; i++){

		printf("PROGRAMA - > criando thread%ld\n", i);


		//Comando para criar uma Thread
		pthread_create(&threads[i], NULL, PrintThread, (void *)i);
	}

	//Ultima ação do main é finalizar as possíveis threads
	pthread_exit(NULL);

}