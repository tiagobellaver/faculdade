#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    vector <int>::iterator p;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i); /// Insere 10 elementos
    }
    for(p = v.begin(); p!= v.end(); p++)
    {
        cout << *p << " "; /// Imprime os elementos do inicio para o fim
    }
    cout << endl;
    p = v.end();
    while(p != v.begin())
    {
        p--;
        cout << *p << " "; /// Imprime os elementos do fim para o inicio
    }
    return 0;
}
