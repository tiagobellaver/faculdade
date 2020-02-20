#include <iostream>

using namespace std;

void mostradobro (double x)
{
    cout << "O dobro de " << x << " = " << x * 2 << endl;
}

void mostratriplo (double x)
{
    cout << "O triplo de " << x << " = " << x * 3 << endl;
}

void mostracubo (double x)
{
    cout << x << " ao cubo = " << x * x * x << endl;
}

void fatorial (double x)
{
    int fat = 1;
     for(int i = 2;  i <= x; i++)
    {
        fat = fat * i;
    }
    cout << "Fatorial de " << x << " = " << fat << endl;
}
