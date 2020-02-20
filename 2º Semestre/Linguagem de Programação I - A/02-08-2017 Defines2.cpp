#include <bits/stdc++.h>

///Uso de defines como uma espécie de função dentro do programa
#define dobro(x) (x*2) ///define para fazer o dobro de um número
#define quadrado(x) (x*x) ///define para fazer o quadrado de um número
#define fori(i, x, y) for(i = x; i <= y; i++) ///define que substitui loop for
#define ford(i, x, y) for(i = x; i >= y; i--) ///define que substitui loop for
#define TAM 20 ///define para definir o tamanho da variável TAM
#define potencia(x, y) pow(x, y) ///define para a função pow
#define absoluto(x) fabs(x) ///define para a função fabs
#define raiz(x) sqrt(x) ///define para a função de raiz

using namespace std;

int main()
{
    int a = 3, b = 6, i;
    double x = 7.3;
    cout << "a: " << a << " b: " << b << " x: " << x << endl;
    cout << "Dobro de a: " << dobro(a) << " " << endl;
    cout << "Quadrado de a: " << quadrado(a) << " " << endl;
    fori(i, a, b)
    {
        cout << i << " ";
    }
    cout << endl;
    fori(i, 6, 10)
    {
        cout << i << " ";
    }
    cout << endl;
    ford(i, TAM - 15, 0)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << potencia(2,3) << endl;
    cout << absoluto(-6.5) << endl;
    cout << fixed << setprecision(12);
    cout << raiz(2) << endl;
}
