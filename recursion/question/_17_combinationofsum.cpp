// combination Of sum
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &subs, int index, vector<int> &arr, int n, int target)
{
    // Base Condition
    if (index == n)
    {
        if (target == 0)
        {
            for (int it : subs)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // logic
    // add of the value
    if (arr[index] <= target)
    {
        subs.push_back(arr[index]);
        solve(subs, index, arr, n, target - arr[index]);
        subs.pop_back();
    }

    // removal of the value
    solve(subs, index + 1, arr, n, target);
}
void combinationSum(int n, vector<int> &arr, int target)
{
    int index = 0;
    vector<int> subs;
    solve(subs, index, arr, n, target);
}
int main()
{
    int n = 4;
    int target = 7;
    vector<int> v = {2, 3, 6, 7};
    combinationSum(n, v, target);
    return 0;
}
// output -
// 2 2 3 
// 7