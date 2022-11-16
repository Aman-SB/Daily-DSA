// print linearly from 1 to n
// backtracking

#include <bits/stdc++.h>
using namespace std;
void solve(int n, int i)
{
    if (i < 1)
    {
        return;
    }
    solve(n, i - 1);
    cout << i << " ";
}
int main()
{
    int n;
    cin >> n;
    solve(n, n);
    return 0;
}
// n - 5
// output - 1 2 3 4 5