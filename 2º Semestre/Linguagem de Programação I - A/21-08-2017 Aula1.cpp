/* Sempre antes do primeiro getline(cin,...)
deve-se limpar 0 �ltimo <enter> da entrada caso necess�rio*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    string name;
    cin.get();
    for(int i = 0; i < x; i++)
    {
        getline(cin,name);
        cout << "Nome = " << name << endl;
    }
    return 0;
}
