#include <bits/stdc++.h>

#define MAX 1000

using namespace std;

void include_zeros(string &a, string &b)
{
    if(a.size() > b.size())
    {
        int _size = a.size() - b.size();
        string tmp;
        while(_size--)
        {
            tmp+="0";
        }
        b = tmp + b;
    }
    else
    {
        int _size = b.size() - a.size();
        string tmp;
        while(_size--)
        {
            tmp += "0";
        }
        a = tmp + a;
    }
}

int main()
{
    string a, b;

    cout <<"Integrantes:\n   Alexis Toigo,\n   Gabriel Brock,\n   Tiago Bellaver.\n";

    while(cin >> a >> b)
    {
        include_zeros(a, b);

        int soma = 0, resto = 0, s;
        string total = a;
        for(int i = a.size()-1; i >=0; i--)
        {
            s = (a[i]-'0') + (b[i]-'0')+resto;
            total[i] = (s%10) + '0';
            resto = s / 10;
        }
        if(resto) total = "1" + total;
        cout << total << endl;
    }
    return 0;
}
