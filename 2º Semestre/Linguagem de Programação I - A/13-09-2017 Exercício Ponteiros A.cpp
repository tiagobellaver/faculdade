#include <iostream>

using namespace std;

int main(void) {
    int i=10, j=20, k=30, l;

    int *pt1, *pt2, **ptrptr, m;
    cout << &i << &j << &k << &l << &pt1 << &pt2 << &ptrptr << &m << endl;
    pt1 = &j;
    pt2 = &i;
    pt1 -= 2;

    ptrptr = &pt1;
    *ptrptr = (&j);
    **ptrptr=15;
    pt1++;
    (*(pt2-2))=16;
    *(pt1) = *(pt1)+1;
    (*(pt1-3))=4;
    *pt2=7;
    **ptrptr=15;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << l << endl;
    cout << m << endl;
    return (0);
}

