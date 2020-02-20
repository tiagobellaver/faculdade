#include <iostream>

using namespace std;

int main(void){
  int i=10, j=20, k=30, l=0, m=0;
  int *pt1, *pt2, **ptrptr;
  cout << &i <<" " << &j <<" " << &k << " " << &l << " " << &m <<" " << &pt1 << " " << &pt2 << " " << &ptrptr << " " << endl;
  pt1 = &j;
  pt2 = &i;
  pt1 -= 3;
  ptrptr = &pt1;
  **ptrptr = 11;
  pt1++;
  (*(pt2-3))=16;
  *pt1 = *pt1+1;
  *(pt1+2)=*(pt1+2)-6;
  *pt2=7;
  *(ptrptr)=(int*) 0xbFFFF814;
  **ptrptr=15;
  cout << i <<" " << j <<" " << k << " " << l << " " << pt1 << " " << pt2 << " " << ptrptr << " " << m << endl;
  return (0);
}

