#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
    string nome, linha;
    int idade;
    while (getline(cin,linha))
    {
        stringstream X(linha);
        X >> idade;
        cout << idade << endl;
        X.get();
        getline(X,nome);
        cout << nome << endl;
        cout << endl;
    }
    return 0;
}
