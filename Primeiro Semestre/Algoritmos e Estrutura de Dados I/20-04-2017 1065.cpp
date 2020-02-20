#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, a, cont = 0, y;
    for(i = 0; i < 5; i++)
    {
        cin >> y;
        if((y % 2 == 0))
        {
            cont+=1;
        }
    }
    cout << cont << " valores pares" << endl;
    return 0;
}
