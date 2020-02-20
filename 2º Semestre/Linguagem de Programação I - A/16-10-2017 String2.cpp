#include <bits/stdc++.h>

using namespace std;

string letra(string linha)
{
    int aux = 0;
    for(int i = 0; i <linha.size(); i++)
    {
        if (isalpha(linha[i]))
        {
            aux++;
        }
    }
    cout << "A palavra " << linha << " possui: " << aux << " letras" << endl;
}

int main()
{
    string linha;
    getline(cin,linha);
    letra(linha);
    return 0;
}
