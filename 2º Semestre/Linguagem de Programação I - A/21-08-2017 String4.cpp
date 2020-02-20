#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int nc, n;
    string nome;
    cin >> nc;
    for(int i = 0; i < nc; i++)
    {
        cin >> n;
        ///limpa o <enter> apos o numero
        cin.get();
        for(int j = 0; j < n; j++)
        {
            getline(cin, nome);
            cout << "NOME= " << nome << endl;
        }
        cout << endl;
    }
    return 0;
}
