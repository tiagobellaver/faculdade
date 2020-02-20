#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double media(double a, double b)
{
    double media;
    media = (a * 3.5) + (b * 7.5);
    media = media / 11;
    return media;
}

int main()
{
    cout << fixed << setprecision(5);
    double a, b;
    cin >> a >> b;
    cout << "MEDIA = " << media(a,b) << endl;
    return 0;
}
