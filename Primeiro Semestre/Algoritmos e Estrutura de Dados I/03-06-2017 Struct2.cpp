#include <bits/stdc++.h>

using namespace std;

struct state
{
    int a, b, c;
    double d;
    void mostrar(int e)
    {
        cout << a << "A" << b << endl;
        cout << e * d << endl;
    }
};

int main()
{
    state ticanara;
    ticanara.a = 10;
    ticanara.b = 20;
    ticanara.c = 30;
    ticanara.d = 40;
    ticanara.mostrar(4);
}
