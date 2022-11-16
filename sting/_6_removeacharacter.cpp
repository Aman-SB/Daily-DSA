// Remove a given character from String


#include<bits/stdc++.h>
using namespace std;
void remove(string s, char c){
    int n=s.length();
    // we make a temporary string to store the character which we take from old string 
    string temp;

    for(int i=0;i<n;i++){
        // storing the value of string in charcter one by one 
        char ch=s[i];
        // if the char not equal to the char which we have to replace
        if(ch!=c){
            // then we store the value of char in the temp string
            temp+=ch;
        }
    }
    cout<<temp;

}
int main()
{
    string s;
    getline(cin,s);
    char c;
    cin>>c;
    remove(s,c);
    return 0;
}