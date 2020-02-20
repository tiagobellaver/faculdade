#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void baskhara(double a, double b, double c, double &R1, double &R2)
{
    double delta = sqrt(b * b - 4 * a * c);
    R1 = (-b + delta) / (2 * a);
    R2 = (-b - delta) / (2 * a);
}

int main()
{
    cout << fixed << setprecision(5);
    double A, B, C, R1, R2;
    cin >> A;
    cin >> B;
    cin >> C;
    if((B * B - 4 * A * C < 0) or (A == 0))
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        baskhara(A, B, C, R1, R2);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }
    return 0;
}
