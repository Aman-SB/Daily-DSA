// Find the first repeated word in a string

// stored the word in the map
// then check the count of the map




#include<bits/stdc++.h>
using namespace std;
void checkrepeated(string s){
    int n=s.length();
    string t="",ans="";
    unordered_map<string,int> map;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            t+=s[i];
        }
        else
        {
            map[t]++;
            if(map[t]>1)
            {
                ans=t;
            }
            t="";
        }
    }
        map[t]++;
        if(map[t]>1)
        {
            ans=t;
        }
        if(ans!="")
        {
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
        else
        {                    
            cout<<"No Repitions"<<endl;
        }
    
}  

int main(){
    string s;
    getline(cin,s);
    checkrepeated(s);
    return 0;
}
// hello world hello 
// hello