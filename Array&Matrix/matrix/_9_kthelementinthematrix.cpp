#include<bits/stdc++.h>
using namespace std;
int kthsmallest(vector<vector<int>>& mat, int& k){
    // int n=mat.size();
    // priority_queue<int> pq;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         pq.push(mat[i][j]);
    //         if(pq.size() > k){
    //             pq.pop();
    //         }
    //     }
    // }
    // return pq.top();

    int n=mat.size();
    int low=mat[0][0];
    int high=mat[n-1][n-1];
    while(low<high){
        int mid=low+(high-low)/2;
        int count=0;
        for(int i=0;i<n;i++){
            count+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
        }
        if(count < k){
            low=mid+1;
        }
        else    high=mid;
    }
    return low;
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
    int k;
    cin>>k;
    cout<<kthsmallest(v,k);
    return 0;
}
// n=3
// 1 5 9 10 11 13 12 13 15
// k=8
// output-
// 13