#include <bits/stdc++.h>

using namespace std;

int troca(int x[], int y[])
{
    for(int i = 0, j = 19; i < 20, j >= 0; j--, i++)
    {
        y[j] = x[i];
    }
    for( int i = 0 ; i < 20 ; i++ )
    {
        cout << "N[" << i << "]" << " = " << y[i] << endl;
    }
}

int main()
{
    int n[20], m[20];
    for(int i = 0; i < 20; i++)
    {
        cin >> n[i];
    }
    troca(n, m);
    return 0;
}
