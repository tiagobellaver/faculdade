#include <bits/stdc++.h>

using namespace std;

int prime(int a)
{
    int aux = 0;
    for(int i = 1; i < a / 2 + 1; i++)
    {
        if (a % i == 0)
        {
            aux += i;
        }
    }
    if (aux == 1)
    {
        cout << "Verdadeiro" << endl;
    }
    else
    {
        cout << "Falso" << endl;
    }
}

int main()
{
    int a;
    cin >> a;
    prime(a);
    return 0;
}
