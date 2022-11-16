// sum of first N Number
#include<bits/stdc++.h>
using namespace std;

// approach1
int solve(int sum,int count,int n){
    //base condition
    if(count > n){
        return 0;
        }
        // sum leke aara hai solve hamara function 
    return solve(sum,count+1,n) + count;

}
int main(){
    int n;
    cin>>n;
    int sum=0;
    cout<<solve(sum,0,n);
    return 0;
}


/* // approach 2 -
void solve(int n,int sum){
    // Base Case
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    // Recursive Call
    solve(n-1,sum+n);
}
int main(){
    int n;
    cin>>n;
    solve(n,0);
    return 0;
} */
// n - 5
// output - 15