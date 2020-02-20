#include <bits/stdc++.h>

using namespace std;

int restante(int x, int y)
{
    int aux = 0;
    for(int i = 1; i < x; i++)
    {
        aux = (aux + y) % i;
    }
    return aux;
}

int main()
{
    int n, x, y;
    while(1)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        y = 0;
        for(;;)
        {
          if(restante(n, y) != 11)
          {
              y++;
          }
          else
          {
            break;
          }
        }
        cout << y << endl;
    }
    return 0;
}
