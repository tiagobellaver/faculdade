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
    else
    {
        /// nota é 5.0 ou maior
        if (media > 7)
        {
            cout << "aprovado..." << endl;
        }
        else
        {
            cout << "em exame..." << endl;
        }
    }
    cout << media << endl;

    return 0;
}
