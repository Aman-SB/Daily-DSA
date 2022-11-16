#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<string> s;
    s.insert("abc");        // O(log(n))
    s.insert("def");
    s.insert("gji");
    s.insert("abc");
    s.insert("djh");

// abc
// abc
// def
// djh
// gji
    
    auto it = s.find("abc");    
    // when we use find operation in multiple value then it return the iterator of first value
    if(it != s.end())   
        s.erase(it);
        
    for(auto &it:s){
        cout<<it<<endl;
    }
    /* s.erase("abc");
    but when we use erase and pass the value it erase all the value related to it
    def
    djh
    gji */
    return 0;
}

// abc
// def
// djh
// gji