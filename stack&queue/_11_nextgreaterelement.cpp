#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (!st.empty() && st.top() <= curr)
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }
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
    vector<int> arr;
    arr = nextGreaterElement(v, n);
    for (auto val : arr)
    {
        cout << val << " ";
    }
    return 0;
}
// 4
// 7 8 1 4
// 8 -1 4 -1