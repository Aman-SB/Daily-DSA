// how to add element in vector of vector

#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<vector<int>> v;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
         int n;
         cin>>n;
         for(int i=0;i<n;i++){
            int x;
            cin>>x;
            temp.push_back(x);
         }
         v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        printvec(v[i]);
    }
    return 0;
}
// input-
// 2
// 5
// 1 2 3  4 5 
// 4
// 1 2 8 5
// output-
// size : 5
// 1 2 3 4 5
// size : 4
// 1 2 8 5



// if we want to add any element in the vector you can add it it working is same as array in the output but it is not same as array because of dyanmically in the nature
// v[0].push_back(element);
// cout<<v[0][1]=1