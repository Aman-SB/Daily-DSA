// Count the subsequence having k sum
// Time Complexity - O(2^n * n)
// Space Complexity - O(n)
#include <bits/stdc++.h>
using namespace std;
int subSequence(vector<int> &arr, int index, vector<int> &store, int n, int sum, int k)
{
    // Base Case
    if ((index == n))
    {
        if (sum == k)
        {
            return 1;
        }
        else
            return 0;
    }

    // Adding the value
    store.push_back(arr[index]);
    sum += arr[index];
    int l = subSequence(arr, index + 1, store, n, sum, k);
    // Removal of the value
    store.pop_back();
    sum -= arr[index];
    int r = subSequence(arr, index + 1, store, n, sum, k);
    return l + r;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int index = 0;
    int sum = 0;
    vector<int> store;
    cout << subSequence(arr, index, store, n, sum, k);
    return 0;
}

// n - 3
// k - 2
// input - 1 2 1
// ouput -
// 2