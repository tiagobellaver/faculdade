#include <bits/stdc++.h>

using namespace std;

int soma(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

double soma(double a, double b)
{
    double r;
    r = a + b;
    return r;
}

int main()
{
    int x, s, t;
    cin >> s >> t;
    x = soma(s, t);
    cout << "Soma = " << x << endl;
    cout << "Soma = " << soma(3.5, 2.8) << endl;
}
