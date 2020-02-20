#include <bits/stdc++.h>

using namespace std;

int gcd(int  a, int  b)
{
    if (b > 0 and a > b)
    {
        return gcd(b, a % b);
    }
    else
    {
        return a;
    }
}

int main()
{
    int aux;
    string a, b;
    cin >> aux;

    for (int i = 1; i <= aux; i++)
    {
        cin >> a >> b;
        int val1 = strtol(a.c_str(), NULL, 2), val2 = strtol(b.c_str(), NULL, 2);
        if (val2 > val1)
        {
            swap(val1, val2);
        }
        if (gcd(val1, val2) > 1)
        {
            cout << "Pair #" << i << ": All you need is love!\n";
        }
        else
        {
            cout << "Pair #" << i << ": Love is not all you need!\n";
        }
    }
    return 0;
}

