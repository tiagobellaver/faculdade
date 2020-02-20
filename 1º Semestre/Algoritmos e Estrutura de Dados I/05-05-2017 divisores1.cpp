#include <iostream>

using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        int div=0;
        for (int i=1; i<=x; i++)
        {
            if (x % i == 0)
            {
                div = div + 1;
            }
        }
        cout << x << " possui " << div << " divisores\n";
    }
    return 0;
}


