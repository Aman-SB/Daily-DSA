// Subsequence of the string
// Time Complexity - O(2^n * n)
// Space Complexity - O(n)
#include <bits/stdc++.h>
using namespace std;
void subSequence(string &s, int index, vector<char> &subs)
{
    // Base Case
    if (index >= s.length())
    {
        for (char it : subs)
        {
            cout << it;
        }
        if (subs.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // Addition of character
    subs.push_back(s[index]);
    subSequence(s, index + 1, subs);
    // removal of Character
    subs.pop_back();
    subSequence(s, index + 1, subs);
}
int main()
{
    string s;
    cin >> s;
    vector<char> subs;
    int index = 0;
    subSequence(s, index, subs);
    return 0;
}
// input - abc
// output -
// a b c
// abc
// abc
// ab
// ac
// a
// bc
// b
// c
// {}