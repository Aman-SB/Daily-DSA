// Find the median

#include <bits/stdc++.h>
using namespace std;
int findMedianSortedArrays(vector<int> &a, vector<int> &b)
{
    if (b.size() < a.size())
    {
        return findMedianSortedArrays(b, a);
    }
    int n1 = a.size();
    int n2 = b.size();
    int low = 0, high = n1;
    while (low <= high)
    {
        int cut1 = (low + high) >> 1;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int l1 = cut1 == 0 ? INT_MIN : a[cut1 - 1];
        int l2 = cut2 == 0 ? INT_MIN : b[cut2 - 1];

        int r1 = cut1 == n1 ? INT_MAX : a[cut1];
        int r2 = cut2 == n2 ? INT_MAX : b[cut2];

        if (l1 <= r2 && l2 <= r1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return (max(l1, l2) + min(r1, r2)) / 2;
            }
            else
            {
                return max(l1, l2);
            }
        }
        else if (l1 > r2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin>>v2[j];
    }
    cout << endl;
    cout << findMedianSortedArrays(v1, v2);
    return 0;
}
// n=4
// m=6
// a[n]=7 12 14 15
// b[m]=1 2 3 4 9 11
// output-
// 8
