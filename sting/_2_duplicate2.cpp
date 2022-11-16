// Find Duplicate characters in a string

#include<bits/stdc++.h>
using namespace std;
void dupl(string s){
    // we itialise an array of 26 which is for couting the alphabet

    int n=s.length();
    int arr[26]={0};

    // we started the loop and copy the string one by one into charcater 
    
    for(int i=0;i<n;i++){
        int count=0;
        char ch=s[i];
        // then convert the charcter into integer
        if(ch>='a' && ch<='z'){
            count = ch-'a';
        }
        else
        {
            count = ch-'A';
        }
        // then we increase the count as per the alphabet 
        // for eg. geeks g=1; e=1; e=2; k=1;s=1;
        arr[count]++;
    }
    for(int i=0;i<26;i++)
    {
        // the we check if the count is greater then 1

        if(arr[i]>1)
        {
            // we intialize the value of i into a charcter to know about the which character is that

            char ans='a'+i;
            
            // then we give output of the array which show the count

            cout<<ans<<" count = "<<arr[i]<<endl;
        }
    }
}
int main()
{
    string s;
    getline(cin,s);
    dupl(s);
    return 0;

}