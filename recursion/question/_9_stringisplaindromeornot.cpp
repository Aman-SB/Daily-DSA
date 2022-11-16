// string is palidrome or not
#include <bits/stdc++.h>
using namespace std;
bool solve(string&s,int i,int n)
{
    // base condtion
    //if it reaches at the end 
    if(i >= n/2){
        return true;
    }
    // if the condition fail beteween
    if (s[i] != s[n-i-1])
    {
        return false;
    }

    //recursive call
    solve(s,i+1,n);
}
int main()
{
    string s;
    cin >> s;
    int i = 0;
    int n = s.length() ;
    if (solve(s, i, n))
    {
        cout << "TRUE";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
// input - aman
// output - False