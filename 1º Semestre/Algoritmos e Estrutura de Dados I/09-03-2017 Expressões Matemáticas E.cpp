#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r1, b, a, c;
    cin >> a >> b >> c;
    r1 = (- b + sqrt( pow(b,2) - 4 * a * c)) / (2 * a);
    cout << r1 << endl;
    return 0;
}
