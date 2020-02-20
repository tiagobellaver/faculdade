#include <iostream>

using namespace std;

int main()
{
    int a, b = 3, c = 4;
    ///a = b++;
    a = b;     // a=3, b=3, c=4;
    b = b + 1; // a=3, b=4, c=4;
    ///c = --a - ++b - --c;
    a = a - 1; // a=2, b=4, c=4;
    b = b + 1; // a=2, b=5, c=4;
    c = c - 1; // a=2, b=5, c=3;
    c = a - b - c; // a=2 b=5 c = 2 - 5 -3 (-6);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
