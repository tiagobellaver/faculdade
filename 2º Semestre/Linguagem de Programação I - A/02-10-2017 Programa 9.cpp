#include <bits/stdc++.h>

using namespace std;

int potencia(int num, int exp)
{
    int total = 1;
    for(int i = 1; i <= exp; i++)
    {
        total = total * num;
    }
    return total;
}


int main()
{
    int num, exp, result;
    cin >> num >> exp;
    result = potencia(num, exp);
    cout << result << endl;
    return 0;
}
