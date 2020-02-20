#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x = "ab23s249ttu21";
    string x1 = x.substr(2,2);
    string x2 = x.substr(5,3);
    string x3 = x.substr(11,2);
    int soma = 0;
    int valor = atoi(x1.c_str());
    soma += valor;
    valor = atoi(x2.c_str());
    soma += valor;
    valor = atoi(x3.c_str());
    soma += valor;
    cout << soma << endl;
    return 0;
}
