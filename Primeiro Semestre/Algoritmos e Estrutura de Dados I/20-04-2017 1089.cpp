#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, v[3], resultado, p0, p1;
    while(1)
    {
        cin >> n;
        if(n == 0) break;
        resultado = 0;
        cin >> v[0];
        cin >> v[1];
        if(n == 2)
        {
            if(v[0] != v[1])
            {
                resultado = 2;
            }
        }
        else
        {
            p0 = v[0];
            p1 = v[1];
            for(i = 2; i < n; i++)
            {
                cin >> v[2];
                if(((v[1] > v[0]) and (v[1] > v[2])) or ((v[1] < v[0]) and (v[1] < v[2])))
                {
                    ++resultado;
                }
                v[0] = v[1];
                v[1] = v[2];
            }
            if ((p0 > p1 and p0 > v[2]) or (p0 < p1 and p0 < v[2]))
            {
                ++resultado;
            }
            if ((v[2] > v[0] and v[2] > p0) or (v[2] < v[0] and v[2] < p0))
            {
                ++resultado;
            }
        }
        cout << resultado << endl;
    }
    return 0;
}
