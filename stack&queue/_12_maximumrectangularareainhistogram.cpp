// maximum rectangular area histogram
#include <bits/stdc++.h>
using namespace std;
// storing the index of next smallest element
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
// storing the previous smallest element index
vector<int> prevSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int maximunAreaHistogram(vector<int> &v, int n)
{
    vector<int> next(n);
    next = nextSmallerElement(v, n);

    vector<int> prev(n);
    prev = prevSmallerElement(v, n);

    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int length = v[i];

        if (next[i] == -1)
        {
            next[i] == n;
        }

        int breadth = next[i] - prev[i] - 1;

        int newArea = length * breadth;
        area = max(area, newArea);
    }
    return area;
}
int main()
{
    int n;
    cin >> n;
    vector<int> rect;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        rect.push_back(x);
    }

    cout << maximunAreaHistogram(rect, n);
    return 0;
}
// n - 7
// intput - 6 2 5 4 5 1 6
// output - 12