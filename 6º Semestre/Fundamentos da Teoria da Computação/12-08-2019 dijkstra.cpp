#include <iostream>
#define MAXCST 9999999 //equivale a 1 << 30
#define MAX 100

using namespace std;

int g[MAX][MAX], vertices;

int dijkstra(int origem, int destino)
{
    int i, minimo, atual;
    int passou[MAX], pred[MAX], custo[MAX];

    for (i = 1; i <= vertices; i++)
    {
        pred[i] = -1;
        custo[i] = MAXCST;
        passou[i] = 0;
    }

    custo[origem] = 0;
    atual = origem;

    while (atual != destino)
    {
        for (i = 1; i <= vertices; i++)
        {
            if (custo[atual] + g[atual][i] < custo[i])
            {
                custo[i] = custo[atual] + g[atual][i];
                pred[i] = atual;
            }
        }

        //caso nao conseguiu ir para lugar algum saindo da origem
        if(minimo == MAXCST)
        {
            return MAXCST;
        }
    }
    return custo[destino];
}

int main()
{
    int i, j, arestas, orig, dest, tempo, consultas;

    cin >> vertices >> arestas;

    while (vertices)
    {
        for (i = 0; i <= vertices; i++)
        {
            for (j = 0; j <= vertices; j++)
            {
                g[i][j] = MAXCST;
            }
        }

        //memset(g, 63, sizeof(g)); //1.061.109.567 (dever ser um pouco maior ou igual a MAXCST)
        for (i = 0; i < arestas; i++)
        {
            cin >> orig >> dest >> tempo;
            if(g[dest][orig] != MAXCST)
            {
                g[orig][dest] = 0;
                g[dest][orig] = 0;
            } else
            {
                g[orig][dest] = tempo;
            }
        }

        for (i = 1; i <= vertices; i++)
        {
            for (j = 1; j <= vertices; j++)
            {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
        cin >> consultas;
        for (int i = 0; i < consultas; i++)
        {
            cin >> orig;
            cin >> dest;
            //cout << "origem =" << orig << " destino =" << dest << ": ";
            int distancia = dijkstra(orig, dest);
            if (distancia == MAXCST)
            {
                cout << "Nao foi possivel entregar a carta";
            } else
            {
                cout << distancia << endl;
            }
        }
        cout << endl;
        cin >> vertices;
        cin >> arestas;
    }
    /* cout << dijkstra(0,5) << endl << endl;
    cout << dijkstra(0,1) << endl << endl;
    cout << dijkstra(0,4) << endl << endl;
    cout << dijkstra(0,2) << endl << endl;*/
}
