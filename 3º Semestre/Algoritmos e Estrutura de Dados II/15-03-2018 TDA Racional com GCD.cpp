#include <bits/stdc++.h>

using namespace std;

int gdc(int x, int y)
{
    int aux = 0;
    for(; y%x != 0;)
    {
        aux = x;
        x = y%x;
        y = aux;
    }
    return x;
}

/*int maiordivisorcomun(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    else if (a > b)
    {
        return maiordivisorcomun(b, a - b);
    }
    else
    {
        return maiordivisorcomun(a, b - a);
    }
}*/

int resultadofinal(int a, int b)
{
    cout << a << '/' << b << " = ";
    int m = gdc(fabs(a),fabs(b));
    a /= m;
    b /= m;
    cout << a << '/' << b << endl;
}

int soma(int a, int b, int c, int d)
{
    int n1 = a * d + b * c;
    int n2 = b * d;
    resultadofinal(n1, n2);
}

int subtracao(int a, int b, int c, int d)
{
    soma(a, b, -c, d);
}

int multiplicacao(int a, int b, int c, int d)
{
    int n1 = a * c;
    int n2 = b * d;
    resultadofinal(n1, n2);
}

int divisao(int a, int b, int c, int d)
{
    multiplicacao(a, b, d, c);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        char operacao;
        char barra;
        cin >> a >> barra >> b >> operacao;
        cin >> c >> barra >> d;
        if(operacao == '+')
        {
            soma(a, b, c, d);
        }
        else if(operacao == '-')
        {
            subtracao(a, b, c, d);
        }
        else if(operacao == '*')
        {
            multiplicacao(a, b, c, d);
        }
        else if(operacao == '/')
        {
            divisao(a, b, c, d);
        }
    }
    return 0;
}


