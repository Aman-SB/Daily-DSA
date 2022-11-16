// stack implementation using array

#include<bits/stdc++.h>
using namespace std;
// stack class
class Stack{
    //making
    int siz;
    int *arr;
    int top;

    public:
    // constructor
    Stack(int size)
    {
        this->siz=size;
        arr = new int[siz];
        top=-1;
    }

    // push operation
    void push(int x)
    {
        if(siz-top>1)
        {
            arr[++top]=x;
        }
        else
        {
            cout<<"Stack Overflow";
        }
    }
    // pop operation
    void pop()
    {
        if(top >= 0)
        {
            --top;
        }
        else
        {
            cout<<"Stack Underflow";
        }
    }
    // top operation
    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is empty";
            return -1;
        }
    }
    // empty operation
    bool isempty()
    {
        return top==-1;
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(9);
    st.push(2);
    st.push(3);
    st.push(7);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.isempty() ? cout<<"True" : cout<<"false";
    return 0;
}
// 7
// 3
// 2
// 9
// 1
// True