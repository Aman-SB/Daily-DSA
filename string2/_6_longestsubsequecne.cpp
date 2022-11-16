#include<bits/stdc++.h>
using namespace std;
string check(int n,string s){
    string temp="";
    int a;
    for(int i=0;i<n;i++){
        int j=i+1;
        while(j<n){
            if(s[j]==s[i])
            {
                s.erase(s.begin() + i);
                i--;
            }
            else{
                j++;
            }
        }
        if(s[j]='\0'){
            temp=s;
        }
    }
    
    cout<<temp;
}
// int lcs(string s1,string s2){
//     int x=s1.length();
//     int y=s2.length();
//     int count=0;
//     map<char,int> map;
//         for(int i=0;i<x;i++){
//                 map[s1[i]]++;
//         }
//         for(auto it:map){
//             cout<<it.first<<" "<<it.second<< endl;
//         }
//         for(int i=0;i<y;i++){
//                 map[s2[i]]++;
//         }
//         for(auto it:map){
//             cout<<it.first<<" "<<it.second<<endl;
//         }
//         for(auto it:map){
//             if(it.second>1){
//                 count++;
//             }
//         }
//     return count;
// }
int main(){
    int x=11;
    int y=5;
    string s1="UBZVAFSPQPQ";
    string s2="WUZIF";
    check(x,s1);
    check(y,s2);
    // cout<<lcs(s1,s2);
    return 0;
}