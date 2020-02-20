#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

bool compara(int a, int b)
{
    if(a % 2 == b % 2)
    {
        return a < b;
    }
}

int main()
{
    int n, dados[100001];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> dados[i];
    }

    sort(dados, dados + n, compara);

    for(int i = 0; i < n; i++)
    {
        cout << dados[i] << endl;
    }
    return 0;
}

