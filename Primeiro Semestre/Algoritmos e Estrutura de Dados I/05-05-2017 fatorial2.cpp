#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    unsigned long long int fat;

    while (cin >> x)
    {
        fat = 1;
        for(int i = x; i >= 1; i = i - 1)
        {
            fat = fat * i;
        }
        cout << x << "!= " << fat  << endl;
    }
    return 0;
}


