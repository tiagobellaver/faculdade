#include <iostream>

using namespace std;

int operacao(string x, double a, double b)
{
    if(x == "soma" or x == "SOMA")
    {
        return a + b;
    }
    if(x == "subtracao" or x == "SUBTRACAO")
    {
        return a - b;
    }
    if(x == "divisao" or x == "DIVISAO")
    {
        return a / b;
    }
    if(x == "produto" or x == "PRODUTO")
    {
        return a * b;
    }
    if(x == "FIM" or x == "fimx")
    {
        return false;
    }
}

int main()
{
    string tipo;
    double b, a, result;
    int n;
    cin >> tipo;
    while(tipo != "FIM" )
    {
        cin >> a >> b;
        cout << operacao(tipo, a, b) << endl;
        cin >> tipo;
    }
    return 0;
}
