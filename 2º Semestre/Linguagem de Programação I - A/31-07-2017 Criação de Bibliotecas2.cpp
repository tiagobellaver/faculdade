#include <iostream>
#include "minhalib.h"

using namespace std;

int main()
{
    double valor;
    cout << "Digite um valor: ";
    cin >> valor;
    //função que esta na minhalib.h
    mostradobro(valor);
    mostratriplo(valor);
    mostracubo(valor);
    fatorial(valor);
    return 0;
}

