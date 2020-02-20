#include <iostream>

using namespace std;

int main()
{
    double salario, novo_salario;
    cin >> salario;

    if (salario < 500)
    {
        novo_salario = salario * 1.15;
    }
    if (salario >= 500 and salario <=1000)
    {
        novo_salario = salario * 1.10;
    }
    if (salario > 1000)
    {
        novo_salario = salario * 1.05;
    }
    cout << "Novo salario" << novo_salario << endl;
    return 0;
}
