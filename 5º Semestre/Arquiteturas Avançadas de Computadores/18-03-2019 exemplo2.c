#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS 2 //Quantidade de Threads a serem cirados
#define PI 3.1415

float a, b, c;
int end_thread_um;
int end_threads;

//função que a Thread 
void *Thread_Um(){

	b = a * PI;
	end_thread_um = 1;
	end_threads++;
	//Encerra a Thread
	pthread_exit(NULL);
}

void *Thread_Dois(){

	c = b * PI;
	end_threads++;

	pthread_exit(NULL);
}

//Função main do programa
int main(int argc, char *argv[]){

	end_thread_um = end_threads = a = b = c = 0;
	pthread_t threads[NUM_THREADS];
	a = 5;
	pthread_create(&threads[0], NULL, Thread_Um, NULL);
	while(end_thread_um <= 0);
	pthread_create(&threads[1], NULL, Thread_Dois, NULL);
	while(end_threads < NUM_THREADS);
	printf("Resultados:\n#a: %f \n# b: %f \n# c %f \n", a, b, c);
	pthread_exit(NULL);

}