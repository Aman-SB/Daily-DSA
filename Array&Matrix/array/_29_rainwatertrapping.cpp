// rain water trapping
#include <bits/stdc++.h>
using namespace std;
long long rainwater(int *a, int n)
{
    int lo = 0, hi = n - 1, mi = 0, ma = 0;
    long long ans = 0;
    while (lo <= hi)
    {
        if (a[lo] < a[hi])
        {
            if (a[lo] > mi)
            {
                mi = a[lo];
            }
            else
            {
                ans += (mi - a[lo]);
            }
            lo++;
        }
        else
        {
            if (a[hi] > ma)
            {
                ma = a[hi];
            }
            else
            {
                ans += (ma - a[hi]);
            }
            hi--;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<rainwater(arr, n);
    delete[] arr;
    return 0;
}
// 6
// 3 0 0 2 0 4
// output-
// 10