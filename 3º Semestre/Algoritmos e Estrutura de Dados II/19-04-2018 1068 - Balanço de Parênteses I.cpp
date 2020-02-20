#include <bits/stdc++.h>

using namespace std;

int main()
{
    char linha[1001];
    int esquerda, direita;
    while(cin >> linha)
    {
        esquerda = 0;
        direita = 0;
        for(int i = 0; linha[i] != '\0'; i++)
        {
            if(linha[i] == '(')
            {
                esquerda++;
            }
            else if(linha[i] == ')')
            {
                direita++;
                if(esquerda > 0)
                {
                    esquerda--;
                    direita--;
                }
            }
        }
        if(esquerda == 0 and direita == 0)
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
    }
    return 0;
}
