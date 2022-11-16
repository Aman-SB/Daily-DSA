// count and say

// step1 - if n==1 or n==2 then return sring as 1 and 11 respectively
// step2 - store the value of the n=2 in the string after it we strat the count ans say
// step3 - start the loop after 3 bcz we have given the string for the previous one and upto input n 
// step4 - make a temporary string to store the string and count and make a count to store the count with value 1
// step 4 - the start another loop upto the length of the string 
// agar s[j] != s[j-1] agar esa hai toh t k anadar hum count ko store karenge woh v string bana k
// fir t k andar hum 1 phli wali value store karenge jiska humne count store krra hai mtlb s[j-1]
// fir humme count ko 1 krna padega naye wale k string k liye
// step5 - agar s[j] == s[j-1] so increment the value of count (jb tk ye conditon satsify hai)
// step6 - after that s k andar temporary string ko dalte rho 


#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            string t;
            int count=1;
            for(int j=1;j<=s.length();j++){
                if(s[j] != s[j-1]){
                    t=t+ to_string(count);
                    t=t+s[j-1];
                    count=1;
                }
                else
                {
                    count++;
                }
            }
            s=t;
        }
        return s;
    }
    int main(){
        int n;
        cin>>n;
        cout<<countAndSay(n);
        return 0;
    }