#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int maior(int a, int b, int c)
{
    int maior;
    maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;
    return maior;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << maior(a, b, c) << " eh o maior" << endl;
}
