// reverse a queue
#include <bits/stdc++.h>
using namespace std;
void solve(queue<int> &q, int k, int cnt)
{
    if (cnt == k)
    {
        return;
    }
    int val = q.front();
    q.pop();

    solve(q, k, cnt + 1);

    q.push(val);
}
queue<int> modifyQueue(queue<int> q, int k)
{
    int cnt = 0;
    solve(q, k, cnt);
    for (int i = 0; i < q.size() - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}
int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    q = modifyQueue(q, k);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
// n = 5
// k = 3
// input - 1 2 3 4 5
// ouput - 3 2 1 4 5