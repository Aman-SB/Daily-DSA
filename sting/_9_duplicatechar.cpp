// duplicate character in a string

#include<bits/stdc++.h>
using namespace std;
void dup(string s){
    unordered_map<char ,int> count;
    // approach 1
    // time complexity O(n)
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j] && s[i]!=' '){
                count[s[j]]++;
            }
        }
    }
    for(auto it:count){
        cout<<it.first<<" ";
    }



// approach 2
    // map<char,int> count;
    // for(int i=0;i<n;i++){
    //     count[s[i]]++;
    // }
    // for(auto it: count){
    //     if(it.second>1){
    //         cout<<it.first<<" ";
    //     }
    // }
}
int main(){
    string s;
    getline(cin,s);
    dup(s);
    return 0;
}
// hello world
// o l 