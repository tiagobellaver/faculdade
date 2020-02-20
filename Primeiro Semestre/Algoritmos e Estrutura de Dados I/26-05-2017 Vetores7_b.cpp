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
    int limite = TAM - 1;
    while (limite >= 1)
    {
        for (int i = 0; i < limite; i++)
        {
            if (valor[i] > valor[i+1])
            {
                aux = valor[i]; //aux = a; a = b; b = aux;
                valor[i] = valor[i+1];
                valor[i+1] = aux;
            }
        }
        limite = limite - 1;
    }

    // escrita
    for (int i = 0; i < TAM; i++)
    {
        cout << "valor[" << i << "] = " << valor[i] << endl;
    }

    return 0;
}




