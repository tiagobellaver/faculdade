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
    int TAM = 3;
    string sala[TAM];
    for (int i = 0; i < TAM; i++)
    {
        cin >> sala[i];
    }
    for (int i = TAM - 1; i >= 0; i--)
    {
        cout << "sala[" << i <<"] = " << sala[i] << endl;

    }
    return 0;
}


