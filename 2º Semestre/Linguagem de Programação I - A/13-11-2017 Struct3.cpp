#include <bits/stdc++.h>

using namespace std;

typedef struct Estudante
{
    string Nome;
    int Id;
    string Curso;
    char Sexo;
};

bool Ordena (Estudante A, Estudante B)
{
    return A.Nome < B.Nome;
}

int main()
{
    Estudante Turma[5];
    for(int i=0; i<5; i++)
    {
        getline (cin, Turma[i].Nome);
        cin >> Turma[i].Id;
        cin >> Turma[i].Curso;
        cin >> Turma[i].Sexo;
        cin.get();
    }

    sort(Turma, Turma+5, Ordena);

    for(int i=0; i<5; i++)
    {
        cout << Turma[i].Nome << " - " << Turma[i].Id << " - " << Turma[i].Curso;
        cout << " - " << Turma[i].Sexo << endl ;
    }
    return(0);
}
