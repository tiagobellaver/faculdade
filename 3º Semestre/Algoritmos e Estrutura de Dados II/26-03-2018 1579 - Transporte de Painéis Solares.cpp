#include <bits/stdc++.h>

using namespace std;

int getMaxPeso(vector <int> dados, int caminhao)
{
    int n = dados.size();
    int low = *max_element(dados.begin(), dados.end());
    int high = accumulate(dados.begin(), dados.end(), 0);
    while(low < high)
    {
        int x = low + (high - low) / 2;
        int requirido = 1, carregado = 0;
        for(int i = 0; i < n; i++)
        {
            if(carregado + dados[i] <= x)
            {
                carregado += dados[i];
            }
            else
            {
                requirido++;
                carregado = dados[i];
            }
        }
        if(requirido <= caminhao)
        {
            high = x;
        }
        else
        {
            low = x + 1;
        }
    }
    return low;
}
int main()
{
    int testes;
    int nPaineis, caminhoes, frete;
    int x;
    cin >> testes;

    for(int i = 0; i < testes; i++)
    {
       cin >> nPaineis >> caminhoes >> frete;
       vector <int> pesos;
        for(int j = 0; j < nPaineis; j++)
        {
            cin >> x;
            pesos.push_back(x);
        }
        int z = getMaxPeso(pesos, caminhoes);
        cout << z << " $" << (z * caminhoes * frete) << endl;
    }

    return 0;
}
