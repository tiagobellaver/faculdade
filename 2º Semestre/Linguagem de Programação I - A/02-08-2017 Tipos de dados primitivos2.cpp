#include <iostream>

using namespace std;

int main()
{
    long long int d = 1234567890123456789;
    cout << d << endl;

    unsigned long long int dd = 12345678901234567890;
    cout << dd << endl;

    int e ( 3 << 4); ///deslocação de bits para a esquerda (x2)
    cout << e << endl;

    ///Um inteiro ocupa 4 bytes (32 bits)
    e = (1 << 31) - 1; ///2147483647
    cout << e << endl;

    unsigned int f = ((1 << 32) - 1); ///4294967295
    cout << f << endl;

    e = ((1 << 32));
    cout << e << endl;

    unsigned long long g = ((1 << 64) - 1);
    cout << g << endl << endl;

    return 0;
}
