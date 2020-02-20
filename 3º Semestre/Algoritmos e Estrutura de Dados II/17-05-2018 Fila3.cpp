#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue <int> fila;

    fila.push(3);
    fila.push(8);
    fila.pop();
    fila.push(3);
    fila.pop();
    fila.push(7);
    fila.pop();
    fila.push(6);
    fila.push(5);

    while(fila.size() > 0)
    {
        cout << fila.front() << endl;
        fila.pop();
    }
    return 0;
}
