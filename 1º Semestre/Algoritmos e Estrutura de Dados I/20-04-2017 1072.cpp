#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, aux, a = 0, b = 0, i;
    cin >> aux;
    for(int i = 0; i < aux; i++)
    {
        cin >> y;
        if(y >= 10 and y <= 20)
        {
            a += 1;
        }
        else
        {
            b += 1 ;
        }
    }
    cout << a << " in" << endl;
    cout << b << " out" << endl;
    return 0;
}

