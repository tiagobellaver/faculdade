#include <iostream>
#include <algorithm>

using namespace std;

bool sorteia(char a, char b)
{
    return tolower(a) < tolower(b);
}

int main()
{
    string nome;
    getline(cin,nome);
    sort(nome.begin(), nome.end(), sorteia);
    cout << nome << endl;
}
