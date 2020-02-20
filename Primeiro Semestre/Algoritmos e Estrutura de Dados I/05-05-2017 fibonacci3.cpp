#include <iostream>

using namespace std;

int main()
{
    int Fib[40], N;
    /// Programacao Dinamica
    Fib[0] = 0; /// anterior -> Fib[n-2]
    Fib[1] = 1; /// ultimo -> Fib[n-1]
    cout << "0, 1";
    for(int i = 2; i < 40; i++)
    {
        Fib[i] = Fib[i - 1] + Fib[i - 2];
        cout << ", " << Fib[i];
    }
    cout << endl;
    while (cin >> N)
    {
        cout << Fib[N] << endl;
    }
    return 0;
}
