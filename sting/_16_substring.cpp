// Program to print all substrings of a given string

//step1-start a loop upto the length of the string
// step2- make a string inside bcz we dont want to clear the string  if you dont make the string then you have to clear string at the last of the 1 loop
// step3-then start one more loop which will traverse the string after the value of i
// step4-store the value in the string you have make
// for ex- abcd
/* i=a;
j=a // j=ab // j=abc // j=abcd
i=b;
j=b // j=bc //j=bcd
i=c
j=c // j=cd
i=d
j=d */

#include<bits/stdc++.h>
using namespace std;
string substring(string s){
  
    for(int i=0;i<s.length();i++){
        string sub;
        for(int j=i;j<s.length();j++){
            sub+=s[j];
            cout<<sub<<endl;
            
        }
        
    }
}
int main(){
    string s;
    getline(cin,s);
    substring(s);
    return 0;
}