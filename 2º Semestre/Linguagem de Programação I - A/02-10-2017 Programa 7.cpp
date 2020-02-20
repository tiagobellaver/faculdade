#include <bits/stdc++.h>

using namespace std;

bool type(int a)
{
    if(a % 2 == 0)
    {
        return cout << "True" << endl;
    }
    else
    {
        return cout << "False" << endl;
    }
}

int main()
{
    int a;
    cin >> a;
    type(a);
    return 0;
}
