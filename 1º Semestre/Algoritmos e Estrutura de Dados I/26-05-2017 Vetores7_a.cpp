#include <iostream>
#include <cstdio>

/*apresentar na saída cada uma das posições dos vetor:
sala[0] = João
sala[1] = Maria
sala[2] = Pedro
*/

using namespace std;

int main()
{
    int TAM = 10, aux;
    int valor[TAM];
    // leitura
    for (int i = 0; i < TAM; i++)
    {
        cin >> valor[i];
    }
    if (valor[0] > valor[1])
    {
        aux = valor[0];
        valor[0] = valor[1];
        valor[1] = aux;
    }
    if (valor[1] > valor[2])
    {
        aux = valor[1];
        valor[1] = valor[2];
        valor[2] = aux;
    }
    if (valor[2] > valor[3])
    {
        aux = valor[2];
        valor[2] = valor[3];
        valor[3] = aux;
    }
// escrita
    for (int i = 0; i < TAM; i++)
    {
        cout << "valor[" << i << "] = " << valor[i] << endl;
    }

    return 0;
}




