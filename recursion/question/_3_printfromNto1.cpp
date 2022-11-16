// printing from N to 1
#include <bits/stdc++.h>
using namespace std;
void solve(int i, int n)
{
    // base Condtion
    if (i > n)
    {
        return;
    }
    // recursive call
    solve(i + 1, n);

    cout << i << " ";
}
int main()
{
    int n;
    cin >> n;
    solve(1, n);
    return 0;
}
// 5
// 5 4 3 2 1