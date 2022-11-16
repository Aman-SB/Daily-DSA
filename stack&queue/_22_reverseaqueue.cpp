// reverse a queue
#include <bits/stdc++.h>
using namespace std;
void solve(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int val = q.front();
    q.pop();

    solve(q);

    q.push(val);
}

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    solve(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
// n = 5
// input = 1 2 3 4 5
// output = 5 4 3 2 1