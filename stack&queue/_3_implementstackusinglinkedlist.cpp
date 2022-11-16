// implemenataion of stack using linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
};
class Stack
{
    Node *top;

public:
    stack()
    {
        top == NULL;
    }
    // push operation
    void push(int x)
    {
        Node *temp = new Node(x);

        if (!temp)
        {
            cout << "Stack Overflow";
            exit(1);
        }
        // intitalizing the value into temp
        temp->data = x;
        // pointing the temp to the top
        temp->next = top;
        // make temp as top of the stack
        top = temp;
    }

    // pop operation
    void pop()
    {
        if(top==NULL)
        {
            return;
        }
        else
        {
            int val = top->data;
            top = top->next;
        }
    }

    // isempty
    bool empty()
    {
        return top == NULL ? true : false;
    }

    // top
    int peek()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return top->data;
        }
    }
};
int main()
{
    Stack s;
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(9);

    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    s.pop();
    if(s.empty())
    {
        cout<<"Empty Stack";
    }
    else
    {
        cout<<"Stack is not empty";
    }

    // s.empty()?cout<<true:cout<<false;
    return 0;
}
//output- 
// 9
// 4
// 1
// 2
// Stack is not empty
