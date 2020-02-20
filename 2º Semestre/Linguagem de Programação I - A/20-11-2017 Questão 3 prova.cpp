#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>

using namespace std;

int seq(int n) {
   if ( n < 3 ) return n;
   return seq(n-1) * 2- seq(n-2)/2 + 3 * seq(n-3);
}

int main() {
    int valor;
    while (cin >> valor) {
        cout << seq(valor) << endl;
    }
    return 0;
}
