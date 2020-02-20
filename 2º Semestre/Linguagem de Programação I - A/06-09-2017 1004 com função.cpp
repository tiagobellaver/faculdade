#include <iostream>

using namespace std;

int produto(int a, int b)
{
    int produto;
    produto = a * b;
    return produto;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "PROD = " << produto(a,b) << endl;
    return 0;
}
