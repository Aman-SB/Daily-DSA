// pop the middle element of stack
#include<bits/stdc++.h>
using namespace std;
void middle(stack<int>&s,int cnt,int n)
{
    if(cnt==n/2)
    {
        s.pop();
        return;
    }

    int val=s.top();
    s.pop();
    middle(s,cnt+1,n);
    s.push(val);
}
int main()
{
    int cnt=0;
    stack<int> s;
    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(5);
    
    int n=s.size();
    middle(s,cnt,n);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
//input- 
// 5 6 7 8 9
// output-
// 5 6 8 9