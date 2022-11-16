// print linearly fron 1 to n
#include <bits/stdc++.h>
using namespace std;
void recur(int n, int count)
{
    if (count > n)
    {
        return;
    }
    cout << count << " ";
    recur(n, count + 1);
}
void solve(int n)
{
    int i = 1;
    recur(n, i);
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}
// 5
// 1 2 3 4 5