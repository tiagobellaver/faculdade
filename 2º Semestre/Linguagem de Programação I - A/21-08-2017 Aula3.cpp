#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    int nn;
    string name;
    cout << "Digite o numero de casos: ";
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        cout << endl;
        cout << "Digite o numero de nomes: ";
        cin >> nn;
        cin.get();
        for(int j = 1; j <= nn; j++)
        {
            cout << "Digite o " << j << ": ";
            getline(cin,name);
            cout << "Nome = " << name << endl;
        }
        cout << endl;
    }
    return 0;
}
