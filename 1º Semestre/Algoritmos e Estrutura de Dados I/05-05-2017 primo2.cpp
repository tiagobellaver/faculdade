#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    for(x = 1000007000; x < 1000008000; x++)
    {
        int div = 2;

        for(int i = 2; i <= sqrt(x); i = i + 1)
        {
            if (x % i == 0)
            {
                div = div + 1;
            }
        }
        if(div == 2)
        {
            cout << x << endl;
        }
    }
    return 0;
}
