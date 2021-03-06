#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
    freopen("mapa.in","r",stdin);
    map <string,double> mapa;
    map <string,double>::iterator it;
    int n;
    string nome;
    double altura;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> nome >> altura;
        mapa[nome] = altura;
    }

    for(it = mapa.begin(); it != mapa.end(); it++)
    {
        cout << it -> first << " - " << it -> second << endl;
    }
    cout << endl;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> nome;
        cout << "Altura de " << nome << ": ";
        if(mapa.find(nome) != mapa.end())
        {
            cout << mapa[nome] << endl;
        }
        else
        {
            cout << "Elemento nao encontrado..." << endl;
        }
    }
    cout << endl;

    for(it = mapa.begin(); it != mapa.end(); it++)
    {
        cout << it -> first << " - " << it -> second << endl;
    }
    cout << endl;
    return 0;
}



