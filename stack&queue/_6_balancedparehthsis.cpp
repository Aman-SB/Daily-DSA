// Balanced parethisis
#include <bits/stdc++.h>
using namespace std;
bool balanced(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else
            {
                int val = st.top();
                if ((ch == ')' && val == '(') || (ch == '}' && val == '{') || (ch == ']' && val == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s;
    cin >> s;
    if (balanced(s))
    {
        cout << "Yes Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return 0;
}

// input 1 - {[]}({)}
// Not Balanced

// input 2 - ({})[]
// Yes Balanced