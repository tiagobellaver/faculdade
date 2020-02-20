#include <bits/stdc++.h>

using namespace std;

int main()
{
    char mat[5][5];
    for(int i = 0; i <= 4; i++)
    {
        for(int j = 0; j <= 4; j++)
        {
            mat[i][j] = '*';
            if(i == j or i + j == 4)
                mat[i][j] = 'o';
        }
    }

    for(int i = 0; i <= 4; i++)
    {
        for(int j = 0; j <= 4; j++)
        {

            cout << setw(2) << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

