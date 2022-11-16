#include<bits/stdc++.h>
using namespace std;

void check(char temp,string s,int n,int index ){
        for(int i=index+1;i<n;i++){
            if(s[i] == temp){
                s.erase(s.begin() + i);
            }
        }
        cout<<"first"<<s<<endl;
    }
int lcs(int x, string s1)
    {
        int count=0;
        map<char,int> map;
        for(int i=0;i<x;i++){
            char temp = s1[i];
            int index1=i;
            map[s1[i]]++;
        }
        cout<<"second"<<s1<<endl;
        return count;
    }
int main(){
    int x;
    cin>>x;
    string s1;
    cin>>s1;
    cout<<lcs(x,s1);
    return 0;
}