// Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;
void solve(int a[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0, end = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (sum > maxi)
        {
            maxi = sum;
            start = s;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
            s = i + 1;
        }
    }
    cout << "MAXIMUN CONTIGUOUS SUM " << maxi << endl;
    cout << "Starting Index : " << start << endl;
    cout << "Ending Index : " << end << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    solve(a, n);
    return 0;
}
// 8
// -2 -3 4 -1 -2 1 5 -3
// MAXIMUN CONTIGUOUS SUM 7
// Starting Index : 2
// Ending Index : 6