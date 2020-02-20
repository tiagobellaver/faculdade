#include <bits/stdc++.h>

using namespace std;

bool eh_primo(int num)
{
    int limite = sqrt(num);
    for (int i = 2; i <= limite; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, num;
    cin >> n;
    while(n--)
    {
        cin >> num;
        if(eh_primo(num))
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}
