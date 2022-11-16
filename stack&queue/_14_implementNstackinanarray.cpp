// implement N stack in an array
#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
class NStack
{
private:
    int *arr;
    int *top;
    int *next;
    int n,s,freeSpot;
public:    
    NStack(int N, int S)
    {
       n=N;
        s=S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        
        //next initialise
        for(int i=0;i<s;i++){
            next[i]=i+1;
        }
        //update last
        next[s-1]=-1;
        
        //initialise freespot
        freeSpot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(freeSpot == -1)return false;
        //find index
        int index=freeSpot;
        //update freespot
        freeSpot=next[index];
        //insert the element
        arr[index]=x;
        //update next
        next[index]=top[m-1];
        //update top
        top[m-1]=index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //overflow condition
        if(top[m-1]==-1)return -1;
        
        int index = top[m-1];
        top[m-1]=next[index];
        next[index]=freeSpot;
        freeSpot=index;
        return arr[index];
    }
};
int main(){
    int n=3;
    int s=6;
    NStack ns(n,s);
    ns.push(10,1);
    ns.push(20,1);
    ns.push(30,2);
    cout<<"pop element in 1 stack : "<<ns.pop(1)<<"\n";
    cout<<"pop element in 2 stack : "<<ns.pop(2);

    return 0;
}
// output-
// pop element in 1 stack : 20
// pop element in 2 stack : 30