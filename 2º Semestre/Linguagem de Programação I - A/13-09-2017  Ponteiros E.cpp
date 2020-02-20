#include <iostream>

using namespace std;

int main(void){
  int num = 55, valor;
  int *p;
  p = &num;
  valor = *p;
  cout << valor;
  cout << "Endereco armazenado em p: " << p << endl;
  cout << "Conteudo do endereco apontado por p: " << *p << "\n";
  cout << &num << endl;
  cout << &valor << endl;
  cout << &p << endl;
  return(0);
}

