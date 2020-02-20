#include <iostream>

using namespace std;

void mexe (int x[]){
   *(x+1)=5;
   *(x+3)=5;
}

int main(void){
  int p[5]={10,9,8,7,6};
  mexe (p);
  cout << *(p+1) << endl; /// 5
  cout << *(p+3) << endl; /// 5
  cout << &p << endl; ///
  cout << p << endl; ///
  cout << *p << endl; /// 10
}
