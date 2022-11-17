// Combination of sum II
#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &ans, vector<int> &subs, vector<int> &arr, int target, int index)
{
    // Base Case

    if (target == 0)
    {
        ans.push_back(subs);
        return;
    }

    // main logic
    // remember never use index inside the loop insted of index use i
    for (int i = index; i < arr.size(); i++)
    {
        if (i > index && arr[i] == arr[i - 1])
        {
            continue;
        }
        if (arr[i] > target)
        {
            break;
        }
        subs.push_back(arr[i]);
        solve(ans, subs, arr, target - arr[i], i + 1);
        subs.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int index = 0;
    vector<int> subs;
    vector<vector<int>> ans;
    solve(ans, subs, arr, target, index);
    return ans;
}
int main()
{
    int target = 4;
    vector<int> v = {1, 1, 1, 2, 2};
    vector<vector<int>> ans;
    ans = combinationSum(v, target);
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
// 1 1 2
// 2 2