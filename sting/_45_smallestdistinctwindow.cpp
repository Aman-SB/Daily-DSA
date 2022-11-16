#include<bits/stdc++.h>
using namespace std;
    int findSubString(string str)
    {
        map<char,int> m;
        string t="";
        int count=0;
        int n=str.length();
        for(int i=0;i<n;i++){
            m[str[i]]++;
        }
        for(auto it : m){
         count++;
        }
        return count;
    }
    int main(){
        string str;
        getline(cin,str);
        cout<<findSubString(str);
        return 0;
    }
    // aaab
    // 2