#include<bits/stdc++.h>
using namespace std;

// step1- make a count for zero and 1 and for both if they are equal
// step2- start a loop and count for 0 and 1
// step3- if both are equal then count ko v increase krna
// step4 - if both count and count are not equal at last then return -1 or else count

int counting(string s){
    int count0=0,count1=0,cnt=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
        if(count0 == count1){
        cnt++;
    }
    }
    
    if(count0 != count1){
        return -1;
    }
    return cnt;
}
int main(){
    string s;
    getline(cin,s);
    cout<<counting(s);
    return 0;
}
// 0100110101
// 4