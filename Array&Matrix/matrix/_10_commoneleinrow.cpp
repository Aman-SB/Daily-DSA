// common element in every row
#include<bits/stdc++.h>
using namespace std;
vector<int> common(vector<vector<int>>& a, int& n,int& m){
    unordered_map<int,int> map;
    vector<int> v;
    for(int j=0;j<m;j++){
        map[a[0][j]]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(map[a[i][j]] == i){
                map[a[i][j]]=i+1;
                if(i==n-1 && map[a[i][j]]==n){
                    int x=a[i][j];
                    v.push_back(x);
                }
            }
        }
    }
    return v;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<int> mp=common(v,n,m);
    for(int i=0;i<mp.size();i++){
        cout<<mp[i]<<" ";
    }
    return 0;
}
// r=4 
// c=5
// 1 2 1 4 8 
// 3 7 8 5 1
// 8 7 7 3 1
// 8 1 2 7 9
// common element-
// 8 1 