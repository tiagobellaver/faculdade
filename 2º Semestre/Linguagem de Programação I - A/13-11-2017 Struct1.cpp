#include <bits/stdc++.h>

using namespace std;

struct Estudante
{
    string Nome;
    int Id;
    string Curso;
    char Sexo;
};

int main()
{
    Estudante estudante1, estudante2;
    estudante1.Nome = "Mango Jata";
    estudante1.Id = 123;
    estudante1.Curso = "Computacao";
    estudante1.Sexo = 'F';
    cout << "O estudante eh ";
    if(estudante1.Sexo=='M')
    {
        cout << "Sr. " << estudante1.Nome << endl;
    }
    else
    {
        cout << "Sra. " << estudante1.Nome << endl;
    }
    return(0);
}
