#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.get();
    while(x--)
    {
        string nome;
        double nota;
        getline(cin, nome);
        cin >> nota;
        cout << nome << endl;
        cin.get();
        cout << fixed << setprecision(1) << nota << endl;
    }
}
