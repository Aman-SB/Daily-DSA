#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& a, int& n){
    int temp;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            temp=a[i][j];
            a[i][j]=a[j][n-i-1];
            a[j][n-i-1]=a[n-i-1][n-j-1];
            a[n-i-1][n-j-1]=a[n-j-1][i];
            a[n-j-1][i]=temp;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    rotate(v,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// n-3
// 1 2 3
// 4 5 6 
// 7 8 9
// output-
// 3 6 9
// 2 5 8
// 1 4 7