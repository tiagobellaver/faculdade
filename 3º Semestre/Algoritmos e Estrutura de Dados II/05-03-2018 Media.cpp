#include <bits/stdc++.h>

using namespace std;

float media(int vet2[10])
{
    float soma = 0;
    for(int i = 0; i < 10; i++)
    {
        soma += vet2[i];
    }
    return soma / 10;
}

int main()
{
    int i, vet[10];
    for(i = 0; i <10; i++)
    {
        cin >> vet[i];
    }
    float x = media(vet);
    cout << "media = " << x << endl;
    return 0;
}
