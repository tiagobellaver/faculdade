#include <iostream>

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
        cout << "sala[" << i << "] = ";
        cin >> sala[i];
    }
    cout << endl;
    for (int i = TAM - 1; i >= 0; i--)
    {
        cout << "sala[" << i <<"] = " << sala[i] << endl;

    }
    return 0;
}

