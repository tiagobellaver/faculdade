///Crie um vector booleano com 15 posiçoes.
///ja preenchidas com verdadeiro (true).
///Em seguida, adcione mais 15 valores com falso.
///Mostre todo o vector utilizando iterator.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <bool> v(15,true);
    vector <bool>::iterator it;
    vector <bool> v1(15,false);
    vector <bool>::iterator it1;

    /***for(int i = 0; i < 15; i++)
    {
        v.push_back(false);
    }
    ***/

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    for(it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        cout << *it1 << " ";
    }
    return 0;
}
