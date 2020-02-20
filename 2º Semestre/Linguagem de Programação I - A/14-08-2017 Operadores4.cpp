#include <iostream>

using namespace std;

int main()
{
    int a, b = 3, c = 4;
    double d = 2, e = 3.5;
    a = b * e;

    cout << a << endl;
    cout << b * e << endl;

    a = b % c ;
    cout << a << endl; //3

    a = b * (d / 3) + a;
    cout << "a = " << a;

    double f = b / c;
    cout << " f = " << f << endl;
    f =  b / c;
    cout << " f = " << f << endl; //0
    f = (double) b / c;
    cout << " f = " << f << endl;
    return 0;
}
