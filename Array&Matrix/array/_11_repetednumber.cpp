#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> v){
    int n=v.size();
    unordered_map<int,int> count;
    int value;
    for(int i=0;i<n;i++){
        count[v[i]]++;
    }
    for(auto &it:count){
        if(it.second>1){
            value=it.first;
        }
    }
    return value;
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
    cout<<solve(v);
    return 0;
}
// 5
// 1 2 5 3 2
// output-
// 2