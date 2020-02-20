#include <bits/stdc++.h>

using namespace std;

int sequencia(int x)
{
    for(int i = 1, j = 1; i <= x, j <= x; i++, j++)
    {
        cout << i << " " << i * i << " " << i * i * i << endl;
        cout << j << " " << j * j + 1 << " " << j * j * j + 1 << endl;
    }
}

int main()
{
    int x;
    cin >> x;
    sequencia(x);
    return 0;
}
