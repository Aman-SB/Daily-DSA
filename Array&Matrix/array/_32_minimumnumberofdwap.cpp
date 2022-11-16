//  program to find minimum swaps required

#include <bits/stdc++.h>
using namespace std;
int minSwap(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
    }
    int notneed = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > k)
        {
            ++notneed;
        }
    }
    int ans = notneed;
    for (int i = 0, j = count; j < n; i++, j++)
    {
        if (arr[i] > k)
        {
            --notneed;
        }
        if (arr[j] > k)
        {
            ++notneed;
        }
        ans = min(ans, notneed);
    }
    return ans;
}

int main()
{

    int n, k;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    cout << minSwap(arr, n, k) << "\n";
    delete[] arr;
    return 0;
}
// n=5
// arr=2 1 5 6 3
// k=3
// output-
// 1
