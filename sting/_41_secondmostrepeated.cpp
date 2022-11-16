#include<bits/stdc++.h>
using namespace std;

// * make a map to store the string and the count of the string
// * make two variable to check the most repeated word 
// * check the first repeated word and store it in a variable 
// * then check the second repeated word 



string secFrequent (string arr[], int n)
    {
        string ans="";
        map<string,int> map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        int maxi=-1;
        int sec=-1;
        for(auto it:map){
            if(it.second>maxi){
                maxi=it.second;
            }
        }
        for(auto it:map){
            if(it.second>sec && it.second != maxi){
                ans=it.first;
                sec=it.second;
            }
        }
        return ans;
    }

int main(){
    int n;
    cin>>n;
    string s[100];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<secFrequent(s,n);
    return 0;
}
// 6
// aaa bbb ccc bbb aaa aaa
// bbb