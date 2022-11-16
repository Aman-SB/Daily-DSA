#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> s;
    s.insert("abc");        // O(1)
    s.insert("ngf");
    s.insert("abc");
    s.insert("fbif");
    s.insert("bjvb");
    
    for(auto &it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
// bjvb ngf fbif abc