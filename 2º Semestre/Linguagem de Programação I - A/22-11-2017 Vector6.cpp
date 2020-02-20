#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    vector <string> nome[11];
    vector <string>::iterator p;

    double nota;
    int testes;
    cin >> testes;
    for(int i = 0; i < testes; i++)
    {
        string tmp;
        cin >> tmp >> nota;
        nome[int (nota)].push_back(tmp);
    }
    for(int i = 0; i < 11; i++)
    {
        cout << i << " ";
        for(p = nome[i].begin(); p != nome[i].end(); p++)
        {
            cout << *p << " ";
        }
        cout << endl;
    }
    return 0;
}
