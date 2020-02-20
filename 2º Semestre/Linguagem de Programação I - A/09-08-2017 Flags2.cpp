#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << "0x" << hex << atoi(str.c_str()) << endl; ///converte string em int
    cout << "0x" << hex << strtol(str.c_str(),NULL,10) << endl; ///converte string em long int
    cout << "0x" << uppercase << hex << atoi(str.c_str()) << endl;
    cout << "0x" << uppercase << hex << strtol(str.c_str(),NULL,10) << endl;
    cout << dec << endl;
    cout << strtol("10101", NULL,2) << endl;
    cout << strtol("101",NULL,10) << endl;
    cout << strtol("0xA",NULL,16) << endl;
    return 0;
}
