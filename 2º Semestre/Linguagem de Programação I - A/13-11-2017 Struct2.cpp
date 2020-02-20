#include <bits/stdc++.h>

using namespace std;

typedef struct Estudantes
{
    string Nome;
    int Id;
    string Curso;
    char Sexo;
};

int main()
{
    Estudantes Turma[5];
    for(int i = 0; i < 5; i++)
    {
        getline(cin,Turma[i].Nome);
        cin >> Turma[i].Id;
        cin >> Turma[i].Curso;
        cin >> Turma[i].Sexo;
        cin.get();
        cout << endl;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << Turma[i].Nome << ", numero: " << Turma[i].Id;
        cout << ", curso " << Turma[i].Curso;
        cout << ", sexo " << ((Turma[i].Sexo == 'M')? "Masculino" : "Feminino") << endl;
        cout << endl;
    }
    return(0);
}
