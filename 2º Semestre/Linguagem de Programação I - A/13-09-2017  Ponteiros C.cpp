#include <iostream>

using namespace std;

int main(void){
  int *p, q, r, s, t;
  p = &q;
  *p = 10;
  cout << &p << endl;
  cout << p << endl;
  cout << *p << endl;
  return(0);
}

