#include<bits/stdc++.h>
using namespace std;
void permutation(string s)
{
    int n=s.length();
    string s="";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                s=char[i]+char[j]+char[k];
            }
        }
    }
}
int main(){
    string s;
    getline(cin,s);
    permutation(s);
    return 0;
}