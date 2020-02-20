#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double div = 0;
    for (double i = 100, j = 3; j <= 60; i = i - 2, j = j + 3)
    {
        div = i / j;
        cout << div << endl;
    }
    return 0;
}
