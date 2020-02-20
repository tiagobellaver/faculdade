#include <iostream>

using namespace std;

int main()
{
    for(int i = 'a'; i <= 'j'; i++)
    {
        cout << (char)i << ' '; ///Imprime as letras de 'a' a 'j'
    }
    cout << endl;
    for(int i = 'a'; i <= 'j'; i++)
    {
        cout << i << ' '; ///Imprime o valor correspondente de 'a' a 'j'  na tabela ASCII
    }
    cout << endl;
    for(char i = 'f'; i <= 'p'; i++)
    {
        cout << i << ' '; ///Imprime as letras de 'f' a 'p'
    }
    cout << endl;
    for(int i = 'f'; i <= 'p'; i++)
    {
        cout << i << ' '; ///Imprime o valor correspondente de 'f' a 'p' na tabela ASCII
    }
    return 0;
}
