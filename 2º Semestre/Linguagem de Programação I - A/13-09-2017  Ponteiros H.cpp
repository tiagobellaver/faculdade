#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main (void) {
    string inferno = "quente";
    string *pt, *pmdb;
    pt = pmdb = &inferno;

    cout << "&pt= " << &pt << " " << &pt+1 <<" "<< &pt-1 <<" "<< &pt-2 << endl;
    cout <<  "pt= " << pt << endl;
    cout << "*pt= " << *pt << endl;
    cout << "&pt= " << &(*pt) <<endl;
    return 0 ;
}
