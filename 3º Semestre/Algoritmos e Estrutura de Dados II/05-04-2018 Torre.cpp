#include <bits/stdc++.h>

using namespace std;

void hanoy(int n, char origem, char aux, char destino)
{
    if(n == 1)
    {
        cout << "Mova o disco 1 de "<< origem << " para " << destino << endl;
    }
    else
    {
        hanoy(n - 1, origem, destino, aux);
        cout << "Mova o disco " << n << " de " << origem << " para " << destino << endl;
        hanoy(n - 1, aux, origem, destino);
    }
}

int main()
{
    int discos;
    cout << "TORRE DE HANOY" << endl;
    cout << endl;
    cout << "Digite a quantidade de discos: ";
    cin >> discos;
    hanoy(discos, 'A', 'B', 'C');
    return 0;
}
