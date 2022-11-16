// Smallest subarray with sum greater than x

#include <bits/stdc++.h>
using namespace std;
int greaterthanx(vector<int> &a, int &n, int &x)
{
    int i = 0, j = 0, s = 0;
    int mi = INT_MAX;
    if(n==1 && a[0]==x){
        return 0;
    }
    while (i <= j && j < n)
    {
        while (s <= x && j < n)
        {
            s += a[j++];
        }
        while (s > x && i < j)
        {
            int x = j - i;
            mi = min(mi, x);
            s -= a[i++];
        }
    }
    return mi;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    int x;
    cin >> x;
    cout << greaterthanx(arr, n, x);
    return 0;
}
// n=6
// arr[]=1 4 45 6 0 19
// x=51
// output-
// 3