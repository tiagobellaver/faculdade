#include <iostream>
#include <algorithm>

using namespace std;

bool ordena(char a, char b)
{
    return a > b;
}

int main()
{
    char x[11] = "hipopotamo";
    cout << x << " = ";
    sort(x, x + 10, ordena);
    cout << x << endl;

    string nome;
    getline(cin, nome);
    sort(nome.begin(), nome.end(), ordena);
    reverse(nome.begin(), nome.end());
    cout << nome << endl;
    return 0;
}
