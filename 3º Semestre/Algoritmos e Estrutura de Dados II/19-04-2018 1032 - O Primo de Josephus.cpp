#include <bits/stdc++.h>

using namespace std;

int primo[3502];

int flavious(int n)
{
    int aux = 0;
    for(int i = 1; i <= n; i++)
    {
        aux = (aux + primo[n - i]) % i;
    }
    return aux;
}

int ehprimo(int n)
{
    int i;
    if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }
    for(i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void numeroprimo()
{

    memset(&primo, 0, sizeof(primo));
    int a = 0;
    for(int j = 2; j < 32650; j++)
    {
        if(ehprimo(j))
        {
            primo[a] = j;
            a++;
        }
    }
}

int main()
{
    int x;
    numeroprimo();
    while(1)
    {
        cin >> x;
        if(x == 0)
        {
            break;
        }
        cout << flavious(x) + 1 << endl;
    }
    return 0;
}
