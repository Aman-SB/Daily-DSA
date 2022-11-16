#include<bits/stdc++.h>
using namespace std;
int inversionCount(int arr[], int N)
    {
        int count=0;
        for( int i=0;i<N;i++){
            for( int j=i+1;j<N;j++){
                if(arr[i]>arr[j]){
                    count++;
                }
            }
        }
        return count;
    }
int main(){
    int a[5]={2, 4, 1, 3, 5};
    cout<<inversionCount(a,5);
    return 0;
}