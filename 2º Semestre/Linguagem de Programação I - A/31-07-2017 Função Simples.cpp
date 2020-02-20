#include <iostream>

#define triplo(x) (x*3)
#define mensagem "Digite um valor: "

using namespace std;

int main(void)
{
    int a;
    cout << mensagem;
    cin >> a;
    cout << "Triplo de " << a << " = " << triplo(a) << "\n";
    return (0);
}
