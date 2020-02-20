#include <cstdio>

using namespace std;

int main(){
  int i=10,j=20,k=30,l=0,m=0;
  int *pt1,*pt2,**ptrptr;
  pt1=&i;
  pt2=&j;
  pt1-=3;
  ptrptr=&pt1;
  **ptrptr=25;
  pt1++;
  *(pt2-3)=16;
  *pt1=*pt1+1;
  *(pt1+2)=*(pt1+2)-5;
  *pt2=7;
  **ptrptr=**ptrptr+1;
  printf("%p %p %p %p %p \n",&i,&j,&k,&l,&m);
  printf("%p %p %p\n",&pt1,&pt2,&ptrptr);
  printf("%d %d %d %d %d",i,j,k,l,m);
  ///E agora?
}
