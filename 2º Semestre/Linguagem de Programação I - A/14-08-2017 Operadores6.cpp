#include <iostream>

using namespace std;

int main()
{
    int a, b = 3, c = 4;
    a = b++ - --c;
    ///primeiro decrementa c, depois atribui o valor de por b - c e por último incrementa b
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
