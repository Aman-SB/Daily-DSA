// Circular petrol pump
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&p, vector<int>&d,int n){
    int deficient = 0;
    int balance = 0;
    int start = 0;
    for(int i=0;i<n;i++){
        balance += p[i] - d[i];
        if(balance < 0){
            deficient += balance;
            start = i+1;
            balance = 0;
        }
    }
    if(deficient + balance >= 0 ){
        return start;
    }
    else
    {
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> petrol,distance;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        petrol.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        distance.push_back(x);
    }

    cout<<solve(petrol,distance,n);
    return 0;
}
// n = 4
// petrol - 4 6 7 3 
// distance - 6 5 3 5
// index - 1