#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
    string linha;
    int cont;
    double numero, soma;
    while(getline(cin, linha))
    {
        stringstream S(linha);
        soma = 0;
        while (S >> numero) ///até encontrar NULL
        {
            soma += numero;
        }
        cout << "Soma = " << soma << endl;
    }
    return 0;
}
