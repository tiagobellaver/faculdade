#include <bits/stdc++.h>

///Uso de defines como uma esp�cie de fun��o dentro do programa
#define dobro(x) (x*2) ///define para fazer o dobro de um n�mero
#define quadrado(x) (x*x) ///define para fazer o quadrado de um n�mero
#define fori(i, x, y) for(i = x; i <= y; i++) ///define que substitui loop for
#define ford(i, x, y) for(i = x; i >= y; i--) ///define que substitui loop for
#define TAM 20 ///define para definir o tamanho da vari�vel TAM
#define potencia(x, y) pow(x, y) ///define para a fun��o pow
#define absoluto(x) fabs(x) ///define para a fun��o fabs
#define raiz(x) sqrt(x) ///define para a fun��o de raiz

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
