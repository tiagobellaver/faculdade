#include <iostream>

using namespace std;

int main(void) {
    ///             *p                        *(p+4)
    int x=3, p[5]= {10,    9,    8,      7,     6};
    cout << *p << endl;

    cout << *(p+1) << endl;
    cout << *(p+2) << endl;
    cout << *(p+3) << endl;
    cout << *(p+4) << endl;
    cout << *(p+5) << endl;

    cout << p[4] << " " << p[5] << endl;

    return 0;
}
