#include <iostream>

using namespace std;

int main()
{
    char a = 1, b = 7;
    cout << (b << 1) << endl;
    cout << (b >> 1) << endl;
    cout << (int) (a ^ b) << endl;
    cout << (int) (a & b) << endl;
    cout << (int) (a | b) << endl;
    cout << (4 ^ 6) << endl;
    cout << (6 ^ 9) << endl;
    return 0;
}
