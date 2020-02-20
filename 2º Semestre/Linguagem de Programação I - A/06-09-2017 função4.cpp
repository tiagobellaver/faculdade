#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int divisores(int num)
{
    int divisores = 1;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            divisores++;
        }
    }
    return divisores;
}

    int main()
    {
        int num;
        cin >> num;
        cout << divisores(num) << endl;
        return 0;
    }
