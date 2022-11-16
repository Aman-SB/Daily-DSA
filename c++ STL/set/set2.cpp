// given a string print unique string

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
// 8
// asjd
// abc
// dhf
// abc
// dhf
// asjd
// abc
// dhf
//output-
// abc asjd dhf