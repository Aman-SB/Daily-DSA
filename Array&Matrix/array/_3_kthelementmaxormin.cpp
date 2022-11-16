// kth maximun & kth minimun

#include<bits/stdc++.h>
using namespace std;
void find(vector<int> v, int n, int k){
    sort(v.begin(),v.end());
    cout<<"MAXIMUM : "<<v[n-k]<<endl;
    cout<<"MINIMUM : "<<v[k-1];
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    find(v,n,k);
    return 0;
}
// 5
// 2
// 8 4 9 5 1
// output-
// MAXIMUM : 8
// MINIMUM : 4