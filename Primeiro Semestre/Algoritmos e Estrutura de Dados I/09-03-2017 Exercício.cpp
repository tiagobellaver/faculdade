#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    int x, y, z;
    cin >> x;
    cout << x << " ao cubo = " << pow(x,3) << endl;

    cin >> y;
    cout << x + y << endl;

    z = x / y;
    cout << z << endl;

    z = int(z);
    cout << z << endl;

    z = z + 7;
    x = abs(y - z);
    x = x % z;
    cout << x << endl;
    return 0;
}
