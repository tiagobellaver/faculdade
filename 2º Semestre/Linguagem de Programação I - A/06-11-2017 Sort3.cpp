#include <iostream>
#include <algorithm>

bool sorteia(int a, int b)
{
    return a > b;
}

using namespace std;

int main()
{
    int i, dados[10] = {1, 4, 3, 56, 78, 456, 6456, 88, 9, -10};

    sort(dados, dados + 10, sorteia);

    cout << "Ordenado: " << endl;
    for(i = 0; i < 10; i++)
    {
        cout << dados[i] << " ";
    }
    return 0;
}

