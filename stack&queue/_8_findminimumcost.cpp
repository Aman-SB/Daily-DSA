// find minimum cost to make string valid

#include <bits/stdc++.h>
using namespace std;
int minimumCost(string s)
{
    stack<char> st;
    // if the string is odd that means no opeartion can perform to make it valid
    if (s.size() % 2 != 0)
        return -1;

    // storing the invlaid braces
    for (int i = 0; i < s.length(); i++)
    {
        if (ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }
    // operating the invalid case
    int a = 0, b = 0;
    while (!st.empty())
    {
        if (st.top() == '}')
        {
            b++;
        }
        else
        {
            a++;
        }
        st.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << minimumCost(s);
    return 0;
}
// input - {{{}}}{{{{
// output -
// 2