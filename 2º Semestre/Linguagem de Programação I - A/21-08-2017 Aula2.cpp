#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    string nome;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        cin >> y;
        for(int j = 0; j < y; j++)
        {
            cin >> nome;
            cout << nome << " ";
        }
        cout << endl;
    }
    return 0;
}
