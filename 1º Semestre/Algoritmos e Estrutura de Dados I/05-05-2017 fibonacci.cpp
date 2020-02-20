#include <iostream>

using namespace std;

int main()
{
    int ultimo, anterior, N, calculado;
    anterior = 0;
    ultimo = 1;
    cin >> N;
    cout << anterior << ", " << ultimo;
    for(int i = 2; i < N; i++)
    {
        calculado = anterior+ultimo;
        cout << ", " << calculado;
        anterior = ultimo;
        ultimo = calculado;
    }
    return 0;
}
