#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    int valor;
    cin >> valor;
    for(i = 1; i <= valor; i = i * 2);
    {
        i = i / 2;
    }
    while(i != 0)
    {
        cout << valor / i;
        valor = valor % i;
        i = i / 2;
    }
    return 0;
}
