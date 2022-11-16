// Printing subsequence having sum k
// Time Complexity - O(2^n * n)
// Space Complexity - O(n)
#include <bits/stdc++.h>
using namespace std;
bool subSequence(vector<int> &arr, int index, vector<int> &store, int n, int sum, int k)
{
    // Base Case
    if (s > sum)
        return 0; // if array contain positive element
    if ((index == n))
    {
        if (sum == k)
        {
            for (auto it : store)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else
            return false;
    }

    // Adding the value
    store.push_back(arr[index]);
    sum += arr[index];
    if (subSequence(arr, index + 1, store, n, sum, k) == true)
    {
        return true;
    }
    // Removal of the value
    store.pop_back();
    sum -= arr[index];
    if (subSequence(arr, index + 1, store, n, sum, k) == true)
    {
        return true;
    }
    return false;
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
    subSequence(arr, index, store, n, sum, k);
    return 0;
}

// n - 3
// k - 2
// input - 1 2 1
// ouput -
// 1 1
