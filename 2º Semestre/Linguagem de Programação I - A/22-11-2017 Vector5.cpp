/***
Crie um vector inteiro com 10 linhas.
no seguinte formato:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9
10 10 10 10 10 10 10 10 10 10
***/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> b[10];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            b[i].push_back(i + 1);
        }
    }

    vector <int>::iterator p;

    for(int i = 0; i < 10; i++)
    {
        for(p = b[i].begin(); p != b[i].end(); p++)
        {
            cout << *p << " ";
        }
        cout << endl;
    }
    return 0;
}
