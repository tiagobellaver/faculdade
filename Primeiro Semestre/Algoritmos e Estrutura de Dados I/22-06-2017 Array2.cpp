w#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mat[3][4];
    int var = 1;
    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            mat[i][j] = var++;
        }
    }
    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            cout << setw(4) << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

