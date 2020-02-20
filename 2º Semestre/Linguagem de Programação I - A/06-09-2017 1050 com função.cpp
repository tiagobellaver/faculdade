#include <iostream>
#include <iostream>

using namespace std;

int ddd(int x)
{
    int ddd;
    if(x == 61)
    {
        cout << "Brasilia" << endl;
    }
    else if(x == 71)
    {
        cout << "Salvador" << endl;
    }
    else if(x == 11)
    {
        cout << "Sao Paulo" << endl;
    }
    else if(x == 21)
    {
        cout << "Rio de Janeiro" << endl;
    }
    else if(x == 32)
    {
        cout << "Juiz de Fora" << endl;
    }
    else if(x == 19)
    {
        cout << "Campinas" << endl;
    }
    else if(x == 27)
    {
        cout << "Vitoria" << endl;
    }
    else if(x == 31)
    {
        cout << "Belo Horizonte" << endl;
    }
    else
    {
        cout << "DDD nao cadastrado" << endl;
    }
    return ddd;
}

int main()
{
    int x;
    cin >> x;
    ddd(x);
    return 0;
}
