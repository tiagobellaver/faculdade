#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int dia, mes, ano;
    string nome;
} Aniver;

bool ordena(Aniver dataa, Aniver datab)
{
    if(dataa.ano == datab.ano)
    {
        if(dataa.mes == datab.mes)
        {
            if(dataa.dia == datab.dia)
            {
                return dataa.nome < datab.nome;
            }
        }
    }
    if(dataa.ano == datab.ano)
    {
        if(dataa.mes == datab.mes)
        {
            if(dataa.dia != datab.dia)
            {
                return dataa.dia < datab.dia;
            }
        }
    }
    if(dataa.ano == datab.ano)
    {
        if(dataa.mes != datab.mes)
        {
            return dataa.mes < datab.mes;
        }
    }
    if(dataa.ano != datab.ano)
    {
        return dataa.ano < datab.ano;
    }
    return 0;
}


int main()
{
    Aniver dados[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> dados[i].dia;
        cin >> dados[i].mes;
        cin >> dados[i].ano;
        cin.get();
        getline(cin,dados[i].nome);
        cout << endl;
    }

    cout << "Saida apos ordenacao:" << endl;

    for(int i = 0; i < 10; i++)
    {
        sort(dados, dados + 10, ordena);
        cout << dados[i].dia << " " << dados[i].mes << " " << dados[i].ano << " - " << dados[i].nome << endl;
    }
    return 0;
}
