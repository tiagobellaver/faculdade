#include <bits/stdc++.h>

using namespace std;

void baskhara(double x, double y, double z, double &R1, double &R2)
{
    double delta = sqrt(y * y - 4 * x * z);
    R1 = (-y + delta) / (2 * x);
    R2 = (-y - delta) / (2 * x);
}

int main()
{
    double a, b, c, R1, R2;
    cin >> a >> b >> c;
    if((b * b - 4 * a * c < 0) || (a == 0))
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        baskhara(a, b, c, R1, R2);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }
    return 0;
}
