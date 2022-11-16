// given string is palindrome 

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int n=s.length();
    int start=0;
    int end=n-1;
    if(n==0){
        return 0;
    }
    while(start<=end){
        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    string s;
    getline(cin,s);
    bool a=isPalindrome(s);
    if(a==0){
        cout<<s<<" is not a palindrome";
    }
    else
    {
        cout<<s<<" it is a palindrome";
    }
    return 0;
}
// NAMAN
// NAMAN it is a palindrome