#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    stack <int> s;
    queue <int> q;

    s.push(3);
    s.push(12);

    q.push(5);
    q.push(8);

    int x = s.top();
    s.pop();
    s.push(2);
    q.push(x);
    s.push(x);

    while(s.size() > 0)
    {
        cout << s.top() << endl;
        s.pop();
    }

    cout << endl;

    while(q.size() > 0)
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
