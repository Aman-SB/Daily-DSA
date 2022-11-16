// implementation of two stack in an array
#include<bits/stdc++.h>
using namespace std;
class TwoStack {
public:
    int *arr;
    int top1;
    int top2;
    int size;
  
    // Initialize TwoStack.
    TwoStack(int s) {
        this->size=s;
        top1=-1;
        top2=size;
        arr=new int[size];
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2-top1>1)
        {
            arr[++top1]=num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2-top1>1)
        {
            arr[--top2]=num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0)
        {
          return arr[top1--];
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size)
        {
            return arr[top2++];
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    TwoStack st(5);
    st.push1(2);
    st.push1(9);
    st.push2(6);
    st.push2(1);

    cout<<st.pop2()<<" ";
    cout<<st.pop1()<<" ";
    cout<<st.pop2()<<" ";

    return 0;
}

// pop-
// 3 9 1 