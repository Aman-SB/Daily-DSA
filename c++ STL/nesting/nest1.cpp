#include<bits/stdc++.h>
using namespace std;
int main(){
    // insertion
    map<pair<string,string>,vector<int>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int cnt;
        cin>>fn>>ln>>cnt;
        for(int j=0;j<cnt;j++){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    /* print 1
    for(auto &it:m){
        auto &name=it.first;
        auto &list=it.second;
        cout<<name.first<<" "<<name.second<<endl;
        cout<<list.size()<<endl;
        for(int j=0;j<list.size();j++){
            cout<<list[j]<<" ";
        }
        cout<<endl;
    } */


    // print 2
    for(auto &value:m){
        cout<<value.first.first<<" "<<value.first.second<<endl;
        // auto &li=value.second;
        cout<<value.second.size()<<endl;
        for(int i=0;i<value.second.size();i++){
            cout<<value.second[i]<<" ";
        }
        cout<<endl;
    }
}
// input-
// 3
// a b 3 
// 1 4 6
// c d 2
// 8 4
// e f 3
// 1 4 9
// output-
// a b
// 3
// 1 4 6
// c d
// 2
// 8 4
// e f
// 3
// 1 4 9