#include <bits/stdc++.h>

using namespace std;

int atual;

void build_tree(string pre, string in, int p, int q)
{
    if(p > q)
    {
        return;
    }
    atual++;
    if(q == p)
    {
        cout << in[p];
    }
    else
    {
        int pos = in.find(pre[atual]);
        build_tree(pre, in, p, pos - 1);
        build_tree(pre, in, pos + 1, q);
        cout << in[pos];
    }
}

int main()
{
    string pre, in;
    while(cin >> pre >> in)
    {
        atual = -1;
        build_tree(pre,in,0,in.size()-1);
        cout << endl;
    }
    return 0;
}
