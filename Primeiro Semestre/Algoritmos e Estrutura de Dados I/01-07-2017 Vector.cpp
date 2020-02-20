#include <bits/stdc++.h>

using namespace std;

struct myvector
{
    int v[100];
    int inicio, fim, size;
    myvector()
    {
        inicio = 0;
        fim = 0;
        size = 0;
    }
    void insert(int n)
    {
        v[fim] = n;
        fim++;
        size++;
    }
    void mostrar()
    {
        for(int i = inicio; i < fim; i++)
        {
            cout << "Posicao V[" << i << "] = " << v[i] << endl;
        }
        cout << endl;
        cout << endl;
        cout << "Primeiro valor armazenado: " << v[inicio] << endl;
        if(fim - 1 > 0)
        {
            cout << "Ultimo valor armazenado: " << v[fim - 1] << endl;
        }
    }
    bool remove(int n)
    {
        for(int a = inicio; a < fim; a++)
        {
            if(n == v[a])
            {
                for(int b = a; b < fim - 1; b++)
                {
                    v[b] = v[b + 1];
                }
                v[fim - 1] = - 1;
                fim--;
                size--;
                return true;
            }
        }
        return false;
    }
    int tamanho()
    {
        cout << "Tamanho: " << size << endl;
    }
    void sort1()
    {
        sort(v, v + fim - 1);
    }
    void inverter()
    {
        sort(v, v + fim - 1);
        for(int i = 0; i < fim / 2; i++)
        {
            swap(v[i], v[fim - i - 1]);
        }
    }
    bool find(int p)
    {
        for(int a = inicio; a < fim; a++)
        {
            if(v[a] == p)
            {
                cout << "O valor " << p << " foi encontrado na posicao v[" << v[a + 1] << "]" << endl;
                return true;
            }
        }
        cout << "Valor nao encontrado" << endl;
        return false;
    }
};

int main()
{
    int n, aux, rt, r, p;
    myvector hoje;
    cout << "Digite a quantidade de valores: ";
    cin >> aux;
    cout << endl;
    cout << "Digite os valores: ";
    cout << endl;
    for(int a = 1; a <= aux; a++)
    {
        cin >> n;
        hoje.insert(n);
    }
    cout << endl;
    cout << "Valores armazenados:" << endl;
    hoje.mostrar();
    cout << endl;
    cout << "Digite a quantidade de valores para serem removidos: ";
    cin >> rt;
    cout << endl;
    for(int b = 0; b < rt; b++)
    {
        cout << "Digite um valor para ser removido: ";
        cin >> r;
        if(hoje.remove(r))
        {
            cout << "Removido com sucesso!" << endl;
        }
        else
        {
            cout << "Nao foi possivel remover!" << endl;
        }
        cout << endl;
    }
    hoje.mostrar();
    cout << endl;
    hoje.tamanho();
    cout << endl;
    cout << "Valores em ordem crescente: " << endl;
    hoje.sort1();
    hoje.mostrar();
    cout << endl;
    cout << "Valores em ordem decrescente: " << endl;
    hoje.inverter();
    hoje.mostrar();
    cout << endl;
    cout << "Digite um valor para ser procurado: ";
    cin >> p;
    hoje.find(p);
    return 0;
}
