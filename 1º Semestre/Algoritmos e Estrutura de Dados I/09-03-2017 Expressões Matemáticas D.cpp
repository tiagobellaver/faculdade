#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, b, h, a, c;
    cin >> b >> h >> a >> c;
    x = ( b * h)  / (2 * (4 * a * c));
    cout << x << endl;
    return 0;
}
