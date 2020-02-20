#include <iostream>

using namespace std;

int main()
{
    int x;
    for(x = 1000007004; x < 1000007100; x++)
    {
        int div = 2;
        for(int i = 2; i <= x / 2 + 1; i++)
        {
            if(x % i == 0)
            {
                div = div + 1;
            }
        }
        cout << x << " possui " << div << " divisores\n";
    }
    return 0;
}


