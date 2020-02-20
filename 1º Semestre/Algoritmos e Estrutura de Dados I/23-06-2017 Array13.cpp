#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mat[9][9];
    int var = 1;
    int soma = 0;
    for(int i = 0; i <= 8; i++)
    {
        for(int j = 0; j <= 8; j++)
        {
            mat[i][j] = var++;
        }
    }
    for(int i = 5; i <= 8; i++)
    {
        for(int j = 9 - i; j <= i - 1; j++)
        {
            soma = soma + mat[j][i];
        }
    }
    for(int i = 0; i <= 8; i++)
    {
        for(int j = 0; j <= 8; j++)
        {
            cout << setw(4) << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << soma << endl;
    return 0;
}
