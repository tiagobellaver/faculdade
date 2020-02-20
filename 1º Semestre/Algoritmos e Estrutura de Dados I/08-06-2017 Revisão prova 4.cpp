#include <bits/stdc++.h>

using namespace std;

int main()
{
    int soma = 0;
    for(int n = 1000; n <= 1100; n++)
    {
        if (n % 2 != 0)
        {
            cout << n << endl;
            soma = soma + n;
        }
    }
    cout << soma << endl;
    return 0;
}
