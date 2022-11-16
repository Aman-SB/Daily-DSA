// print from N to 1
// BACKTRACKING
#include <bits/stdc++.h>
using namespace std;
void solve(int n, int count)
{
    if (count < 1)
    {
        return;
    }
    cout << count << " ";
    solve(n, count - 1);
}
int main()
{
    int n;
    cin >> n;
    solve(n, n);
    return 0;
}
// 5
// 5 4 3 2 1