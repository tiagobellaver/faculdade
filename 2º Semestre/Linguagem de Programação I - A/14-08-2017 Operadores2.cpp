#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    b = 6;
    c = 0;
    c += b; /// c = c + b
    a = 2+ (b = 5);
    cout << c << " " << a << " " << b << endl;
    a = b = c = d = 5;
    a += 2; /// a = a + 2
    b -= 3; /// b = b - 3
    c /= a; /// c = c / 2
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
