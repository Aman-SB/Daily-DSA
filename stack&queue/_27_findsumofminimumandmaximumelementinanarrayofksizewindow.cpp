// find sum of minimum and maximum element in an k size window of a an array
#include <bits/stdc++.h>
using namespace std;
int solve(int *arr, int n, int k)
{
    deque<int> mini(k);
    deque<int> maxi(k);
    // for 1st k size window
    for (int i = 0; i < k; i++)
    {
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        mini.push_back(i);
        maxi.push_back(i);
    }
    int ans = 0;
    ans += arr[mini.front()] + arr[maxi.front()];
    // for next all window
    for (int i = k; i < n; i++)
    {

        // removal
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }

        // addition
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        mini.push_back(i);
        maxi.push_back(i);

        ans += arr[mini.front()] + arr[maxi.front()];
    }
    return ans;
}
int main()
{
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl;
    return 0;
}
// output - 18