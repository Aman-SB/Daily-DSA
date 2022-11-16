// balanced parenthesis

#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> m = {{'[', -3}, {'{', -2}, {'(', -1}, {']', 3}, {'}', 2}, {')', 1}};
bool isValid(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (m[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty())
                return 0;
            char top = st.top();
            st.pop();
            if (m[top] + m[bracket] != 0)
                return 0;
        }
    }
    if (st.empty())
        return 1;
    return 0;
}
int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}