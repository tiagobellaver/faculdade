/* Sempre antes do primeiro getline(cin,...)
deve-se limpar 0 último <enter> da entrada caso necessário*/

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
