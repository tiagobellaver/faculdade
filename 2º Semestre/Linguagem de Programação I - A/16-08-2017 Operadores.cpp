#include <iostream>
#include <iomanip>
#include <cmath>

#define absoluto(x) ((x > 0) ? x : -x)
#define arredonda(x) (x + 0.5)

using namespace std;

/*int arredonda (int x)
{
    return x + 0.5;
}*/

int main()
{
    cout << arredonda (0.5) << endl;
    double a = 2.345, b = 3.456;
    int x = 18, y = 4;
    cout << "a = " << a << " b = " << b << endl;
    cout << "x = " << x << " y = " << y << endl;

    cout << sqrt(a) << endl;
    cout << setprecision(30);
    cout << sqrt(x) << endl;

    cout << setprecision(6);
    ///b arredondado para cima e inteiro
    cout << ceil(b) << endl;

    ///a arredondado para baixo e inteiro
    cout << floor(a) << endl;

    ///resto de divisão de a por b
    cout << fmod(a,b) << endl;

    ///resto de divisão de b por a
    cout << fmod(b,a) << endl;

    cout << "log de b base 10: " << log10(b) << endl;

    a = 2.345, b = 3.456;
    x = 18, y - 4;
    /// a ^ b e x ^ y
    cout << pow(a,b) << " " << pow(x,y) << endl;

    ///seno de a e de x
    cout << sin(a) << " " << sin(x) << endl;

    ///absoluto do seno de x (-0.75)
    cout << abs(sin(x)) << endl;

    cout << abs (-1.234) << endl;
    cout << absoluto (-1.234) << endl;

    return 0;
}
