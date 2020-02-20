#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    cout << setw(6) << right << 123 << endl; ///imprime 123 com alinhamento à direita com 6 espaços da margem esquerda
    cout << dec << setw(6) << left << 123 << endl << endl; ///imprime 123 na margem esquerda
    int valor;
    cout << "digite um valor: ";
    cin >> valor;
    cout << dec << valor << endl; ///Imprime o valor digitado em decimal
    cout << hex << valor << endl; ///Imprime o valor digitado em hexadecimal
    cout << uppercase << hex << valor << endl; ///Imprime o valor em hexadecimal e em maiusculo
    cout << oct << valor << endl; ///imprime o valor em octal
    int number = 0x3FF;
    cout << "Decimal: " << number << endl; ///imprime o valor 0x3FF em decimal
    char str[20];
    cout << "Valor hexadecimal (0xc, C ou c por exemplo): ";
    cin >> str;
    cout << dec << strtol(str,NULL,16) << endl; ///função strtol converte a string em uma long int
    cout << "Digite um valor em binario (1111 por exemplo): ";
    cin >> str;
    cout << strtol(str,NULL,2) << endl; ///função strtol converte a string em uma long int
    cout << hex << strtol(str,NULL,2) << endl; ///função strtol converte a string em hexa
    cout << strtol(str,NULL,2) << endl;
    cout << dec << strtol(str,NULL,2) << endl; ///função strtol converte a string em decimal
    return 0;
}
