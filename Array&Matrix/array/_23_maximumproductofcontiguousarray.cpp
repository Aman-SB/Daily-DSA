// Maximum product of contiguos subrray
#include <bits/stdc++.h>
using namespace std;
int maximumproduct(vector<int> &v, int n)
{
    int ans = v[0];
    int ma = ans;
    int mi = ans;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < 0)
        {
            swap(ma, mi);
        }
        ma = max(v[i], ma * v[i]);
        mi = min(v[i], mi * v[i]);
        ans = max(ma, ans);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << maximumproduct(v, n);
    return 0;
}
// 5
// 6 -3 -10 0 2
// Output-
// 180