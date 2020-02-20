#include <iostream>

using namespace std;

typedef struct
{
    string nome;
    string endereco;
    string cidade;
} CADASTRO;

int main(void)
{
    CADASTRO cliente;
    cout << "Digite o Nome: ";
    getline(cin, cliente.nome);
    cout << "Digite o Endereco: ";
    getline(cin, cliente.endereco);
    cout << "Digite a Cidade: ";
    getline(cin, cliente.cidade);
    cout << cliente.nome << " mora no(a) " << cliente.endereco << ", cidade de " << cliente.cidade;
    return 0;
}
