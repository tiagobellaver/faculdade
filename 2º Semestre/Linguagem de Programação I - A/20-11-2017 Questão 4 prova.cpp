#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {
    freopen("3.in","r",stdin);
    string nome;
    string linha;
    int soma=0,valor,cont=0;
    while ( getline (cin,nome) ) {
        cont = cont+1;
        getline (cin,linha);
        stringstream separa(linha);
        while (separa >> valor) {
            soma = soma + valor;
        }
    }
    cout << cont << " pessoas" << endl;
    cout << "Total = " << soma << endl;
    return 0;
}
