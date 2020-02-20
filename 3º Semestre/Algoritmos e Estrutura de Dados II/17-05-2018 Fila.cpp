#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue <char> q1, q2;

    q1.push('A');
    q1.push('F');
    q1.push('C');
    q1.push('G');
    q1.push('B');
    q1.push('L');
    q1.push('T');
    q1.push('K');

    cout << "First: " << q1.front() << endl;
    cout << "Last: " << q1.back() << endl;
    cout << "Count: " << q1.size() << endl;
    cout << "Retirando: " << endl; q1.pop();
    cout << "Inserindo: " << endl; q1.push('B');

    cout << "First: " << q1.front() << endl;
    cout << "Last: " << q1.back() << endl;
    cout << "Count: " << q1.size() << endl;

    while(q1.size() > 0)
    {
        cout << q1.front() << endl;
        q1.pop();
    }

    return 0;
}
