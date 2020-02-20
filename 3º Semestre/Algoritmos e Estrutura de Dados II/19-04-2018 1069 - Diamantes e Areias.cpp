#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, direita, esquerda, aux;
    char linha[1001];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> linha;
        direita = 0;
        aux = 0;
        esquerda = 0;
        while(true)
        {
            if(linha[aux] == '\0')
            {
                break;
            }
            if(linha[aux] == '<')
            {
                esquerda++;
            }
            if(linha[aux] == '>')
            {
                if(esquerda > 0)
                {
                    direita++;
                    esquerda--;
                }
            }
            aux++;
        }
        cout << direita << endl;
    }
    return 0;
}
