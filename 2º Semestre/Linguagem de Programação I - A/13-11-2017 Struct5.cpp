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
    if(A.Curso == B.Curso)
    {
        if(A.Sexo == B.Sexo)
        {
            return A.Nome < B.Nome;
        }
        else
        {
            return A.Sexo < B.Sexo;
        }
    }
    else
    {
        return A.Curso < B.Curso;
    }

}

int main()
{
    Estudante Turma[8];
    freopen("alunos.in","r",stdin);
    for(int i=0; i<8; i++)
    {
        getline (cin, Turma[i].Nome);
        cin >> Turma[i].Id;
        cin >> Turma[i].Curso;
        cin >> Turma[i].Sexo;
        cin.get();
    }

    sort(Turma, Turma+8, Ordena);

    for(int i=0; i<8; i++)
    {
        cout << Turma[i].Nome << " - " << Turma[i].Id << " - " << Turma[i].Curso;
        cout << " - " << Turma[i].Sexo << endl ;
    }
    return(0);
}

