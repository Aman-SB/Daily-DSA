// Sort without sorting algorithm

#include <bits/stdc++.h>
using namespace std;
void solve(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // int one=0,two=0,zero=0;
    //     for(int i=0;i<n;i++){
    //         if(a[i]==0)     zero++;
    //         else if(a[i]==1)    one++;
    //         else if(a[i]==2)    two++;
    //     }
    //     int j=0;
    //     for(int i=0;i<zero;i++){
    //         a[j]=0;
    //         j++;
    //     }
    //     for(int i=0;i<one;i++){
    //         a[j]=1;
    //         j++;
    //     }
    //     for(int i=0;i<two;i++){
    //         a[j]=2;
    //         j++;
    //     }
    //     for(int i=0;i<n;i++){
    //         cout<<a[i]<<" ";
    //     }
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