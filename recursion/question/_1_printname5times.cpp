// printing names 5 times
#include <bits/stdc++.h>
using namespace std;
void solve(int count, string s)
{
    if (count == 5)
    {
        return;
    }
    cout << s << " ";
    count++;
    solve(count, s);
}
int main()
{
    string s;
    cin >> s;
    int i = 0;
    solve(i, s);
    return 0;
}
// aman
// aman aman aman aman aman