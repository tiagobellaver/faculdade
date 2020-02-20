#include<bits/stdc++.h>

using namespace std;

struct state
{
    int x, y;
    void ler()
    {
        cin >> x >> y;
    }
    bool operator <(state N)const
    {
        if(N.x == x)
        {
            return N.y>y;
        }
        return N.x>x;
    }
};

int main()
{
    state V[10];
    for(int i = 0; i < 5; i++ )
    {
        V[i].ler();
    }
    sort (V,V + 5);
    for(int i = 0; i < 5; i++)
    {
        cout << V[i].x << " " << V[i].y << endl;
    }
    return 0;
}
