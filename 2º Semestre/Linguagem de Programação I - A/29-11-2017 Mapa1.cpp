#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
    freopen("mapa.in","r",stdin);
    map <string,double> map_alt;
    int n;
    string nome;
    double altura;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> nome >> altura;
        map_alt[nome] = altura;
    }

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> nome;
        cout << "Altura de " ;
        cout << nome << " = " << map_alt[nome] << endl;
    }
    return 0;
}
