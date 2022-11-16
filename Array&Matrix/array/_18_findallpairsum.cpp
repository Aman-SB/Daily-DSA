#include <bits/stdc++.h>
using namespace std;
/* logic-
1- find the another element which is b
2- we check the number present in it or not 
3- if the number present the we increse the frequency and adding it into how many pair it can make
for eg-1 1 1 1
        b=1
        if b in it we increase the count =1
        then again we got 1 we increase the count =2
        then again we got 1 increase the count =3
        so ans=1+2+3*/

int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int b = k - arr[i];
        if (m[b])
        {
            ans += m[b];
        }
        m[arr[i]]++;
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<getPairsCount(a,n,k);
    return 0;
}
// n=4
// k=6
// 1 5 7 1
// output-
// 2