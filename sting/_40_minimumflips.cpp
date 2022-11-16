#include<bits/stdc++.h>
using namespace std;

// * check all the index with the two condition if (i=even s[i]=1 and i=odd s[i]=0) then count1++;
// * if first condition not match then if (i=odd s[i]=1 and i=even s[i]=0 ) then count2++;
// then return minimun of both 
int minFlips (string s)
{
    int n=s.length();
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(i&1 and s[i]=='0') c1++;
        if(i%2==0 and s[i]=='1')c1++;
        if(i&1 and s[i]=='1') c2++;
        if(i%2==0 and s[i]=='0')c2++;
    }

    
    return min(c1,c2);
}
int main(){
    string s;
    getline(cin,s);
    int a=minFlips(s);
    cout<<a;
    return 0;
}
// 001
// 1