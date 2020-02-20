#include <bits/stdc++.h>

using namespace std;

int flavious(int x, int y)
{
    if(x == 1)
    {
        return 0;
    }
    return (flavious(x - 1, y) + y) % x;
}

int main()
{
    int casos;
    cin >> casos;
    for(int i = 1; i <= casos; i++)
    {
        int n, k;
        cin >> n;
        cin >> k;
        cout << "Case " << i << ": " << flavious(n,k) + 1 << endl;
    }
    return 0;
}
