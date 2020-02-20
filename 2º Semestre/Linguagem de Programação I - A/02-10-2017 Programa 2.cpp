#include <bits/stdc++.h>

using namespace std;

int media(double a, double b, double c, char f)
{
    if(f == 'A')
    {
        double ma;
        ma = (a + b + c) / 3;
        cout << ma << endl;
    }
    if(f == 'P')
    {
        double mp;
        mp = ((a * 5) + (b * 3) + (c * 2)) / 10;
        cout << mp << endl;
    }
    if(f == 'H')
    {
        double mh;
        mh = (3 / ((1 / a) + (1 / b) + (1 / c)));
        cout << mh << endl;
    }
}

int main()
{
    double a, b, c;
    char f;
    cin >> f;
    cin >> a >> b >> c;
    media(a,b,c,f);
    return 0;
}
