// duplicate consecutive 

#include<bits/stdc++.h>
using namespace std;
void conse(string s)
{
    string temp;
    int n=s.length();
    // we have take a start index which help in loop 
    int start=0;
    while(start<n){
// we started the looop
// we make a character array which store the string value one by one
        char unique=s[start];
        // after that we store next index in nextunqiqeindex 
        int nextuniqueIndex=start+1;
        //next loop will begin which count the same chracter occurence 
        while(nextuniqueIndex<n && s[nextuniqueIndex]==unique){
            nextuniqueIndex +=1;
        }
        // temp is storing the charcter in a string

            temp+=unique;
            start=nextuniqueIndex;
    }
    cout<<temp;
}
int main()
{
    string s;
    getline(cin,s);
    conse(s);
    return 0;
}