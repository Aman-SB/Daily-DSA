#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        res.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            if(res.back()[1]>=intervals[i][0])  
                res.back()[1]=max(intervals[i][1],res.back()[1]);
            else    res.push_back(intervals[i]);
        }
        return res;
    }
int main(){
    vector<vector<int>> v={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans=merge(v);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++)
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
//output- 
// 1 6 8 10 15 18 