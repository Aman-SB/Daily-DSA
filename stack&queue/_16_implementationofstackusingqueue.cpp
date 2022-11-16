// implementation of stack in queue
#include<bits/stdc++.h>
using namespace std;
class myStack {
    private:
    queue<int> q;
    public:
    myStack(){

    }
    void push(int x){
        int n = q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        cout<<"Push element "<<x<<endl;
    }
    int pop(){
        int val = q.front();
        q.pop();
        return val;
    }
    int top(){
        return q.front();
    }
    bool empty(){
        return q.empty()?true:false;
    }
    int size(){
        return q.size();
    }
};
int main(){
    myStack st;
    st.push(4);
    st.push(5);
    cout<<"Pop element "<<st.pop()<<endl;
    st.push(6);
    cout<<"Top element "<<st.top()<<endl;
    st.empty()?cout<<"YES queue is empty" : cout<<"NO queue is not empty"<<endl;
    cout<<"Size of queue "<<st.size()<<endl;
}
// Push element 4
// Push element 5
// Pop element 5
// Push element 6
// Top element 6
// NO queue is not empty
// Size of queue 2