#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <char,int> mapa;
    map <char,int>::iterator it;
    char letra;
    string linha;

    cin >> linha;

    for(int i = 0; i < linha.size(); i++)
    {
        letra = linha[i];
        mapa[letra]++;
    }

    cout << linha << endl;
    cout << "Digite uma letra: ";
    cin >> letra;
    if(mapa.find(letra) != mapa.end())
    {
        cout << letra << "Existe!" << endl;
    }
    else
    {
        cout << letra << " nao existe!" << endl;
    }

    cout << "Mostra o mapa com as letras da entrada:" << endl;
    for(it = mapa.begin(); it != mapa.end(); it++)
    {
        cout << it -> first << " " << it -> second << endl;
    }
    return 0;
}
