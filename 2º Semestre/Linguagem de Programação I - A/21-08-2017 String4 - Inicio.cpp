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
        cin.get();
        getline(cin, nome); ///descarte
        for(int j = 0; j < n; j++)
        {
            getline (cin, nome);
            cout << "NOME= " << nome << endl;
        }
        cout << endl;
    }
    return 0;
}
