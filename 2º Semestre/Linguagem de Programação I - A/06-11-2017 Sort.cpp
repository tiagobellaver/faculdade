#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int i, dados[10] = {110, 104, 103, 59, 56, 50, 40, 38, 9, -10};

    sort(dados, dados + 10);

    cout << "Ordenado: " << endl;
    for(i = 0; i < 10; i++)
    {
        cout << dados[i] << " ";
    }
    return 0;
}
