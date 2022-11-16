// implementing queue in an stack
#include<bits/stdc++.h>
using namespace std;
class myQueue {
    private:
    stack<int> input,output;
    public:
    void push(int x){
        input.push(x);
        cout<<"Push element "<<x<<endl;
    }
    int pop(){
        if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        int x=output.top();
        output.pop();
        return x;
    }
    int top(){
        if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    bool empty(){
        if(size() != 0)return false;
        return true;
    }
    int size(){
        int val = input.size()+output.size();
        return val;
    }
};
int main(){
    myQueue q;
    q.push(4);
    q.push(5);
    cout<<"Pop element "<<q.pop()<<endl;
    q.push(6);
    cout<<"Top element "<<q.top()<<endl;
    q.empty()?cout<<"YES queue is empty" : cout<<"NO queue is not empty"<<endl;
    cout<<"Size of queue "<<q.size()<<endl;
return 0;
}
// Push element 4
// Push element 5
// Pop element 4
// Push element 6
// Top element 5
// NO queue is not empty
// Size of queue 2