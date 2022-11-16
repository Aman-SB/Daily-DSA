#include<bits/stdc++.h>
using namespace std;
void printmap(unordered_map<int,string> m){
    cout<<"size"<<m.size()<<endl;
    for(auto &it:m){        //n*O(1)
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
}
int main(){
    unordered_map<int,string> m;
    m[1]="abc";     //T.C-(O(1))
    m[5]="mdw";
    m[3]="dknl";
    m.insert({4,"akjd"});
    // if you insert value in same key 2 times the value will be come of second one
    printmap(m);
    
    return 0;
}