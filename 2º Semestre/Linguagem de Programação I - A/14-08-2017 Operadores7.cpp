#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Digite um valor: ";
    cin >> x;
    cout << ((x % 2 == 0) ? "Par\n" : "Impar\n" );
    /*    cout << ((x % 2 == 0) ? "Par\n" : "Impar\n" ); mesma coisa que
    if(x % 2 == 0)
    {
        cout << "Par\n";
    }
    else
    {
        cout << "Impar\n";
    }
    */
    double y = (x < 10) ? (double) x / 2 : x * 2;
    /*double y = (x < 10) ? (double) x / 2 : x * 2; mesma coisa que
    if(y = (x < 10)
    {
        (double) x / 2;
    }
    else
    {
        x * 2;
    }
    */
    cout << "y = " << y << endl;
    return 0;
}
