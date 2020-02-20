#include <bits/stdc++.h>

using namespace std;

namespace first
{
int var = 5;
}

namespace second
{
double var = 3.1416;
}

int main()
{
    int var = 2;
    cout << var << endl;
    cout << first::var << endl;
    cout << second::var << endl;
    return 0;
}
