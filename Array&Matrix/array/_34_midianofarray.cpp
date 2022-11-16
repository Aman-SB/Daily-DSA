// Find the median

#include <bits/stdc++.h>
using namespace std;
int find_median(vector<int> v)
{
    int ans = 0;
    int n = v.size();
    sort(v.begin(), v.end());
    if (n % 2 != 0)
    {
        int mid = n / 2;
        ans = v[mid];
    }
    else
    {
        int mid = n / 2;
        ans = (v[mid - 1] + v[mid]) / 2;
    }
    return ans;
}
int main(){
   int n;
   cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   } 
   cout<<endl;
   cout<<find_median(v);
   return 0;
}
// n - 4
// arr[] = 56 67 30 79
// output-
// 61
