#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int duracao(int x, int y)
{
    int duracao;
    if(x > y)
    {
        int horasDia1 = 24 - x;
        int horasDia2 = y;
        return horasDia1 + horasDia2;
    }
    else if(x < y)
    {
        int horasDoJogo = y - x;
        return horasDoJogo;
    }
    else if(x == y)
    {
        return 24;
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << "O JOGO DUROU " << duracao(x,y) << " HORA(S)" << endl;
    return 0;
}
