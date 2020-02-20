#include <bits/stdc++.h>

using namespace std;

int main()
{
    char linha[2000];
    char entrada[1000], saida[1000];
    int n, i, j;
    stack <char> pilha;

    while(cin >> n && n)
    {
        for(i = 0; i < n; i++)
        {
            cin >> entrada[i];
        }
        for(i = 0; i < n; i++)
        {
            cin >> saida[i];
        }
        entrada[n] = saida[n] = '\0';
        i = j = 0;
        while(1)
        {
            if(!pilha.empty() && j < n && pilha.top() == saida[j])
            {
                pilha.pop();
                cout << "R";
                j++;
            }
            else if(i < n)
            {
                pilha.push(entrada[i]);
                cout << "I";
                i++;
            }
            else
            {
                break;
            }
        }
        if(pilha.empty())
        {
            cout << endl;
        }
        else
        {
            cout << " Impossible" << endl;
        }
        while(!pilha.empty())
        {
            pilha.pop();
        }
    }
    return 0;
}
