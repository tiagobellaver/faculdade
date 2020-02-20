#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    double div = 0;
    cin >> x;
    cin.get();
    while(x--)
    {
        string linha;
        string nome;
        double cont = 0, soma = 0;
        cin.get();
        getline(cin, nome);
        getline(cin, linha);
        stringstream y(linha);
        while(y >> linha)
        {
            soma += atof(linha.c_str());
            cont++;
        }
        div = soma / cont;
        cout << "Media = " << div << endl;
        cont = 0;
        cout << endl;
    }
    return 0;
}
