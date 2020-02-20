#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distancia(double x1, double x2, double y1, double y2)
{
    double P1, P2;
    double distancia;
    P1 = pow(x2 - x1,2);
    P2 = pow(y2 - y1,2);
    distancia = sqrt(P1 + P2);
    return distancia;
}

int main()
{
    cout << fixed << setprecision(4);
    double X1, Y1;
    double X2, Y2;
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;
    cout << distancia(X1, X2, Y1, Y2) << endl;
    return 0;
}
