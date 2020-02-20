#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v; /// Cria vector de inteiros
    vector <int>::iterator p;

    v.push_back(5); /// Adiciona 5 no final;
    v.push_back(8);
    v.push_back(2);
    v.push_back(14);
    v.push_back(4);
    v.push_back(88);
    v.push_back(-2);

    sort(v.begin(), v.end());

    for(p = v.begin(); p != v.end(); p++)
    {
        cout << *p << " "; /// Imprime os elesmentos ordenados
    }
    return 0;
}
