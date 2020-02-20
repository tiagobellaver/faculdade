#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num[1001];
    int n, i;
    while(1)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        while(1)
        {
            int j = 1;
            int aux = 0;
            int aux1 = 0;

            stack <int> pilha;
            for(i = 1; i <= n; i++)
            {
                cin >> num[i];
                if(num[i] == 0)
                {
                    aux = 1;
                    cout << endl;
                    break;
                }
            }
            i = 1;
            while(1)
            {
                if(i > n)
                {
                    break;
                }
                if(aux == 1)
                {
                    break;
                }
                if(aux1 == 1)
                {
                    break;
                }
                while(1)
                {
                    if(!pilha.empty() && pilha.top() == num[i])
                    {
                        pilha.pop();
                        break;
                    }
                    else if(j <= n)
                    {
                        pilha.push(j);
                        j++;
                        if(pilha.top() == num[i])
                        {
                            pilha.pop();
                            break;
                        }
                    }
                    else
                    {
                        aux1 = 1;
                        break;
                    }
                }
                i++;
            }
            if(aux == 1)
            {
                break;
            }
            if(pilha.empty())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
