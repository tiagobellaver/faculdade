#include <iostream>

using namespace std;

int main()
{
    int c = 3123456789; /// valor muito grande para ser int, estouro de mem�ria
    cout << c << endl;

    unsigned int cc = 3123456789; ///usando unsigned, valor n�o ir� estourar
    cout << cc << endl;

    cc = 4294967295;
    cout << cc << endl;

    cc++; /// valor de cc � null, adicionando ++ continua sendo null (0)
    cout << cc << endl;

    return 0;
}
