#include <bits/stdc++.h>

using namespace std;

int preenchimento(int x)
{
    int z = 0;
    for(int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << z << endl;
        z++;
        if(z == x)
        {
            z= 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    preenchimento(t);
    return 0;
}
