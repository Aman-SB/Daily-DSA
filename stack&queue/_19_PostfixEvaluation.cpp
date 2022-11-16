// Postfix Evaluation
#include <bits/stdc++.h>
using namespace std;
int evalauatePostfix(string s)
{
    stack<int> st;
    for (char ch : s)
    {
        if (isdigit(ch))
        {
            int val = ch - '0';
            st.push(val);
        }
        else
        {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (ch)
            {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string s;
    cin >> s;
    cout << evalauatePostfix(s);
    return 0;
}
// input - 231*+9-
// output - -4