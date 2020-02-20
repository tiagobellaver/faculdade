#include <iostream>

using namespace std;

int main()
{
    double salario, reajuste;
    cin >> salario;

    if (salario < 500)
    {
        salario = salario * 1.15;
    }
    if (salario >= 500 and salario <=1000)
    {
        salario = salario * 1.10;
    }
    if (salario > 1000)
    {
        salario = salario * 1.05;
    }
    cout << "Novo salario" << salario << endl;
    return 0;
}
