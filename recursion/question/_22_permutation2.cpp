// Permutation II
#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &ans, vector<int> &arr, int index)
{
    // Base Case
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    // Main logic
    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        solve(ans, arr, index + 1);
        swap(arr[index], arr[i]);
    }
}
vector<vector<int>> permutation(vector<int> &arr)
{
    vector<vector<int>> ans;
    solve(ans, arr, 0);
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
// 3 2 1
// 3 1 2