#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int N[22];
    N[0]=0;
    N[1]=1;
    N[2]=2;
    for (int i=3; i<20; i++) {
        N[i] = N[i-1] * 2 - N[i-2]/2 + 3 * N[i-3];
    }
    int valor;
    while (cin >> valor) {
        cout << N[valor] << endl;
    }
    return 0;
}
