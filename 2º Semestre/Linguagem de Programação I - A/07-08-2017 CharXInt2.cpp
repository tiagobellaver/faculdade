///Programa que imprime a tabela ASCII do valor 32 até 254
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int cont = 0;
    for(int i = 32; i <= 254; i++)
    {
        cout << setw(3) << (int)i << " = " << (char)i << ' ' << endl;
        cont++;
        if(cont % 7 == 0)
        {
            cont = 0;
            cout << endl;
        }
    }
    cout << endl << endl;
    return 0;
}
