#include <iostream>

using namespace std;

int main(void){
  int *p, q, r, s, t;
  p = &q;
  *p = 10;
  cout << &p << endl; /// endereço de p
  cout << p << endl; /// valor de p (endereço no caso)
  cout << *p << endl; /// conteúdo do endereco apontado por p
  cout << &(*p) << endl; /// endereço de onde está o conteúdo
                         /// apontado por p
  return(0);
}

