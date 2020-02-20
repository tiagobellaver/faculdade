#include <iostream>
#define TAM 5

using namespace std;

int main()
{
    string numero1, numero2, result;
    cin >> numero1 >> numero2;
    int digito, leva = 0;
    for(int i = TAM - 1; i >= 0; i--)
    {
        digito = (numero1[i] - '0') + (numero2[i] - '0') + leva;
        result[i + 1] = (digito % 10) + '0';
        leva = digito / 10;
    }
    int inicio = 1;
    if(leva != 0)
    {
        result[0] = leva + '0';
        inicio = 0;
    }
    for(int i = inicio; i <= TAM; i++)
    {
        cout << result[i];
    }
    return 0;
}
