#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string ,int> m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    return 0;
}
// 8
// abc
// def
// abc
// def    
// abc
// ghi
// abc
// ghi
// 2
// abc
// 4
// def
// 2