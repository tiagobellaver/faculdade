#include <bits/stdc++.h>
#define LIMPAR_TELA "cls"

using namespace std;

void menu()
{
    cout << "       ----------------------------------------------------"  << endl;
    cout << "      | Para exemplo multiplicativo digite 1               |" << endl;
    cout << "      | Para exemplo aditivo digite 2                      |" << endl;
    cout << "      | Para um problema multiplicativo qualquer digite 3  |" << endl;
    cout << "      | Para um prolbmea aditivo qualquer digite 4         |" << endl;
    cout << "      | Para sair digite 0                                 |" << endl;
    cout << "       ----------------------------------------------------"  << endl;
    cout << endl;
    cout << endl;
}
void opcao1()
{
    int x, y;
    cout << "       ---------------------------------------------------------"  << endl;
    cout << "      | Temos 3 cidades x, y e z. Existem 4 rodovias que ligam  |" << endl;
    cout << "      | x com y e cinco que ligam y com z. Partindo de x e pas  |" << endl;
    cout << "      | sando por y, de quantas formas podemos chegar até z.    |" << endl;
    cout << "       ---------------------------------------------------------"  << endl;
    cout << endl;
    cout << "Principio Multiplicativo" << endl;
    cout << "Digite os valores do problema: ";
    cin >> x >> y;
    cout << "Existem " << x * y << " possibilidades." << endl;
}
void opcao2()
{
    cout << "       ---------------------------------------------------------"  << endl;
    cout << "      | Existem 12 eventos ocorrendo neste fim de semana em sua |" << endl;
    cout << "      | cidade e 22 ocorendo fora. Infelizmente a gasolina esta |" << endl;
    cout << "      | 5 reais e você só pode ir em um. Quantas são suas possi |" << endl;
    cout << "      | bilidades de escolha?                                   |" << endl;
    cout << "       ---------------------------------------------------------"  << endl;
    cout << endl;
    cout << "Sao 12 + 22 possibilidades de escolha totalizando 34 opcoes de escolha de programa" << endl;
}
void opcao3()
{
    cout << "Quantas variavies: ";
    int labiroca;
    cin >> labiroca;
    int lala[labiroca + 10];
    int total = 1;
    for (int i =0; i < labiroca; i++)
    {
        cout << "Quantas possibilidades para a variavel "<< i + 1 << ": ";
        cin >> lala[i];
        total *= lala[i];
    }
    cout << "Existem " << total << " possibilidades" << endl;
}
void opcao4()
{
    cout << "Quantas variavies: ";
    int labiroca;
    cin >> labiroca;
    int lala[labiroca + 10];
    int total = 0;
    for (int i =0; i < labiroca; i++)
    {
        cout << "Quantas possibilidades para a variavel "<< i + 1 << ": ";
        cin >> lala[i];
        total += lala[i];
    }
    cout << "Existem " << total << " possibilidades" << endl;
}
int main()
{
    while(1)
    {
        menu();
        int opcao;
        cout << "Digite a opcao: ";
        cin >> opcao;
        cout << endl;
        if(opcao == 1)
        {
            opcao1();
        }
        else if(opcao == 2)
        {
            opcao2();
        }
        else if(opcao == 3)
        {
            opcao3();
        }
        else if (opcao == 4)
        {
            opcao4();
        }
        system("pause");
        system(LIMPAR_TELA);
    }
    return 0;
}
