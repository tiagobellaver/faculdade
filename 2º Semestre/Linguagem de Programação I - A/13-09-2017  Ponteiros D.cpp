#include <iostream>

using namespace std;

int main(void){
  int *p, q, r, s, t;
  p = &q;
  *p = 10;
  cout << &p << endl; /// endere�o de p
  cout << p << endl; /// valor de p (endere�o no caso)
  cout << *p << endl; /// conte�do do endereco apontado por p
  cout << &(*p) << endl; /// endere�o de onde est� o conte�do
                         /// apontado por p
  return(0);
}

