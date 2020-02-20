#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void decToBinA1(int n)///30
{
    int div;
    for(div = 1; div <= n; div *= 2);///1,2,4,8,16,32
    div = div / 2; ///32/2 = 16
    while(div != 0)
    {
        cout <<  n / div;
        n = n % div; ///if (dig==1) { n=n-div; }
        div = div / 2;
    }
    cout << endl;
}

void decToBinA2(int n)
{
    ///n = 123
    int aux = n;
    int dig, bit;
    for(bit = 1; bit <= n; bit *= 2);///1,2,4,8,16,32,64,128
    bit = bit / 2; ///128/2 = 64
    while(bit > 0)
    {
        dig = n / bit;
        if(dig == 1)
        {
            n = n - bit;
        }
        cout << dig;
        bit = bit / 2;
    }
    cout << endl;
}

void decToBin2(int n)
{
    int dig = 0, valor = 1073741824;
    bool mostra = false;
    while(valor > 0)
    {
        dig = n / valor;
        if(dig == 1)
        {
            n = n - valor;
            mostra = true;  ///2da fase
        }
        if(mostra)     ///2da fase
        {
            cout << dig;
        }
        valor = valor / 2;
    }
    cout << endl;
}

void decToBin3(int n)   ///123
{
    int resto;
    char saida[40];
    int cont =- 1;
    while(n != 0)
    {
        resto = n % 2;
        n = n / 2;
        saida[++cont] = resto + '0' ;
    }
    for(int i = cont; i >= 0; i--)
    {
        cout << saida[i];
    }
    cout << endl;
}

int main()
{
    char numero[10] = "123";
    char buffer[10];
    decToBinA1(atoi(numero));
    decToBinA2(atoi(numero));
    decToBin2(atoi(numero));
    decToBin3(atoi(numero));
    cout << itoa(atoi(numero),buffer,2) << endl; ///armazena o binario no buffer:)
    cout << buffer << endl;
    return 0;
}
