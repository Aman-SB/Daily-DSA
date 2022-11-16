// power of two
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    // recursive call
    if(n==0){return false;}
    if(n==1){return true;}
    if(n%2 != 0){return false;}
    //logic
    return isPowerOfTwo(n/2);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isPowerOfTwo(n)){
            cout<<"TRUE";
        }
        else
        {
            cout<<"FALSE";
        }
        cout<<endl;
    }
    return 0;
}
// 3
// 1 3 16
// TRUE
// FALSE
// TRUE