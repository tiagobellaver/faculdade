#include <iostream>
#define TAM 10

using namespace std;

typedef struct pilha
{
    int topo;
    char dados[10];
} pilha;

pilha p;

void insere(char info)
{
    if(p.topo < TAM)
    {
        p.dados[++p.topo] = info;
    }
    else
    {
        cout << "OVERFLOW!" << endl;
    }
}

char retira(void)
{
    if(p.topo >= 0)
    {
        char info = p.dados[p.topo--];
        return info;
    }
    else
    {
        cout << "UNDERFLOW!" << endl;
    }
}

int main()
{
    p.topo = -1;
    char valor;

    insere('a');
    insere('f');
    insere('i');
    valor = retira();
    cout << valor << endl;
}
