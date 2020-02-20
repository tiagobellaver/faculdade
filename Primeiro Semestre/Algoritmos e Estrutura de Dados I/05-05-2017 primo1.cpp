#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    for(x = 10007000; x < 10008000; x++)
    {
        int div = 2;
        for(int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                div = div + 1;
            }
        }
        if(div == 2)
        {
            cout << x << " eh primo!" << endl;
        }
    }
    return 0;
}


