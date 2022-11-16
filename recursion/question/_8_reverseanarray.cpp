// Reverse an Array using recursion
#include<bits/stdc++.h>
using namespace std;

/* // Approach 1-
void reversing(int *arr,int l,int r){
    // Base Case
    if(l >= r){
        return ;
    }
    swap(arr[l],arr[r]);
    // Recursive Call
    reversing(arr,l+1,r-1);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversing(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// n - 5
// input - 1 2 3 4 5
// output - 5 4 3 2 1  */

// Approach 2-
void reversing(int *arr,int i,int n){
    // Base Case
    if(i >= n/2){
        return;
    }
    // condition
    swap(arr[i],arr[n-i-1]);
    // recursive
    reversing(arr,i+1,n);

}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversing(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// n - 6 
// input - 1 2 3 4 5 6
// ouput - 6 5 4 3 2 1 