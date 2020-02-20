#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v; /// Cria vector de inteiros
    v.push_back(5); /// Adiciona 5 no final
    v.push_back(8); /// Adiciona 8 no final
    v.push_back(2); /// Adiciona 2 no final
    v.push_back(14); /// Adiciona 14 no final

    cout << v[1] << endl;
    cout << v[3] << endl;

    v.pop_back(); /// Apaga o ultimo

    cout << v.size() << " Elementos." << endl;

    return 0;
}
