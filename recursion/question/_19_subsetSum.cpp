// Subset Sum
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &ans,vector<int> &arr,int sum,int n,int index){
    //Base Condition
    if(index >= n){
        ans.push_back(sum);
        return;
    }
    // main logic
    
    solve(ans,arr,sum+arr[index],n,index+1);
    solve(ans,arr,sum,n,index+1);
}
vector<int> subsetSum(vector<int> &arr, int n){
    vector<int> ans ;
    int sum = 0;
    int index = 0;
    solve(ans,arr,sum,n,index);
    return ans;
}
int main(){
    int n = 2;
    vector<int> arr = {2,3};
    vector<int> ans;
    ans = subsetSum(arr,n);
     sort(ans.begin(),ans.end());
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}
// output-
// 0 2 3 5 