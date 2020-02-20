 #include <iostream>

using namespace std;

typedef struct
{
    int numerador;
    int denominador;
} RACIONAL;

RACIONAL r1,r2,soma, mult, simpl;

int main(void)
{
    int resultado;
    cout << "Digite o 1ro numerador: ";
    cin >> r1.numerador;
    cout << "Digite o 1ro denominador: ";
    cin >> r1.denominador;
    cout << "Digite o 2do numerador: ";
    cin >> r2.numerador;
    cout << "Digite o 2do denominador: ";
    cin >> r2.denominador;

    ///adicão

    ///subtracao

    ///divisão

    ///multiplicação
    resultado = ((r1.numerador * r2.denominador) + (r1.denominador * r2.numerador)) / (r1.denominador * r2.denominador);
    cout << resultado << endl;

    ///simplificação

    return (0);
}
