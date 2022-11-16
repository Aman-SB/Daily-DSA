// Is redudndant bracket

#include <bits/stdc++.h>
using namespace std;
bool isbracketRedudnant(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isRedudant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedudant = false;
                    }
                    st.pop();
                }
                st.pop();
                if (isRedudant == true)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    if (isbracketRedudnant(s))
    {
        cout << "Yes it is Redundant";
    }
    else
    {
        cout << "Expression is not redudant";
    }
    return 0;
}
// input 1 -
// ((a+b))
// Yes it is Redundant

// input 2 -
// (a*(b+c))
// Expression is not redudant