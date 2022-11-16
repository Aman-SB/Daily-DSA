// Find whether an array is a subset of another array
#include <bits/stdc++.h>
using namespace std;
string issubset(vector<int> &a1, vector<int> &a2, int n, int m)
{
    multiset<int> st(a1.begin(), a1.end());
    for (int i = 0; i < m; i++)
    {
        if (st.find(a2[i]) != st.end())
        {
            auto it = st.find(a2[i]);
            st.erase(it);
            continue;
        }
        else
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a1, a2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a1.push_back(x);
    }
    for (int k = 0; k < m; k++)
    {
        int y;
        cin >> y;
        a2.push_back(y);
    }
    cout << issubset(a1, a2, n, m);
    return 0;
}
// 5 4
// 1 2 3 4 5
// 1 2 3 1
// output-
// No