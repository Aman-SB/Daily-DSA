// divsible by 7 without modulus 

// step1-take the number from the user
// step2-then check if the number is negative or not if it is negative use recursion and make it positive then send the number once again
// step3- then use (n/10-2*(n-(n/10)*10) this formula 
// step 4- if we get n=0 or n=7 then the number is divisible by 7 or else it is not divisible by 7

#include<iostream>
using namespace std;

int isdivisible(int n){
    if(n<0){
        return isdivisible(-n);
    }

    if(n==0 || n== 7){
        return 1;
    }
    else if(n<10 && n!=7 && n!=0){
        return 0;
    }
    return isdivisible(n/10-2*(n-(n/10)*10));
    
}
int main(){
    int n;
    cin>>n;
    int a=isdivisible(n);
    if(a==1){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
    return 0;
}
// 616
// Divisible