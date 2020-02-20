#include <iostream>

using namespace std;

int main(void){
  int dado= 20;
  int *ptr1;
  int **ptr2;
  int ***ptr3;
  ptr1 = &dado;
  ptr2 = &ptr1;
  ptr3 = &ptr2;

  cout << "\nConteudo de ptr3: " << &ptr3 << " " << ptr3;
  cout << "\nConteudo de ptr2: " << &ptr2 << " " << ptr2;
  cout << "\nConteudo de ptr1: " << &ptr1 << " " << ptr1;

  cout << "\nValor de &dado: " << &dado;
  cout << "\nValor de *ptr1: " << *ptr1;

  return (0);
}

