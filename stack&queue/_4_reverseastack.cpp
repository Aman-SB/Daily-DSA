// reverse a stack

#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }

    int data = s.top();
    s.pop();
    insertAtBottom(s, val);

    s.push(data);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int val = s.top();
    s.pop();
    // reverse
    reverse(s);
    // insert at bottom
    insertAtBottom(s, val);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    // reverse
    reverse(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
// input-
// 6 5 4 3 2 1
// output-
// 1 2 3 4 5 6