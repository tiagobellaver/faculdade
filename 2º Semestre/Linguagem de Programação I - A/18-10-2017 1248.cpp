#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    string dieta;
    string cafe;
    string almoco;
    cin >> casos;
    cin.get();
    while(casos--)
    {
        getline(cin,dieta);
        getline(cin,cafe);
        getline(cin,almoco);
        int scafe = cafe.size();
        int salmoco = almoco.size();
        int posicao;
        bool trapacear = 0;
        for(int x = 0; x < scafe; x++)
        {
            posicao = dieta.find(cafe[x]);
            if(posicao == -1)
            {
                trapacear = 1;
                break;
            }
            else
            {
                dieta.erase(posicao,1);
            }
        }
        for(int y = 0; y < salmoco; y++)#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    string dieta;
    string cafe;
    string almoco;
    cin >> casos;
    cin.get();
    while(casos--)
    {
        getline(cin,dieta);
        getline(cin,cafe);
        getline(cin,almoco);
        int scafe = cafe.size();
        int salmoco = almoco.size();
        int posicao;
        bool trapacear = 0;
        for(int x = 0; x < scafe; x++)
        {
            posicao = dieta.find(cafe[x]);
            if(posicao == -1)
            {
                trapacear = 1;
                break;
            }
            else
            {
                dieta.erase(posicao,1);
            }
        }
        for(int y = 0; y < salmoco; y++)
        {
            posicao = dieta.find(almoco[y]);
            if(posicao == -1)
            {
                trapacear = 1;
                break;
            }
            else
            {#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    string dieta;
    string cafe;
    string almoco;
    cin >> casos;
    cin.get();
    while(casos--)
    {
        getline(cin,dieta);
        getline(cin,cafe);
        getline(cin,almoco);
        int scafe = cafe.size();
        int salmoco = almoco.size();
        int posicao;
        bool trapacear = 0;
        for(int x = 0; x < scafe; x++)
        {
            posicao = dieta.find(cafe[x]);
            if(posicao == -1)
            {
                trapacear = 1;
                break;
            }
            else
            {
                dieta.erase(posicao,1);
            }
        }
        for(int y = 0; y < salmoco; y++)
        {
            posicao = dieta.find(almoco[y]);
            if(posicao == -1)
            {
                trapacear = 1;
                break;
            }
            else
            {
                dieta.erase(posicao, 1);
            }
        }
        if(!trapacear)
        {
            sort(dieta.begin(), dieta.end());
            cout << dieta << endl;
        }
        else
        {
            cout << "CHEATER" << endl;
        }
    }
    return 0;
}

                dieta.erase(posicao, 1);
            }
        }
        if(!trapacear)
        {
            sort(dieta.begin(), dieta.end());
            cout << dieta << endl;
        }
        else
        {
            cout << "CHEATER" << endl;
        }
    }
    return 0;
}

        {
            posicao = dieta.find(almoco[y]);
            if(posicao == -1)
            {
                trapacear = 1;
                break;
            }
            else
            {
                dieta.erase(posicao, 1);
            }
        }
        if(!trapacear)
        {
            sort(dieta.begin(), dieta.end());
            cout << dieta << endl;
        }
        else
        {
            cout << "CHEATER" << endl;
        }
    }
    return 0;
}
