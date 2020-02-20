#include <iostream>

using namespace std;

int main()
{
    string digitos;
    int soma = 0;
    cin >> digitos;
    for(int i = 0; i < digitos.size(); i++)
    {
        soma = soma + digitos[i] - '0';
    }
    cout << soma << endl;
    return 0;
}
