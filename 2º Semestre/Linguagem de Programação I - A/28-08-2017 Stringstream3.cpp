#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
    string linha, nome;
    int cod;
    double nota;
    while (getline(cin,linha))
    {
        stringstream dados(linha);
        dados >> cod;
        dados >> cod;
        cout << "Codigo: " << cod << endl;
        cout << "Nome: " << nome << endl;
        double soma = 0;
        int cont = 0;
        while(dados >> nota)
        {
            soma += nota;
            cont++;
        }
        cout << "Media = " << soma / cont << endl;
        cout << endl;
    }
    return 0;
}
