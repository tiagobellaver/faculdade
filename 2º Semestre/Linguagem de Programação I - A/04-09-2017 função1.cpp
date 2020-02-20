#include <bits/stdc++.h>

using namespace std;

int soma(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

int main()
{
    int s, t, x;
    cin >> s >> t;
    x = soma(s, t);
    cout << "soma = " << x << endl;
    return 0;
}
