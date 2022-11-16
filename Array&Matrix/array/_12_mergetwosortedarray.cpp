#include<bits/stdc++.h>
using namespace std;
void mergesortedarray(int a[],int n,int b[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]>b[0]){
            swap(a[i],b[0]);
            sort(b,b+m);
        }
        i++;
    }
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
    mergesortedarray(a,n,b,m);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<m;j++){
        cout<<b[j]<<" ";
    }
    return 0;
}
// 6
// 4
// 1 5 9 10 15 20
// 2 3 8 13 
// output-
// 1 2 3 5 8 9 
// 10 13 15 20