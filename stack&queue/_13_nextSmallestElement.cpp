// Next smallest element
#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmallestElement(vector<int> &v, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = v[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
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
    vector<int> next(n);
    next = nextSmallestElement(v, n);
    for (auto val : next)
    {
        cout << val << " ";
    }
    return 0;
}
// 4
// 2 1 4 3
// 1 -1 3 -1