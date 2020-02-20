#include <iostream>

using namespace std;

int main()
{
    int TAM = 3;
    string sala[TAM];
    for (int i = 0; i < TAM; i++)
    {
        cin >> sala[i];
    }
    cout << endl;
    for (int i = TAM - 1; i >= 0; i--)
    {
        cout << sala[i] << endl;
    }
    return 0;
}
