#include <iostream>

using namespace std;

int Fat(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * Fat(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << Fat(n) << endl;
    return 0;
}
