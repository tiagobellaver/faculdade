#include <bits/stdc++.h>

using namespace std;

int caractere(char a)
{
    for(int i = a; i <= 'z'; i++)
    {
        cout << (char)i << ' ';
    }
    cout << endl;
}

int main()
{
    char a;
    cin >> a;
    caractere(a);
    return 0;
}
