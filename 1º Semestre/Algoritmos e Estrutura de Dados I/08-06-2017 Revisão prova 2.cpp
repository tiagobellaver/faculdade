#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    int i, x;
    double num, den;
    double valor;
    i = -1;
    cin >> x;
    double soma = 0;
    for (i = 1, den = 1; i <= 50; i++, den*=2)
    {
        num = pow(x,i);
        valor = num / den;
        cout << valor << endl;
        soma += valor;
    }
    cout << soma << endl;
    return 0;
}
