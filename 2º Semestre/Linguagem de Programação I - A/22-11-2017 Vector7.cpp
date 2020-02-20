#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string texto;
    vector <char> letras[7];
    vector <char>::iterator it;
    getline(cin,texto);
    for(int i =0; i < texto.size(); i++)
    {
        int posicao = texto[i] % 7;
        char letra = texto[i];

        letras[posicao].push_back(letra);
    }
    for(int i =0; i < 7; i++)
    {
        cout << i << ": ";
        for(it = letras[i].begin(); it != letras[i].end(); it++ )
        {
            cout << " -> " << *it;
        }
        cout << endl;
    }
    return 0;
}
