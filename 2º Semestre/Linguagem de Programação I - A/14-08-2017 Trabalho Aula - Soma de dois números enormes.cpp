#include <iostream>

using namespace std;

int main()  ///0        11        21        31       39
{
    // string a = "1111111111111111111111111111111111111165";
    // string b = "1212121212121212121212121212212121264";
    string a, b;
    cin >> a;
    cin >>b;

    char resultado[41];
    char s,t;
    int soma;
    int leva1=0;
    resultado[40] = '\0';
    for (int i=39; i>=0; i--)
    {
        s = a[i];
        t = b[i];
        soma = (s-'0')+(t-'0') + leva1; ///0+1 = 1
        leva1 = (soma > 9 ? 1 : 0 );
        //cout << soma << " ";
        if (soma > 9)
        {
            resultado[i] = soma%10 + '0';
        }
        else
        {
            resultado[i] = soma + '0';
        }
    }
    cout << resultado << endl;
    return 0;
}
