#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int,string> v1 , vector<int,string> v2){
    if(v1 != v2){
        return v1.first < v2.first;
    }
    return v1.second > v2.second;
}
int main(){
    int n;
    cin>>n;
    vector<int,string> v;
    for(int i=0;i<n;i++){
        string name;
        int marks;
        cin>>name;
        cin>>marks;
        v.push_back(make_pair(marks,name));
    }
    sort(v.begin(),v.end(),cmp);
    // for(auto &it:m){  
    //     cout<<it.second<<" "<<it.first<<endl;
    // }
    return 0;
}