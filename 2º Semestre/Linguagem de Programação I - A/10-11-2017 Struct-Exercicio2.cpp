#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    string nome;
    int id;
    char genero;
    string dept;
} Estudante;

bool ordena(Estudante nomea, Estudante nomeb)
{
    return nomea.nome < nomeb.nome;
}

int main()
{
    Estudante est[5];
    for(int i = 0; i < 5; i++)
    {
    cout << "Digite o nome do estudante: ";
    cin >> est[i].nome;
    cout << "Digite o codigo do estudante: ";
    cin >> est[i].id;
    cout << "Digite o sexo do estudante: ";
    cin >> est[i].genero;
    cout << "Digite o departamento do estudante: ";
    cin >> est[i].dept;
    cout << endl;
    }
    for(int i = 0; i < 5; i++)
    {
        sort(est, est + 5, ordena);
        cout << est[i].nome << " - " << est[i].id << " - " << est[i].genero << " - " << est[i].dept << endl;
    }
    return 0;
}
