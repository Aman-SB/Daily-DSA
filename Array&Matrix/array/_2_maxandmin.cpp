// maximun element & minimun element

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max=*max_element(v.begin(),v.end());
    int min=*min_element(v.begin(),v.end());
    cout<<"Max Element : "<<max<<endl;
    cout<<"Min Element : "<<min;
    return 0;
}
// 5
// 1 5 3 7 2 
// Max Element : 7
// Min Element : 1