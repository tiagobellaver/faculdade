#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, x1, soma = 0;
    int impar = 0, par = 0, positivo = 0, negativo = 0;
    for(int x = 0; x < 5; x++)
    {
        cin >> y;
        if(y > 0)
        {
            positivo += 1;
        }
        if(y < 0)
        {
            negativo += 1;
        }
        if(y % 2 == 0)
        {
            par += 1;
        }
        if(y % 2 != 0)
        {
            impar += 1;
        }
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;
    return 0;
}

