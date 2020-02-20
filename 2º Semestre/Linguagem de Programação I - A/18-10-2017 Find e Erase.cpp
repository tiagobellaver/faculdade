#include <bits/stdc++.h>

using namespace std;

int main()
{
    string texto = "ABDFUZT";
    int pos = texto.find('F');
    int pos2 = texto.find('M');
    cout << pos << " " << pos2 << endl;
    texto.erase(pos,1);
    cout << texto << endl;
    return 0;
}
