// chocolate distribution
#include <bits/stdc++.h>
using namespace std;
int distribution(vector<int> &a, int &n, int &m)
{
    int mi = INT_MAX;
    sort(a.begin(), a.end());
    for (int i = 0; i + m - 1 < n; i++)
    {
        int x = a[i + m - 1] - a[i];
        mi = min(mi, x);
    }
    return mi;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << distribution(a, n, m);
    return 0;
}
// 8 5
// 3 4 1 9 56 7 9 12
// output-
// 6