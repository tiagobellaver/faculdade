#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <string,int> mapa;

    mapa["Janeiro"] = 31;
    mapa["Fevereiro"] = 28;
    mapa["Marco"] = 31;
    mapa["Abril"] = 30;
    mapa["Maio"] = 31;
    mapa["Junho"] = 30;
    mapa["Julho"] = 31;
    mapa["Agosto"] = 31;
    mapa["Setembro"] = 30;
    mapa["Outubro"] = 31;
    mapa["Novembro"] = 30;
    mapa["Dezembro"] = 31;

    string mes;

    while(cin >> mes)
    {
        cout << mes << " possui " << mapa[mes] << " dias." << endl;
    }
}
