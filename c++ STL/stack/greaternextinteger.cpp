// Next Greatest Integer

#include <bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> v)
{
    vector<int> index(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            index[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        index[st.top()] = -1;
        st.pop();
    }
    return index;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> nge = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }
    return 0;
}
// 6
// 4 5 2 25 7 8
// 4 5
// 5 25
// 2 25
// 25 -1
// 7 8
// 8 -1