#include <iostream>

using namespace std;

int main()
{
    double N1, N2, media;

    cin >> N1 >> N2;

    media = (N1 + N2) / 2;

    if (media < 5 )
    {
        cout << "reprovado..." << endl;
    }

    if (media >= 7)
    {
        cout << "aprovado..." << endl;
    }

    if (media >= 5 and media < 7)
    {
        cout << "em exame..." << endl;
    }

    cout << media << endl;

    return 0;
}
