// Palindrome Partitioning
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}

void func(int index, string s, vector<string> &path, vector<vector<string>> &res)
{
    if (index == s.size())
    {
        res.push_back(path);
        return;
    }
    for (int i = index; i < s.size(); i++)
    {
        if (isPalindrome(s, index, i))
        {
            path.push_back(s.substr(index, i - index + 1));
            func(i + 1, s, path, res);
            path.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> res;
    vector<string> path;
    func(0, s, path, res);
    return res;
}

int main()
{
    string s = "aabb";
    vector<vector<string>> ans;
    ans = partition(s);
    for (auto val : ans)
    {
        for (auto ch : val)
        {
            cout << ch << ",";
        }
        cout << endl;
    }
    return 0;
}
// output -
// a,a,b,b,
// a,a,bb,
// aa,b,b,
// aa,bb,