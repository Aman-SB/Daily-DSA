// vector are array which is dynamically size
#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>&v){
    cout<<"size :"<<" "<<v.size()<<endl;
    // v.size() T.C= O(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int a[10];
    // in this above array we cannot change the size of the array
    vector<int> v;
    // while vector is make to instialize array dynamically which can change size anytime
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        printvector(v);
        v.push_back(x); //T.C-O(1);
        //when we use push_back it take the value and store at the last of the vector 
    }
    printvector(v);
    return 0;
}
// 5
// 1 2 3 4 5 


// size : 0

// size : 1
// 1
// size : 2
// 1 2
// size : 3
// 1 2 3
// size : 4
// 1 2 3 4
// size : 5
// 1 2 3 4 5