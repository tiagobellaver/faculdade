#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>

using namespace std;

double distancia (double x1, double y1, double x2, double y2) {
   double d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
   return d;
}

int main() {
    freopen("1material.in","r",stdin);
    int x1,y1,x2,y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
       cout << distancia(x1,y1,x2,y2) << endl;
    }
    return 0;
}
