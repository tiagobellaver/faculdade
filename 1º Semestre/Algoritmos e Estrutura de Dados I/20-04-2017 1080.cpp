#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, maior, i, posicao;
    cin >> N;
    maior = N;
    posicao = 1;
    for(int i = 2; i <= 100; i++)
    {
        cin >> N;
        if(N > maior)
        {
            maior = N;
            posicao = i;
        }
    }
    cout << maior << endl;
    cout << posicao << endl;
    return 0;
}
