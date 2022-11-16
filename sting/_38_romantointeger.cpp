#include<bits/stdc++.h>
using namespace std;

// * intialize all the value in map 
// * check the condition agar jo value s[i] mae hai woh badi hai uss k aage wale se toh add krdena purani wali value mae
// * agar upar wali condition match na hui toh agar s[i] mae jo value hai woh choti hui toh subract kr dena 


int romantoint(string s){
    int n=s.length();
    map<char,int> map;
    map['I']=1;
    map['V']=5;
    map['X']=10;
    map['L']=50;
    map['C']=100;
    map['D']=500;
    map['M']=1000;
    int total=0;

    for(int i=0;i<n;i++){
        if(map[s[i]] > map[s[i+1]]){
            total = total+map[s[i]];
        }
        else{
            total = total-map[s[i]];
        }
    }
    return total;
}
int main(){
    string s;
    getline(cin,s);
    cout<<romantoint(s);
    return 0;
}
// MCMXCIV
// 1994