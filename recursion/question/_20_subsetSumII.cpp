// Subset Sum II
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,vector<vector<int>> &ans,vector<int> &subs, int index){
    // Base Case
    ans.push_back(subs);

    // main logic
    // never ever use index inside the for loop
    for(int i=index;i<arr.size();i++){
        if(i>index && arr[i]==arr[i-1])continue;
        subs.push_back(arr[i]);
        solve(arr,ans,subs,i+1);
        subs.pop_back();
    }
}
vector<vector<int>> subsetSum(vector<int> &arr, int n){
    vector<vector<int>> ans;
    vector<int> subs;
    int index =0;
    sort(arr.begin(),arr.end());
    solve(arr,ans,subs,index);
    return ans;
}
int main(){
    int n = 3;
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    ans = subsetSum(arr,n);
    for(auto val :ans){
        for(auto it : val){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// output-
//
// 1 
// 1 2
// 1 2 3
// 1 3
// 2
// 2 3
// 3