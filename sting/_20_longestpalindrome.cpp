// longest palindrome

// step1- produce all the substring
// step2- check the substring is palindromee or not
// step3- if it is palindrome then send into a string and check the length
// step4- check the largest palindrome

#include<bits/stdc++.h>
using namespace std;
void biggest(string *store){
    int arr[1000];
    int n =sizeof(store);
    for(int i=0;i<n;i++){
        string s = store[i];
        arr[i]=s.length();
        }
        int max = arr[0];
        int index = 0;
        
    for(int i=0;i<n;i++){   
        if(arr[i]>max){
            index=i;
        }
        
    }
    cout<<store[index]<<endl;
    
}
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
    string store[100] ;
    for(int i=0;i<n;i++){
        string temp;
        for(int j=i;j<n;j++){
            temp += s[j] ;
            if(palindrome(temp) == 1){
                
                store[i] = temp; 
                
            }
        }
    }
    biggest(store);
}
int main(){
    string s;
    getline(cin,s);
    bigpalindrome(s);
    return 0;
}
//aaaabbaa
//aabbaa