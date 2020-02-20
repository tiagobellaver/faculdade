#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mat[2][3];
    int var = 1;
    for(int i = 0; i <= 1; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i <= 1; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            cout << setw(4) << abs (mat[i][j] * 3) << " ";
        }
        cout << endl;
    }
    return 0;
}

