#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v={{1,2},{2,3},{3,4},{4,5}};
   
    //    approach 1 for iteration
    vector<pair<int,int>> ::iterator it;
    for(it = v.begin() ; it != v.end() ; it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

    //    approach 2 for iteration
    for(it = v.begin() ; it != v.end() ; it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    cout<<endl;

    //    approach 3 for iteration
    for(auto &value:v){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;

    //    approach 4 for iteration
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
// 1 2
// 2 3
// 3 4
// 4 5

// 1 2
// 2 3
// 3 4
// 4 5

// 1 2
// 2 3
// 3 4
// 4 5

// 1 2
// 2 3
// 3 4
// 4 5