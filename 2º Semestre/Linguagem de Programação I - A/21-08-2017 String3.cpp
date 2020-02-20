#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int n,m;
    string nome;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        for(int j = 0; j < m; j++)
        {
            cin >> nome;
            cout << "NOME= " << nome << endl;
        }
        cout << endl;
    }
    return 0;
}
