#include <iostream>
#include <cstdio>

/*apresentar na sa�da cada uma das posi��es dos vetor:
sala[0] = Jo�o
sala[1] = Maria
sala[2] = Pedro
*/

using namespace std;

int main()
{
    int TAM = 10;
    int valor[TAM];
    for (int i = 0; i < TAM; i++)
    {
        cin >> valor[i];
    }
    int soma = 0;
    for (int i = 0; i < TAM; i++)
    {
        soma = soma + valor[i];
    }
    cout << "Soma = " << soma << endl;
    return 0;
}



