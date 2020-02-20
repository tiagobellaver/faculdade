#include <bits/stdtr1c++.h>
#include <stack>

using namespace std;

int main()
{
    stack <int> p1, p2, p3;
    p1.push(1);
    p1.push(2);
    p1.push(3);
    p1.push(4);
    int temp = p1.top();
    p1.pop();
    p2.push(temp);
    p3.push(p1.top());
    p1.pop();
    p2.push(p1.top());
    p1.pop();
    temp = p1.top();
    p1.pop();
    p3.push(temp);
    p1.push(p2.top());
    p2.pop();
    p3.push(p2.top());
    p2.pop();
    p3.push(p1.top());
    p1.pop();

    while(!p1.empty())
    {
        cout << "Retriando elementos P1: ";
        cout << p1.top();
        p1.pop();
        cout << endl;
    }
    while(!p2.empty())
    {
        cout << "Retriando elementos P2: ";
        cout << p2.top();
        p2.pop();
        cout << endl;
    }
    while(!p3.empty())
    {
        cout << "Retriando elementos P3: ";
        cout << p3.top();
        p3.pop();
        cout << endl;
    }
    return 0;
}
