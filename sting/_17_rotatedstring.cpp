// A Program to check if strings are rotations of each other or not

// step1-first check the length of both the string match or not
// step2- then make a string which store the value of first string two time bcz 
// for ex- string1= abc string2= bca
// temp=s1+s1=abcabc;   bcz it store all the roated string inside it
// step3-find the string in the new string you have make
// step4-if it match return 1 


#include<bits/stdc++.h>
using namespace std;
bool rotated(string s1, string s2){
    if(s1.length()!= s2.length())
    return 0;
    string temp=s1+s1;
    if(temp.find(s2)){
        return 1;
    }
    return 0;
    
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(rotated(s1,s2))
    {
        cout<<"rotated";
    }
    else
    {
        cout<<"not rotated";
    }
    return 0;
}