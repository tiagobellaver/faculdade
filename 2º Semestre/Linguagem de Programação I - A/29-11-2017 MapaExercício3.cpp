#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
    freopen("cidade.in","r",stdin);
    map <string,int> mapa;
    map <string,int>:: iterator it;
    string origem, destino;

    int n, cont = 1, peso;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> origem >> destino >> peso;
        if(mapa.find(origem) == mapa.end())
        {
            mapa[origem] = cont++;
        }
        if(mapa.find(destino) == mapa.end())
        {
            mapa[destino] = cont++;
        }
        cout << mapa[origem] << " " << mapa[destino] << endl;
    }
    for(it = mapa.begin(); it != mapa.end(); it++)
    {
        cout << it -> first << " " << it -> second << endl;
    }
    return 0;
}
