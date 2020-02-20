#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x;
    int cont = 0, y, i;
    cin >> y;
    if(y % 2 == 0)
    {
        y += 1;
    }
    for(i = y; i < y + 12; i += 2)
    {
        cout << i << endl;
    }
    return 0;

}

