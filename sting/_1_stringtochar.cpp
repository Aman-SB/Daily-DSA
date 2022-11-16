// Convert string to character and print

#include<bits/stdc++.h>
using namespace std;
void convert(string s){
    char ch[s.length()];
    for(int i=0;i<s.length();i++){
        // coverting string one by on into character
        ch[i]=s[i];
        cout<<ch[i]<<" ";
    }
   
}
int main(){
    string s;
    getline(cin,s);
    convert(s);
    
    return 0;
}