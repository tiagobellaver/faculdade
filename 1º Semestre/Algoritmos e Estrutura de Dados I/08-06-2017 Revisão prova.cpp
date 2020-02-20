#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double x, aux = 0, div = 0;
    cin >> x;
    for(int i = 1, j = 10; i <= 20; i++, j = j + 10)
    {
        aux = pow(x,2) * i;
        div = div + aux / j;
    }
    cout << div << endl;
    return 0;
}
