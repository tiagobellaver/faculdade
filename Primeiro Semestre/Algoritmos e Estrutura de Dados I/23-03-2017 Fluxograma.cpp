#include <iostream>

using namespace std;

int main()
{
    double n1, n2, media;
    cin >> n1 >> n2;
    media = (n1 + n2) / 2;

    if (media >= 5)
    {
        cout << "Aprovado" << endl;
    }
    else
    {
        cout << "Reprovado" << endl;
    }
    return 0;
}
