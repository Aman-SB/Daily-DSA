// reverse a stack using a stack
#include<bits/stdc++.h>
using namespace std;
string reverse(string s,int n){
    stack<char> st;
    for(int i=0;i<n;i++){
        st.push(s[i]);
    }
    for(int i=0;i<n;i++){
        s[i]=st.top();
        st.pop();
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    int n=s.size();
    string ans = reverse(s,n);
    cout<<ans;
    return 0;
}
// input - HelloWorld
// output - dlroWolleH