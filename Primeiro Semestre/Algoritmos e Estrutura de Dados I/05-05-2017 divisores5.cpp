#include <iostream>

using namespace std;

int main()
{
    int x;
    for(x = 10007000; x < 10008000; x++)
    {
        int div = 0;
        for(int i = 1; i <= x; i++)
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


