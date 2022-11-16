// Convert a Sentence into its equivalent mobile numeric keypad sequence.	

#include<bits/stdc++.h>
using namespace std;
string numeric(string s[],string input){
    int n=input.length();
    string output="";
    for(int i=0;i<n;i++){
        if(input[i] == ' '){
            output += "0";
        }
        else{
            if(input[i]>='A' && input[i]<='Z'){
                int position= input[i]-'A';
                output += s[position];
            }
            else{
                int position= input[i]-'a';
                output += s[position];
            }
            
        }
    }
    return output;
}
int main(){
    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
    string input;
    getline(cin,input);
    cout<<numeric(str,input);
    return 0;
}
// Aman bisht
// 262660224447777448