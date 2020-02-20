#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("entrada.in","r",stdin);
    int casos;
    int aux;
    string arvore;
    map <string,int> mapa;
    map <string,int>::iterator it;
    cin >> casos;
    for(int i = 0; i < casos;)
    {
        mapa.clear();
        aux = 0;
        while(getline(cin,arvore))
        {
            if(arvore == "")
            {
                break;
            }
            else
            {
                aux++;
                mapa[arvore]++;
            }
        }
        int size = mapa.size();
        if(size > 0)
        {
            for(it = mapa.begin(); it != mapa.end(); ++it)
            {
                cout << it -> first << " ";
                cout << fixed << setprecision(4) << 100 * (double)it -> second / aux << endl;
            }
            if(i != casos - 1)
            {
                cout << endl;
            }
            i++;
        }
    }
    return 0;
}
