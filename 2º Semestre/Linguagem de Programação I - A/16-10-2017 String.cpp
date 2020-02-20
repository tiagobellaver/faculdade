#include <bits/stdc++.h>

using namespace std;

string maiuscula(string linha)
{
    for(int i = 0; i < linha.size(); i++)
    {
        linha[i] = toupper(linha[i]);
    }
    return linha;
}

string minuscula(string linha)
{
    for(int i = 0; i < linha.size(); i++)
    {
        linha[i] = tolower(linha[i]);
    }
    return linha;
}

int main()
{
    string linha;
    while(getline(cin,linha))
    {
        cout << maiuscula(linha) << endl;
        cout << minuscula(linha) << endl;
    }
    return 0;
}
