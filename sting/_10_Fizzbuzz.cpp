// Fizz Buzz Implementation

// step1- first take a number up to which we have to print fizz buzz
// step2- then start the loop upto the number taken by the user
// step3- then there is the condition if i reach 3,5 & 15 then we have to print the fizz, Buzz,FizzBuzz respectively else you have to print the number


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%15==0){
            cout<<"FizzBuzz"<<" ";
        }
        else if(i%5==0){
            cout<<"Buzz"<<" ";
        }
        else if(i%3==0){
            cout<<"Fizz"<<" ";
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}
// 15
// 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz