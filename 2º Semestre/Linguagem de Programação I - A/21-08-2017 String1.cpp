#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    string nome;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> nome;
        cout << "NOME= " << nome << endl;
    }
    return 0;
}
