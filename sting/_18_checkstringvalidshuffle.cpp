// Check if a string is a valid shuffle of two other strings

// step1 - check the length of the string 1 and string 2 if it is match with the resultant string length 
// step2 - then start the loop for the result 
// step3 - if i is less than length of first string and the charcter match with the resultant charcter then go for the next charcter
// step4 - if above condition does not match then go for the second string 
// agar woh phli string mae ni hai toh dusri mae toh hoga hi
// step5 - if it does not match both of the condtion then break the loop 
// step6 - then check if any of them i or j stuck in the loop 
// agar i ya j khi piche attack gye hai woh aage ni bad paa rhe hai tbbh (ya fir flag ko hum 0 rakh k v kr skte hai)
// return false
// nhi toh return true


#include <bits/stdc++.h>
using namespace std;

bool search(string a, string b , string res)
{
    int l1=a.length();
    int l2=b.length();
    int lr=res.length();
    if((l1+l2) != lr) {
    return 0;
    }
    else{
    int i=0,j=0,k=0;
    int flag=0;
    while(k<lr){
         if(i<l1 && a[i]==res[k]) i++;
         else if(j<l2 && b[j]==res[k]) j++;
         else {
             flag=1;
                 break;
         }
          k++;
     }
       if(flag=0 ){
        return 0;
         }
          else
         {
    
         return 1;
     }
	
    }
}
int main()

{
	string a; 
	string b;
    string res;
    getline(cin,a);
    getline(cin,b);
    getline(cin,res);
	bool value=search(a, b,res);
     if(value){
        cout<<"yes";
     }
     else{
        cout<<"no";
     }
    
	return 0;
}
