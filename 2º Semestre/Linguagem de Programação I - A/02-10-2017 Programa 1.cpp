#include <bits/stdc++.h>

using namespace std;

int volume(double r)
{
    double v;
    double PI = 3.14159;
    v = (4 / 3.0) * PI * pow(r,3);
    cout << v << endl;
}

int main()
{
    double raio;
    cin >> raio;
    volume(raio);
    return 0;
}
