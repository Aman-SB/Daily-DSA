// triplet sum of array

#include <bits/stdc++.h>
using namespace std;
bool find3sum(int *a, int n, int k)
{
    // approach 1-
    // bool ans = false;
    // for (int i = 0; i < n - 2; i++)
    // {
    //     unordered_set<int> s;
    //     int curr = k - a[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (s.find(curr - a[j]) != s.end())
    //         {
    //             ans = true;
    //             break;
    //         }
    //         s.insert(a[j]);
    //     }
    // }
    // return ans;

    // approach 2-
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (a[i] + a[l] + a[r] == k)
                return true;
            else if ((a[i] + a[l] + a[r]) < k)
                l++;
            else
                r--;
        }
    }
    return false;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (find3sum(arr, n, k))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    delete[] arr;
    return 0;
}
// 5
// 10
// 1 2 4 3 6
// output-
// True