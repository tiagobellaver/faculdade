#include <iostream>

using namespace std;

int i = 23; ///vari�vel global acessada em todo o programa

void mangojata()
{
    cout << "i global: " << i << endl;
}

int main()
{
    int i = 10; /// vari�vel local, acessada somente dentro do int main.
    for(int i = 1 ; i <= 5; i++)
    {
        cout << "dentro do for: " << i << endl;
    }
    cout << "dentro do main(): " << i << endl;
    mangojata(); ///invoca a fun��o mangojata
    return 0;
}
