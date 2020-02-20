#include <bits/stdc++.h>

using namespace std;

int cont;
int fibonacci(int n)
{
    cont++;
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}
int main()
{
    int n, o;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> o;
        cont = 0;
        cout << "fib(" << o << ") = " << cont - 1 << " calls = " << fibonacci(o) << endl;
    }
    return 0;
}
