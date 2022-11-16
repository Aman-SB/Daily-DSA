#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]<'0' || s[i]>'9'){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(check(s)==true)
    {
        cout<<"True";
    }   
    else{
        cout<<"False";
    } 

return 0;
}