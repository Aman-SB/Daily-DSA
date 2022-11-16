#include<bits/stdc++.h>
using namespace std;
void nextpermutation(vector<int> &a,int n){
    int index=-1;
    for(int i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(a.begin(),a.end());
    }
    else{
        int prev=index;
        for(int i=index+1;i<n;i++){
            if(a[i]>a[index-1] && a[i]<=a[prev]){
                prev=i;
            }
        }
        swap(a[index-1],a[prev]);
        reverse(a.begin()+index,a.end());
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    nextpermutation(v,n);
    for(auto &value:v){
        cout<<value<<" ";
    }
    return 0;
}
// 9
// 1 5 8 4 7 6 5 3 1
// output-
// 1 5 8 5 1 3 4 6 7