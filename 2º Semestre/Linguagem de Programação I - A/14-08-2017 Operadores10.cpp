#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << (4 ^ 6) << endl;
    cout << (6 ^ 9) << endl;
    cout << (12 | 17) << endl;
    cout << (22 & 17) << endl;
    cout << ~a << endl;
    unsigned int b = 0;
    b =~ b;
    cout << b << endl;
    unsigned long long c = 0;
    cout << ~c << endl;
    return 0;
}



