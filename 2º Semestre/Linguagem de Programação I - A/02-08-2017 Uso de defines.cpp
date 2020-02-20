#include <iostream>

#define triplo(x) (x*3) ///define para fazer o triplo de um número
#define mensagem "Digite um valor: " ///define para imprimir uma mensagem
#define escrever cout << ///define para fazer a função de cout
#define ler cin >> ///define para fazer a função de cin
#define programa int main() ///define para fazer a função do int main
#define fim return 0 ///define para fazer a função de return 0

using namespace std;

programa
{
    int a;
    escrever mensagem;
    ler a;
    escrever "O triplo de " << a << " eh " << triplo(a) << "\n";
    fim;
}
