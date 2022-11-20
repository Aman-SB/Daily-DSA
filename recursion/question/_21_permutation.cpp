// Permutation
#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &ans, vector<int> &ds, vector<int> &arr, int freq[])
{
    // Base case
    if (arr.size() == ds.size())
    {
        ans.push_back(ds);
        return;
    }

    // main logic
    for (int i = 0; i < arr.size(); i++)
    {
        if (!freq[i])
        {
            ds.push_back(arr[i]);
            freq[i] = 1;
            solve(ans, ds, arr, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
vector<vector<int>> permutation(vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[arr.size()] = {0};
    // or
    // for (int i = 0; i < arr.size(); i++)
    //     freq[i] = 0;
    solve(ans, ds, arr, freq);
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3};
    vector<vector<int>> ans;
    ans = permutation(v);
    for (auto val : ans)
    {
        for (auto it : val)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
// output-
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1