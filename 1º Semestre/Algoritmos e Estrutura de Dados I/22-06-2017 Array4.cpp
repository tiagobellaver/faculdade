#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mat[5][5];
    int var = 1;
    for(int i = 0; i <= 4; i++)
    {
        for(int j = 0; j <= 4; j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i <= 4; i++)
    {
        for(int j = 0; j <= 4; j++)
        {
            if(mat[i][j] % 2 == 0)
            {
                cout << "M["<< i << "][" << j <<"] = " << mat[i][j] << endl;
            }
        }
    }
    return 0;
}

