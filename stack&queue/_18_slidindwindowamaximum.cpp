// Sliding Window Maximum
#include<bits/stdc++.h>
using namespace std;
//fuction taking maximum value from slinding window
vector<int> maximumSlidingWindow(vector<int>&arr,int n, int k){
    vector<int> ans;
    deque<int> dq;
    for(int i=0;i<n;i++){
        //condition to move forward the window
        if(!dq.empty() && dq.front() == i-k){
            dq.pop_front();
        }
        //if the value in back is smaller than curr value then pop out the value from deque
        while(!dq.empty() && arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        //pushing the value of idices
        dq.push_back(i);
        //storing the answer 
        if(i>=k-1){
            ans.push_back(arr[dq.front()]);
        }   
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int> ans;
    ans = maximumSlidingWindow(arr,n,k);
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}
// n = 8
// k = 3
// input = 1 3 -1 -3 5 3 6 7
// output 3 3 5 5 6 7 