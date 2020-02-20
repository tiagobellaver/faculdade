#include <iostream>




using namespace std;


int main() {
    int b;
    int *p1, *p2;
    p2 = &b;
    *p2 = 5;
    p1=p2;
    cout << b << *p1 << *p2 << endl;
    /*******************************
     p2      f4 | p1    f8 | b     fc
         fc     |   fc     |   5
    ********************************/
    return 0;
}
