#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for array
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // int ptr=*lower_bound(a,a+n,5);
    // cout<<ptr<<endl;
    // int upp=*upper_bound(a,a+n,5);
    // cout<<upp<<endl;

// 6
// 4 5 5 7 8 25
// lower bound-5
// upper bound-7

vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
auto low=lower_bound(v.begin(),v.end(),5);
cout<<(*low)<<endl;
auto upp=upper_bound(v.begin(),v.end(),5);
cout<<(*upp)<<endl;
// 6
// 4 5 5 7 8 25
// lower_bound-5
// upper_bound-7

return 0;
}
