#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double area(double a)
{
    double area;
    area =  3.14159 * pow(a,2);
    return area;
}

int main()
{
    cout << fixed << setprecision(4);
    double a;
    cin >> a;
    cout << "A=" << area(a) << endl;
    return 0;
}
