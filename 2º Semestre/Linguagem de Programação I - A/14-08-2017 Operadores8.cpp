#include <iostream>

using namespace std;

int main()
{
    int b;
    int a = (b = 3 , b + 2);
    cout << a << " " <<  b;
    return 0;
}


