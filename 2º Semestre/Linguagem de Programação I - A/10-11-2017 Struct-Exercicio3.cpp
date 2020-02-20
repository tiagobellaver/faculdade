#include <bits/stdc++.h>

using namespace std;
struct ids
{
    string nome;
    int id;
    double tempo;
};

bool alfabetica(ids nomea, ids nomeb)
{
    return nomea.id < nomeb.id;
}

bool tempo(ids tempoa, ids tempob)
{
    return tempoa.tempo < tempob.tempo;
}

bool temposiguais(ids tempoia, ids tempoib)
{
    if(tempoia.tempo == tempoib.tempo)
    {
        return tempoia.id < tempoib.id;
    }
    return 0;
}

int main()
{
    ids problemas[6];
    for(int i = 0; i < 6; i++)
    {
        cin >> problemas[i].nome;
        cin >> problemas[i].id;
        cin >> problemas[i].tempo;
        cout << endl;
    }

    cout << "Ordem Alfabetica Ascendente:" << endl;

    for(int i = 0; i < 6; i++)
    {
        sort(problemas, problemas + 6, alfabetica);
        cout << problemas[i].nome << " " << problemas[i].id << endl;
        cout << fixed << setprecision(3);
        cout << problemas[i].tempo << endl;
    }

    cout << endl;
    cout << "Ordem ascendente de tempo:" << endl;

    for(int i = 0; i < 6; i++)
    {
        sort(problemas, problemas + 6, tempo);
        cout << problemas[i].nome << " " << problemas[i].id << endl;
        cout << fixed << setprecision(3);
        cout << problemas[i].tempo << endl;
    }

    cout << endl;
    cout << "Ordem de tempo para tempos iguais, ordem ascendente de ID:" << endl;

    for(int i = 0; i < 6; i++)
    {
        sort(problemas, problemas + 6, temposiguais);
        cout << problemas[i].nome << " " << problemas[i].id << endl;
        cout << fixed << setprecision(3);
        cout << problemas[i].tempo << endl;
    }
    return 0;
}
