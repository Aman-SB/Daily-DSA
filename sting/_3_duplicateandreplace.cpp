// Duplicate characters in a string

#include<bits/stdc++.h>
using namespace std;
void dupl(string s)
{
    // approach 1


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
    for(int i=0;i<26;i++){
        // we intialize the count value in the array so we check the array how many alphabet are repeated more than 1 and print it 
        if(arr[i]>1)
        {
            char ans = 'a'+i;
            cout<<ans<<endl;
        }
    }




    // approach2


    // int n=a.length();
    //  int count;
    // for(int i=0;i<n;i++)
    // {
    //    count=1;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]==a[j] && a[i]!=' '){
    //             count++;
    //             a[j]=0;
    //         }
    //     }
       
    // }
    // for(int i=0;i<n;i++)
    // {
    //     if(count>1 && a[i]!= '0')
    //      {
    //       cout<<a[i]<<endl;
    //      }
    // }

    
}
int main()
{
    string s;
    getline(cin,s);
    dupl(s);
    return 0;
}