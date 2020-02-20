#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char str[20];
    int N;
    cout << "DEC para HEXA: ";
    cin >> N;
    cout << hex << uppercase << N << dec << endl;
    cout << "HEXA para DEC: ";
    cin >> str;
    cout << strtol(str,NULL,16) << endl;
    cout << "BIN para DEC: ";
    cin >> str;
    cout << strtol(str,NULL,2) << endl;
    cout << "BIN para HEX: ";
    cin >> str;
    cout << hex << strtol(str,NULL,2) << endl;
    return 0;
}
