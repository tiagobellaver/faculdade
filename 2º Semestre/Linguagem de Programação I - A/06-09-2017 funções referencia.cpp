#include <iostream>

using namespace std;

void dobra(int &a, int &b, int &c)
{
    a = a * 2;
    b = b * 2;
    c = c * 2;
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    dobra(a, b, c);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
