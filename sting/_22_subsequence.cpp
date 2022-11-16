//subsequence 

// step1 - start the loop inside it make a string bcz to clear the string every yime when loop start    
// step2 - start second loop to enter the chracter of the string in it
// step3 - store the value of the second string in the string we have make
// step4- print it
#include<bits/stdc++.h>
using namespace std;
void subsequence(string s)
{
    for(int i=0;i<s.length();i++){
        string temp="";
        for(int j=i;j<s.length();j++){
            temp+=s[j];
            cout<<temp<<" ";
        }
    }
}
int main(){
    string s;
    getline(cin,s);
    subsequence(s);
    return 0;
}
// abcd
// a ab abc abcd b bc bcd c cd d 