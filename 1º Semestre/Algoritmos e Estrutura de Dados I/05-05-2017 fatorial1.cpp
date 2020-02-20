#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, fat = 1;

    cin >> x;

    for(int i = x; i >= 1; i = i - 1)
    {
        fat = fat * i;
    }
    cout << x << "!= " << fat  << endl;
    return 0;
}


