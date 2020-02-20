#include <iostream>

using namespace std;

int main(void){
  int *p, q, r, s, t;
  p = &q;
  *p = 10;
  cout << &p << endl;
  cout << &q << endl;
  cout << &r << endl;
  cout << &s << endl;
  cout << &t << endl;
  return(0);
}

