#include <iostream>
#include <cstdlib>
/***
int number = 0x3FF;
cout << "Decimal: " << number << endl;
***/

using namespace std;

int main() {
    char str[20];
    cout << "Valor hexadecimal (0xc, C ou c por exemplo): ";
    cin >> str;
    cout << dec << strtol(str,NULL,16) << endl;

    cout << "Digite valor em binario (1111 por exemplo): ";
    cin >> str;
    cout << strtol(str,NULL,2) << endl;
    cout << hex << strtol(str,NULL,2) << endl;
    cout << strtol(str,NULL,2) << endl;
    cout << dec << strtol(str,NULL,2) << endl;
    return 0;
}
