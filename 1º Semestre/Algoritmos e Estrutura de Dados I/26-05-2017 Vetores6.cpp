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
    for (int i = 0; i < TAM; i++)
    {
    cout << "valor[" << i << "] = " << valor[i] << endl;
    }

    return 0;
}




