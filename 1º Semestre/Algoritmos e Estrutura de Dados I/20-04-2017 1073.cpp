#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, z, a;
    cin >> n;
    i = 2;
    for(i >= 2; i <= n; i += 2)
    {
        z = pow(i,2);
        cout << i << "^2" << " = " << z << endl;
    }
    return 0;
}
