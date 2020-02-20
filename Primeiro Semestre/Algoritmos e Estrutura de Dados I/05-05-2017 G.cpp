#include <iostream>

using namespace std;

int main()
{
    int x;
    for (x = 1000000; x >= 1; x = x / 2)
        {
            cout << x << endl;
        }
    return 0;
}
