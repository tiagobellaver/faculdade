#include <semaphore.h>
#include <iostream>
#include <pthread.h>
#include<conio.h>
#include<windows.h>
#include <stdlib.h>
#include <queue> 

#define RANGE 			100
#define RANGE_SLEEP		3000

using namespace std;

queue<int> variavel;
sem_t semaphore;

void *Produtor(void *valor) {
	while(true) {
		sem_wait(&semaphore);
		int a = rand() % 100;
		variavel.push(a);
		cout << "Produtor produziu: " << a << endl;
		Sleep(1000);
		sem_post(&semaphore);
	}
}
void *Consumidor(void *valor) {
	while(true) {
		Sleep(rand() % RANGE_SLEEP);
		sem_wait(&semaphore);
		int b;
		b = variavel.front();
		variavel.pop();
		cout << ">> Consumidor consumiu: " << b << endl;
		Sleep(1000);
		sem_post(&semaphore);
	}
}

int main() {
	sem_init(&semaphore, 0, 1);
    pthread_t pt1, pt2;
    pthread_create(&pt1, NULL, Produtor, NULL);
    pthread_create(&pt2, NULL, Consumidor, NULL);
    
    while(true) {
		Sleep(1000);
	}
	
	return 0;
}
