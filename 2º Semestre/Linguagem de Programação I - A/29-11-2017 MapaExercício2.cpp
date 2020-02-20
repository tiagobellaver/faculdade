#include <iostream>
#include <map>

using namespace std;

string minusculas(string mes)
{
    for(int i = 0; i < mes.size(); i++)
    {
        mes[i] = tolower(mes[i]);
    }
    return mes;1
}

int main()
{
    map <string,int> mapa;

    mapa["janeiro"] = 31;
    mapa["fevereiro"] = 28;
    mapa["marco"] = 31;
    mapa["abril"] = 30;
    mapa["maio"] = 31;
    mapa["junho"] = 30;
    mapa["julho"] = 31;
    mapa["agosto"] = 31;
    mapa["setembro"] = 30;
    mapa["outubro"] = 31;
    mapa["novembro"] = 30;
    mapa["dezembro"] = 31;

    string mes;

    while(cin >> mes)
    {
        cout << minusculas(mes) << " possui " << mapa[minusculas(mes)] << " dias." << endl;
    }
}
