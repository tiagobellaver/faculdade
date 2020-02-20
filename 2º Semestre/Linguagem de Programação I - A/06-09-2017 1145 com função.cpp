#include <bits/stdc++.h>

using namespace std;

int sequencia(int x, int y)
{
    int z = 0;
    for(int i = 1; z < y; i++)
    {
        for(int j = 1; j <= x; j++)
        {
            z++;
            cout << z;
            if(z % x != 0)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    sequencia(a,b);
    return 0;
}
