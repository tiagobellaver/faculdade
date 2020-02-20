#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b = 3, c = 4;
    a = b-- - --c;
    ///realiza o decremento de c primeiro, depois atribui o valor de a por b - c e por último decrementa b
    cout << a << " " << b << " " << c << endl;
    a = --b - c--;
    ///realiza o decremento de b primeiro, depois atribui o valor de a por b - c e por último decrementa c
    cout << a << " " << b << " " << c << endl;
    return 0;
}
