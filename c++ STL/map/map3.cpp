#include<bits/stdc++.h>
using namespace std;
void freq(string s[],int n)
{
    map<string,int> m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    freq(s,n);
    return 0;
}
// 8
// abc
// def
// ghi
// abc
// def
// ghi
// abc
// def
// output-
// abc 3
// def 3
// ghi 2