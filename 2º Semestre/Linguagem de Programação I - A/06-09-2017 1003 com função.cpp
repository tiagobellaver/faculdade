#include <iostream>

using namespace std;

int soma(int a, int b)
{
    int soma;
    soma = a + b;
    return soma;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "SOMA = " << soma(a,b) << endl;
    return 0;
}
