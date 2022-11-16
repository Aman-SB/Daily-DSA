// reverse the array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    for(auto a:v){
        cout<<a<<" ";
    }
    return 0;
}
// input-
// 5
// 1 5 6 2 8
// output-
// 8 2 6 5 1 