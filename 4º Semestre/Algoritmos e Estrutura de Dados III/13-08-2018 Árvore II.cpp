#include <bits/stdc++.h>
#define TIPO int
using namespace std;

struct nodo{
    nodo *esquerda;
    TIPO info;
    nodo *direita;
    nodo (TIPO info) : info (info), esquerda (0), direita (0) {}
};

struct nodo *insere (nodo *tree, TIPO info){
    if(tree == NULL)
    {
        tree = new nodo (info);
    }
    else if(info <tree -> info)
    {
        tree -> esquerda = insere(tree -> esquerda, info);
    }
    else if(info > tree->info)
    {
        tree -> direita = insere(tree ->direita, info);
    )
    return tree;
};

void infixa(nodo *tree)
{
    if(tree != NULL)
    {
        infixa(tree -> esquerda);
        cout << tree -> info << " ";
        infixa(tree -> direita);
    }
}

void prefixa(nodo *tree)
{

}

void posfixa(nodo *tree)
{

}

int main()
{
    nodo *raiz = 0;
    TIPO valor;
    int elementos;
    cin >> elementos;
    while(elementos--)
    {
        cin >> valor;
        raiz = insere(raiz, valor);
    }
    infixa (raiz);
    cout << endl;
    return 0;
}
