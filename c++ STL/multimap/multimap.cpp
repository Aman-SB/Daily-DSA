#include<bits/stdc++.h>
using namespace std;
void printmap(multimap<int,string> m){
    cout<<"size"<<m.size()<<endl;
    for(auto &it:m){        //nlog(n)
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
}
int main(){
    multimap<int,string> m;
    m.insert({1,"dnd"});
    m.insert({2,"abc"});
    m.insert({1,"dsde"});
    m.insert({2,"defk"});
    m.insert({4,"enf"});
    m.insert({5,"fiwnjf"});
    printmap(m);
    
    return 0;
}
// size6
// 1 dnd
// 1 dsde
// 2 abc
// 2 defk
// 4 enf
// 5 fiwnjf