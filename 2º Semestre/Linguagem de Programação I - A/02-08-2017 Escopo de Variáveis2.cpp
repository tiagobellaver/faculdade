#include <iostream>

using namespace std;

int i = 23; ///variável global, acessada em todo o programa

void mangojata()
{
    cout << "o global: " << i << endl;
}

void mangojata_mancuda(int i)
{
    cout << "i parametro: " << i << endl;
}

int main()
{
    int i = 10; ///variável local, acessada somente no programa main)
    for(int i = 1; i <= 5; i++)
    {
        cout << "dentro do for: " << i << endl;
    }
    cout << "dentro do main(): " << i << endl;
    mangojata(); ///invoca função mangojata
    mangojata_mancuda(40); ///invoca função mangojata_mancuda passando por paramêtro o valor 40
    return 0;
}
