#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // vector<int> :: iterator it;  if i use auto insted of this iterator then the code will be easy
    for(auto it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(int value:v){   //in this loop the value of the element is copying in the value 
        cout<<value<<" ";
    }
    cout<<endl;
    //  if you want to give actual value then give reference in it means & 
    for(int &value:v){
        value++;
    }
    cout<<endl;
    // range loop
    for(int &value:v){
        cout<<value<<" ";
    }
    cout<<endl;
    
    // auto make our code easy it check the value if it is integer type or the string type 
    return 0;

}
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5

// 2 3 4 5 6