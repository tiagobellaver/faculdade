#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    while(cin >> s)
    {
        n = atoi(s.c_str());

        if(n < 0)
        {
            return 0;
        }

        if(s[1] == 'x')
        {
            istringstream(s) >> hex >> n;
            cout << dec << n << endl;
        }
        else
        {
            cout << "0x" << hex << uppercase << n << endl;
        }
    }
    return 0;
}
