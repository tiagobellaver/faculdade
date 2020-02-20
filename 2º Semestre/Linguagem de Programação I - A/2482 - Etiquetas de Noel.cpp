#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("mensagem.in","r",stdin);
    map <string,string> map_mensagem;

    int n, m;
    string linguagem;
    string mensagem;

    cin >> n;
    cin.get();

    for(int i = 0; i < n; i++)
    {
        getline(cin,linguagem);
        getline(cin,mensagem);
        map_mensagem[linguagem] = mensagem;
    }

    cin >> m;
    cin.get();

    for(int i = 0; i < m; i++)
    {
        string nome;

        getline(cin,nome);
        getline(cin,linguagem);

        cout << nome << endl;
        cout << map_mensagem[linguagem] << endl;
        cout << endl;
    }

    return 0;
}
