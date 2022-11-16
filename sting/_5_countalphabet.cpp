// Program to count vowels, consonant, digits and special characters in string.


#include<bits/stdc++.h>
using namespace std;
void print(int v,int c,int d,int s){
    cout<<"vowels : "<<v<<endl;
    cout<<"consonants : "<<c<<endl;
    cout<<"digits : "<<d<<endl;
    cout<<"special characters : "<<s<<endl;
}
void count(string s)
{
    int n=s.length();
    int start=0;
    int vowels=0,consonant=0,digit=0,special=0;
    while(start<n){
        // store the value of string in a character

        char ch=s[start];

        // first we have to covert all charcater in lower case or upper case
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        {
                                          
            ch=tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            }
            else{
                consonant++;
            }
        }
        else{
            if(ch>='0' && ch<='9'){
                digit++;
            }
            else{
                special++;
            }
        }
        start++;
    }
    print(vowels,consonant,digit,special);
    
}
int main()
{
    string s;
    getline(cin,s);
    count(s);
    return 0;
}