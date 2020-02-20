#include <iostream>
#include <iomanip>

using namespace std;

double abs1(double valor)
{
    if(valor <0)
    {
        valor *=-1;
    }
    return valor;
}

int abs2(int valor)
{
    if(valor <0)
    {
        valor *=-1;
    }
    return valor;
}

int main()
{
    cout << fixed << setprecision(8);
    cout << abs1(4 - 6) << endl;
    cout << abs2(4 - 6) << endl;
    return 0;
}
