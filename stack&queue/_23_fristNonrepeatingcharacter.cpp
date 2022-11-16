// first non repeatin character
#include <bits/stdc++.h>
using namespace std;
string nonRepeating(string &s)
{
    unordered_map<char, int> count;
    queue<char> q;
    string ans = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        count[ch]++;
        q.push(ch);
        while (!q.empty())
        {
            if (count[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << nonRepeating(s);
    return 0;
}
// input - aabc
// output - a#bb