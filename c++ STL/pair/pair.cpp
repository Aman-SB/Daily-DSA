#include<bits/stdc++.h>
using namespace std;
// pair is generally use for maintain the relation between two data or two containers
//generally we dont use pair
int main(){
    pair<int,string>p;
    // p=make_pair(2,"abc");
    p={2,"abc"};
    //while using the reference it changing the value 
    pair<int,string> &p1=p;
    // if i dont use the reference the the value is copy as same and it will not change 
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

}