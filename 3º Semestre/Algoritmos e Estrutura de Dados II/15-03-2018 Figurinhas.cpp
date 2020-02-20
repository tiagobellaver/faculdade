#include <bits/stdc++.h>

using namespace std;

int mdc(int x, int y)
{
    int aux = 0;
    for(; y%x != 0;)
    {
        aux = x;
        x = y%x;
        y = aux;
    }
    return x;
}

int main()
{
    int n, x, y, aux;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;

        if(x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }

        cout << mdc(x,y) << endl;
    }

    return 0;
}

