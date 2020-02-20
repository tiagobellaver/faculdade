#include <iostream>
#include <string>
#define TAM 100

/**
Leia dois números com 30
dígitos e mostre a soma deles
**/

using namespace std;

int main()
{
    string numero1,numero2,result;
    string tmp = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    cin >> numero1 >> numero2;
    int digito, leva=0;
    int pos_x = numero1.size()-1;
    int pos_y = numero2.size()-1;
    if (pos_x > pos_y)
    {
        numero2 = tmp.substr(0,pos_x-pos_y) + numero2;
    }
    else
    {
        numero1 = tmp.substr(0,pos_y-pos_x) + numero1;
    }
    result = numero1;
    for (int i=numero1.size()-1; i>=0; i--)
    {
        digito = (numero1[i]-'0') + (numero2[i]-'0') + leva;
        result[i] = (digito%10) + '0';
        leva = digito / 10;
    }
    if (leva == 1) result = "1"+ result;
    cout << result << endl;
    return 0;
}
