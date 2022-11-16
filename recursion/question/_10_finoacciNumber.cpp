// Fibonacci Number

// Time Complexity - O(2^n)
// Space Complexity - O(1) -> //internal stack - o(n)
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    /* Base Condtion
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    } */

    // Base Condition
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int a=0;
    int b=1;
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
// n - 10
// output - 55