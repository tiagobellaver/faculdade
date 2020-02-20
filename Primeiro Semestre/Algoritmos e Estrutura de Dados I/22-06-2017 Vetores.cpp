#include <iostream>

using namespace std;

int main()
{
    int mes;
    string nome[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    cout << "Digite o numero do mes: ";
    cin >> mes;
    cout << "O mes eh " << nome[mes - 1] << endl;
    return 0;
}
