// How to check if string contains only digits in cpp

// step1-check the string one by one 
// step2- if the string contain alphabet or special character then return false 
// step3- if the condition does not match then the string conatin number so the return true




#include<bits/stdc++.h>
using namespace std;
int checknumber(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]<'0' || s[i]>'9'){
            return 0;
        }
    }
    return 1;
}
int main(){
  string s;
  getline(cin,s);
  if(checknumber(s)==1){
    cout<<"True";
  }
  else{
    cout<<"False";
  }
  return 0;  
}
// 12342542
// True