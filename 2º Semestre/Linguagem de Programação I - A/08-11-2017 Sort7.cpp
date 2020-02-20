#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <iomanip>

typedef struct
{
    int valorAsc;
    int frequencia;
} DADOS;

using namespace std;
/// Ler uma linha e contar cada letra existente em um vetor letras [128]
/// XABCAADFC

bool ordena(DADOS a, DADOS b)
{
    if(a.frequencia == b.frequencia)
    {
        return a.frequencia > b.frequencia;
    }
    return a.frequencia < b.frequencia;
}
int main()
{
    DADOS vet[100];

    char letras[128];
    string linha;

    cin >> linha;
    for(int i = 32; i < 128; i++)
    {
        letras[i] = 0;
    }
    for(int i = 0; i < linha.size(); i++)
    {
        letras[linha[i]]++;
    }
    int cont = 0;
    for(int i = 32; i < 128; i++)
    {
        if(letras[i] != 0)
        {
            vet[cont].valorAsc = i;
            vet[cont].frequencia = letras[i];
            cont = cont + 1;
        }
    }
    for(int i = 0; i < cont; i++)
    {
        cout << vet[i].valorAsc << " ";
        cout << vet[i].frequencia << endl;
    }
    sort(vet, vet + cont, ordena);
    return 0;
}
