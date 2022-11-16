// Encrypt the string

// step1- you have to check the string one by one 
// step2- then you have to count the occurence of the character 
// for ex- i/p- aaaaaa	o/p- 5a
// step 3- if the occurence of the charcter is 10 & above then you have to check the hexadecimal 
// step 4- then take the hexadecimal and the charcter in one string and print it
// step5-print it in revrse

#include<bits/stdc++.h>
using namespace std;
string hexa(int n){
    string temp;
    while(n!=0){
        int rem=n%16;
        char c;
        if(rem<10){
            c=rem+48;
        }
        else{
            c=rem+87;
        }
        temp+=c;
        n=n/16;
    }
    return temp;
}
void encrypt(string s){
    string temp;
    int n=s.length();
    for(int i=0;i<n;i++){
        char ch=s[i];
        int count=0;
        while(i<n && s[i]==ch){
            count++;
            i++;
        }
        i--;
        string ans=hexa(count);  
        temp+=ch;
        temp+=ans;
        
    }
    reverse(temp.begin(), temp.end());
    cout<< temp;
}
int main()
{
    string s;
    getline(cin,s);
    encrypt(s);
    return 0;
}