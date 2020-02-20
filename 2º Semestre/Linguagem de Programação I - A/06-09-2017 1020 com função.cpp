#include <iostream>
#include <iomanip>

using namespace std;

int ano(int a)
{
    int ano;
    ano = a / 360;
    return ano;
}

int mes(int a)
{
    int ano, mes, dia;
    ano = a / 365;
    a = a % 365;
    mes = a / 30;
    return mes;
}

int dia(int a)
{
    int ano, mes, dia;
    ano = a / 365;
    a = a % 365;
    mes = a / 30;
    dia = a % 30;
    return dia;
}

int main()
{
    int a;
    cin >> a;
    cout << ano(a) << " ano(s)" << endl;
    cout << mes(a) << " mes(es)" << endl;
    cout << dia(a) << " dia(s)" << endl;
}
