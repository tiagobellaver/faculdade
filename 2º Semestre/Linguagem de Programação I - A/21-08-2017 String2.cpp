#include <iostream>
#include <cstdio>
///#include <string>

using namespace std;

int main()
{
    int n;
    string nome;
    cin >> n;
    cin.get(); ///limpa o <enter> apos o numero
    for(int i = 0; i < n; i++)
    {
        getline(cin,nome);
        cout << "NOME= " << nome << endl;
    }
    return 0;
}
