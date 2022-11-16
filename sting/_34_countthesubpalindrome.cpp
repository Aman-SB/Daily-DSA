// count the palindrome

// step1- produce all the substring
// step2- check the substring is palindromee or not
// step3- if it is palindrome then increase the count
// step4- print the count

#include<bits/stdc++.h>
using namespace std;

int palindrome(string temp){
    if(temp.length()==0) return 0;
    int start = 0, end = temp.length()-1;
    while(start < end){
        if(temp[start] == temp[end]){
            start ++;
            end --;
        }
        else{
            return 0;
        }
    }
    
    return 1;
}
void bigpalindrome(string s){
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        string temp;
        for(int j=i;j<n;j++){
            temp += s[j] ;
            if(palindrome(temp) == 1){ 
                 count++;
            }
        }
    }
    cout<<count;
}
int main(){
    string s;
    getline(cin,s);
    bigpalindrome(s);
    return 0;
}
// abcd
// 4
