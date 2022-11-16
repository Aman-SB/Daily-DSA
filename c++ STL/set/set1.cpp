#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(auto &it:s){
        cout<<it<<endl;
    }
}
int main(){
    set<string> s;
    s.insert("abc");        // log(n )
    s.insert("jda");
    s.insert("kmnfv");
    auto it = s.find("abc");    // log(n)
    if(it != s.end())   
    s.clear();
    print(s);
    return 0;
}