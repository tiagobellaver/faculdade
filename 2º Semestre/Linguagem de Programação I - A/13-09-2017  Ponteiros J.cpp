#include <iostream>

using namespace std;

int main(void){
  int p[5]={10,9,8,7,6};
  cout << *p << endl; /// p[0]
  cout << *(p+1) << endl; /// p[1]
  cout << *(p+3) << endl; /// 7
}
