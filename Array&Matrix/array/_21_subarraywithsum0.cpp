#include <bits/stdc++.h>
using namespace std;
bool subarrayexist(int a[], int n)
{
    int flag = 0;
    int sum = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (sum == 0 || m[sum] || a[i] == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            m[sum] = 1;
        }
    }
    if (flag == 1)
        return true;
    else
        return false;
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
    if (subarrayexist(a, n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
// 5
// 4 2 -3 1 6
// output-
// Yes