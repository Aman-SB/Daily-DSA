#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int b[],int m){
    unordered_set<int> us;
    us.insert(a,a+n);
    us.insert(b,b+m);
    int count=us.size();
    return count;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    cout<<solve(a,n,b,m);
    return 0;
}
// 5 3
// 1 5 8 3 9 
// 1 8 3
// output-
// 5