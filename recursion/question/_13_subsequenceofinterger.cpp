// subsequence of array
// Time Complexity - O(2^n * n)
// Space Complexity - O(n)
#include <bits/stdc++.h>
using namespace std;
void subSequence(vector<int> &arr, int index, vector<int> &store, int n)
{
    // Base Case
    if (index == n)
    {
        for (auto it : store)
        {
            cout << it;
        }
        if (store.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // Adding the value
    store.push_back(arr[index]);
    subSequence(arr, index + 1, store, n);
    // Removal of the value
    store.pop_back();
    subSequence(arr, index + 1, store, n);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int index = 0;
    vector<int> store;
    subSequence(arr, index, store, n);
}
// n - 3
// input - 1 2 3
// ouptut -
// 123
// 12
// 13
// 1
// 23
// 2
// 3
// {}