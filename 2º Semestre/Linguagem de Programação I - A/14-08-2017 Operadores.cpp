#include <iostream>

using namespace std;

int main()
{
    int a, b = 3, c = 4;
    a = b++; ///incrementa ++ no B após atribuir o valor antigo de B para a variável A
    cout << a << " " << b << endl;
    a++; ///incrementa o valor de A
    a = ++b; ///incrementa o valor de B antes de atribuir o novo valor para a variávl A
    cout << a << " " << b << " " << c << endl;
    a = b++ + ++c; ///incrementa primeiro ++c, depois atribui o valor da soma de b+c para a A e por último incrementa B
    cout << a << " " << b << " " << c << endl;
    c = --a - ++b - --c;///decrementa A e C, depois realiza a atribuição do valor de c por a - b - c e por último incrementa B
    cout << a << " " << b << " " << c << endl;
    return 0;
}
