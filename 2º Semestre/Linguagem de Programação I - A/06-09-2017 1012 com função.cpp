#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double triangulo(double a, double c)
{
    double triangulo;
    triangulo = (a * c) / 2;
    return triangulo;
}

double circulo(double c)
{
    double circulo;
    circulo = pow(c,2) * 3.14159;
    return circulo;
}

double trapezio(double a, double b, double c)
{
    double trapezio;
    trapezio = (((a + b) * c) / 2);
    return trapezio;
}

double quadrado(double b)
{
    double quadrado;
    quadrado = b * b;
    return quadrado;
}

double retangulo(double a, double b)
{
    double retangulo;
    retangulo = a * b;
    return retangulo;
}

int main()
{
    cout << fixed << setprecision(3);
    double a, b, c;
    cin >> a >> b >> c;
    cout << "TRIANGULO: " << triangulo(a, c) << endl;
    cout << "CIRCULO: " << circulo(c) << endl;
    cout << "TRAPEZIO: " << trapezio(a, b, c) << endl;
    cout << "QUADRADO: " << quadrado(b) << endl;
    cout << "RETANGULO: " << retangulo(a, b) << endl;
    return 0;
}
