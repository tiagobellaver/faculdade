#include <bits/stdc++.h>

using namespace std;

int substi(int x[])
{
    for(int i = 0 ; i < 10 ; i++)
    {
        if(x[i] > 0)
        {
            cout << "X[" << i << "]" << " = " << x[i] << endl;
        }
        else
        {
            cout << "X[" << i << "]" << " = " << 1 << endl;
        }
    }
}

int main()
{
    int x[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> x[i];
    }
    substi(x);
    return 0;
}
