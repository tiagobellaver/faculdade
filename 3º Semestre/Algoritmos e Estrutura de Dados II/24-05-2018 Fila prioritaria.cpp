#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue <string> pq;

    pq.push("Mangojata");
    pq.push("foi a feira");
    pq.push("Com Josefa Rinhado Mesmosaco");
    pq.push("omprar pessegos");

    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    cout << endl;

    priority_queue <string> nuemros;

    numeros.push(342342);
    numeros.push(1345135135);
    numeros.push(1235465876);
    numeros.push(4534523);

    while(!numeros.empty())
    {
        cout << numeros.top() << endl;
        numeros.pop();
    }
}
