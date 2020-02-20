#include <bits/stdc++.h>

using namespace std;

int menor(int a, int b, int c)
{
    if(a < b and a < c)
    {
        return a;
    }
    if(b < a and b < c)
    {
        return b;
    }
    if(c < a and c < b)
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    menor(a, b, c);
    cout << "O menor numero eh: " << menor(a, b, c) << endl;
    return 0;
}
