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




