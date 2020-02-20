#include <bits/stdc++.h>

#define verdadeiro 1
#define falso 0
#define formula(b1, b2, b3, b4) (b1 && !b2 ? verdadeiro : falso)
#define variaveis 4
#define P 0
#define Q 1
#define R 2
#define S 3

using namespace std;

char nome[variaveis];
int var[variaveis];

void inicializa_formula()
{
    nome[P] = 'P';
    nome[Q] = 'Q';
    nome[R] = 'R';
    nome[S] = 'S';
    for(int i = 0; i < variaveis; i++)
    {
        var[i] = falso;
    }
}

int ultima_interpretacao()
{
    int res = 1;
    for(int j = 0; j < variaveis; j++)
    {
        res = res && var[j];
    }
    return res;
}

void proxima_interpretacao()
{
    int k = variaveis - 1;
    while(k >= 0 and var[k] != 0)
    {
        var[k--] = 0;
    }
    if(k >= 0)
    {
        var[k] = 1;
    }
}

int valor_formula()
{
    return formula(var[P], var[Q], var[R], var[S]) && ((!var[S]) || ! var[P]);
}

void mostra_tabela()
{
    int fim = falso;
    inicializa_formula();
    for(int l = 0; l < variaveis; l++)
    {
        cout << "  " << nome[l] << "  |";
    }
    cout << "  H" << endl;
    for(int m = 0; m < 3 * variaveis + 2; m++)
    {
        cout << "--";
    }
    cout << endl;

    while(!fim)
    {
        for(int n = 0; n < variaveis; n++)
        {
            if(var[n])
            {
                cout << "  F  |";
            }
            else
            {
                cout << "  T  |";
            }
        }
        if(valor_formula())
        {
            cout << "  F" << endl;
        }
        else
        {
            cout << "  T" << endl;
        }
        if (ultima_interpretacao())
        {
            fim = verdadeiro;
        }
        else
        {
            proxima_interpretacao();
        }
    }
}

int main()
{
    cout << " ----------------------------------------------- " << endl;
    cout << "|                                               |" << endl;
    cout << "|  Alexis Toigo, Gabriel Brock e Tiago Bellaver |" << endl;
    cout << "|                                               |" << endl;
    cout << " ----------------------------------------------- " << endl;
    cout << endl;
    cout << "                 Formula:" << endl;
    cout << "H = ((P v Q -> R) ^ (R -> S)) -> (~S -> ~P)" << endl;
    cout << endl;
    mostra_tabela();
    return 0;
}
