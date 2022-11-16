// convert the integer into roman number

#include<bits/stdc++.h>
using namespace std;


// Step1- check the integer if it follow any of the condition like the number is greater then 1000,900,500,400,100,90,50,40,10,9,5,4,1
// step2- special loop occur at 1000,100,10 and 1 
// for ex- 3838
// 1- we have to subract 1000 3times = 838
//  there is no such condition b/w the 900 to 400 
// 2- we have to subract 500 1times = 338
// 3-we get 338 then  subract 338 by 100 3times = 38 
// 4- then we have to subract 38 by 10 3times =8
// 5- then subract 8 by 5 = 3
// 6- then subract 3 by 1 3times = 0


string roman(int n){
    string s="";
    while(n>=1000){
        s=s+"M";
        n=n-1000;       
        }
    if(n>=900){
        s=s+"CM";
        n=n-900;       
        }
    if(n>=500){ 
        s=s+"D";
        n=n-500;       
        }
    if(n>=400){
        s=s+"CD";
        n=n-400;       
        }
    while(n>=100){
        s=s+"C";
        n=n-100;       
        }
    if(n>=90){
        s=s+"XC";
        n=n-90;       
        }
    if(n>=50){
        s=s+"L";
        n=n-50;       
        }
    if(n>=40){
        s=s+"XL";
        n=n-40;       
        }    
    while(n>=10){
        s=s+"X";
        n=n-10;       
        }
    if(n>=9){
        s=s+"IX";
        n=n-9;       
        }
    if(n>=5){
        s=s+"V";
        n=n-5;       
        }
    if(n>=4){
        s=s+"IV";
        n=n-4;       
        }    
    while(n>=1){
        s=s+"I";
        n=n-1;       
        }
 
    return s;

}
int main()
{
    int n;
    cin>>n;
    cout<<roman (n);
    return 0;
}
// 1988
// MCMLXXXVIII