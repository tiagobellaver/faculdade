#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N;
    int H[10001];
    cin >> N;
    while(N != 0)
    {
        for(int i = 0; i < N; i++)
        {
            cin >> H[i];
            cout << "leu " << H[i] << endl;
        }

        cin >> N;
        cout << "Leu N = " << N << endl;
    }
    return 0;
}
