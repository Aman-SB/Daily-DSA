#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sortedmatrix(vector<vector<int>>& arr,int& n){
    vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v.push_back(arr[i][j]);
        }
    }
    sort(v.begin(),v.end());
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=v[k++];
        }
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;
    v=sortedmatrix(v,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// n - 3
// 1 5 3
// 2 8 7
// 4 6 9
//output-
// 1 2 3
// 4 5 6
// 7 8 9