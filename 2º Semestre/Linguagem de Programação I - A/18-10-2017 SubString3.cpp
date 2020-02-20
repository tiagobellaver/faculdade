#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        string y;
        cin >> y;
        string x1 = y.substr(2,2);
        string x2 = y.substr(5,3);
        string x3 = y.substr(11,2);
        int soma = 0;
        int valor = atoi(x1.c_str());
        soma += valor;
        valor = atoi(x2.c_str());
        soma += valor;
        valor = atoi(x3.c_str());
        soma += valor;
        cout << soma << endl;
    }
    return 0;
}
