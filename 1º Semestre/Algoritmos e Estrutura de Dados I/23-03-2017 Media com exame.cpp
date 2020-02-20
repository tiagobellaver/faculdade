#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double n1, n2, media, exame;
    cin >> n1 >> n2;
    media = (n1 + n2) / 2;
    if (media <5.0)
    {
        cout << "Reprovado!" << endl;
    }
    else
    {
        if (media > 7)
        {
            cout << "Aprovado!" <<endl;
        }
        else
        {
            cout << "Exame!" << endl;
        }
    }
    cout << "Sua media:" << media << endl;
    return 0;
}
