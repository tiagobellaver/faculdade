#include <bits/stdc++.h>

using namespace std;

int main()
{
    double y;
    int cont = 0, i;
    for(i = 0; i < 6; i++)
    {
        cin >> y;
        if(y > 0)
        {
            cont+=1;
        }
    }
    cout << cont << " valores positivos" << endl;
    return 0;
}

