#include <iostream>

using namespace std;

void dobra (int a[5])
{
    for(int i = 0; i < 5; i++)
    {
        a[i] = a[i] * 2;
    }
}

int main()
{
    int a[5] = {7.2, 6.1, 4.0, 3.4, 12.1};
    dobra(a);
    cout << a << " " << *a << endl;
    cout << a + 1 << " " << *(a + 1) << endl;
    cout << a + 2 << " " << *(a + 2) << endl;
}
