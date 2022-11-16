// maximum rectangular area histogram
// aprroach 2 -
#include <bits/stdc++.h>
using namespace std;
int maximunAreaHistogram(vector<int> &heights, int n)
{
    stack<int> st;
    int maxA = 0;
    for (int i = 0; i <= n; i++)
    {
        while (!st.empty() && (i == n || heights[st.top()] >= heights[i]))
        {
            int height = heights[st.top()];
            st.pop();
            int width;
            if (st.empty())
            {
                width = i;
            }
            else
            {
                width = i - st.top() - 1;
            }
            maxA = max(maxA, width * height);
        }
        st.push(i);
    }
    return maxA;
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