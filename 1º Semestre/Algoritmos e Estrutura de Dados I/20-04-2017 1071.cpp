#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int x, y, cont = 0, i;
    cin >> x >> y;
    if(x > y)
    {
        swap(x,y);
    }
    for(int i = x + 1; i < y; i++)
    {
        if(i % 2 != 0)
        {
            cont += i;
        }
    }
    cout << cont << endl;
    return 0;
}
