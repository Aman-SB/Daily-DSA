#include<bits/stdc++.h>
using namespace std;
void printmap(map<int,string> m){
    
    map<int,string> ::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    cout<<"size"<<m.size()<<endl;
    for(auto &it:m){        //nlog(n)
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
}
int main(){
    map<int,string> m;
    m[1]="abc";     //T.C-(O(log(N)))
    m[5]="mdw";
    m[3]="dknl";
    m.insert({4,"akjd"});
    // if you insert value in same key 2 times the value will be come of second one
    printmap(m);
    
    return 0;
}
// 1 abc
// 3 dknl
// 4 akjd
// 5 mdw

// 1 abc
// 3 dknl
// 4 akjd
// 5 mdw