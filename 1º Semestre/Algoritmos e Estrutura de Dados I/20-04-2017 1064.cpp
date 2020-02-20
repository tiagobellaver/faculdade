#include <bits/stdc++.h>

using namespace std;

int main()
{

    double valor, positivos = 0, soma = 0, media = 0;
    int i;
    for(i = 0; i < 6; i++)
    {
        cin >> valor;
        if(valor > 0)
        {
            positivos++;
            soma += valor;
            media = soma / positivos;
        }
    }
    cout << positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    cout << media << endl;
    return 0;
}

