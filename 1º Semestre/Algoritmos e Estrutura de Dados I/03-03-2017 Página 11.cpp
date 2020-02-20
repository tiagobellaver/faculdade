#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, e, f;
    a = 6 / 2 % 2;
    cout << a << endl;

    b = 5 + 2 % 2;
    cout << b << endl;

    c = 5 * 3 + 0 % 2;
    cout << c << endl;

    d = 6 / 2 + 4 * 2;
    cout << d << endl;

    e = 5.0 / 2 + 2 * 3.5 * 2;
    cout << e << endl;

    f = 5.0 / 2 + 2 * 3.5 * 2 - 3;
    cout << f << endl;

    return 0;
}
