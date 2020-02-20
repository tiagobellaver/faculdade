#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   char str[30] = "2030300 O resto eh lixo";
   char *ptr;
   int valor;

   valor = strtol(str, &ptr, 10);
   cout << valor << endl;
   cout << ptr << endl;

    return 0;
}
