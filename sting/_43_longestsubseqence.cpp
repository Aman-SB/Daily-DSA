#include<bits/stdc++.h>
using namespace std;

    int lcs(int x, int y, string s1, string s2)
    {
        int count=0;
        map<char,int> map;
        for(int i=0;i<x;i++){
                map[s1[i]]++;
        }
        for(int i=0;i<y;i++){
                map[s2[i]]++;
        }
        for(auto it:map){
            if(it.second>1){
                count++;
            }
        }
        return count;
    }

int main(){
    int x,y;
    cin>>x>>y;
    string s1,s2;
    cin>>s1>>s2;
    cout<<lcs(x,y,s1,s2);
    return 0;
}
// 6
// 6
// ABCHDG
// AKJHSI  
// 2