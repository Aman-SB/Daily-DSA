// Largest consecutive Subarray
#include <bits/stdc++.h>
using namespace std;
int largestconsecutive(vector<int> &v, int n)
{
    unordered_set<int> st(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.find(v[i] - 1) != st.end())
        {
            continue;
        }
        else
        {
            int count = 0;
            int current = v[i];
            while (st.find(current) != st.end())
            {
                count++;
                current++;
            }
            ans = max(ans, count);
        }
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
    cout << largestconsecutive(v, n);
    return 0;
}
// 6
// 100 4 200 1 3 2
// output-
// 4