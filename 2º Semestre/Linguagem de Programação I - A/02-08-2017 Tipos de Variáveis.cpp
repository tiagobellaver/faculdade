#include <iostream>

using namespace std;

int main(void)
{
    char a = 65; ///65 = a 66 = b 97 = A
    cout << a << endl;
    cout << (int) a << endl;
    cout << (char) a << endl << endl;

    short int b = -32768; /// vai até 32767
    cout << b << endl;

    b = b - 1;
    cout << b << endl;
    unsigned short int bb = 65535;
    cout << bb << endl;

    bb = bb + 1;
    cout << bb << endl;

    return 0;
}
