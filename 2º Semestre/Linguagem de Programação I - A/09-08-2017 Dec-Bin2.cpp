#include <bits/stdc++.h>

using namespace std;

void decToBin(int n)
{
    int div;
    for(div = 1; div <= n; div *= 2);
    {
        div = div / 2;
    }
    while(div != 0)
    {
        cout << n / div;
        n = n % div;
        div = div / 2;
    }
    cout << endl;
}

int main()
{
    char numero[10] = "123";
    int valor = atoi(numero);
    decToBin(valor);
    cout << itoa(valor,numero,2) << endl;
    cout << numero << endl;
    return 0;
}
