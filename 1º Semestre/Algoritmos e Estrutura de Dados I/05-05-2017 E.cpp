#include <iostream>

using namespace std;

int main()
{
    double i;
    for(i = 1; i <= 65536; i = i * 2)
    {
        cout << i << " ";
    }
    return 0;
}
