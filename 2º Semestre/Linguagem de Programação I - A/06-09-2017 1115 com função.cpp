#include <iostream>

using namespace std;

int quadrante(int x, int y)
{
    if(x > 0 and y > 0)
    {
        cout << "primeiro" << endl;
    }
    if(x < 0 and y > 0)
    {
        cout << "segundo" << endl;
    }
    if(x < 0 and y < 0)
    {
        cout << "terceiro" << endl;
    }
    if(x > 0 and y < 0)
    {
        cout << "quarto" << endl;
    }

}

int main()
{
    int x, y;
    while(cin >> x >> y)
    {
        quadrante(x,y);
        if(x == 0 or y == 0)
        {
            return 0;
        }
    }
}
