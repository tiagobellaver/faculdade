#include <bits/stdc++.h>

using namespace std;

int duracao(int d)
{
    int h, m, s;
    h = d / 3600;
    d = d % 3600;
    m = d / 60;
    s = d % 60;
    cout << h <<":" << m << ":" << s << endl;
}

int main()
{
    int d;
    cin >> d;
    duracao(d);
    return 0;
}
