// implement the queue using array
#include<bits/stdc++.h>
using namespace std;
class myQueue{
    private:
    int front,rear,cap,cnt;
    int *arr;
    public:
    myQueue(int cap){
        front =  0;
        rear = 0; 
        cnt=0;
        this->cap=cap;
        arr = new int[cap];
    }
    //push operation
    void push(int x){
        if(cnt == cap){
            cout<<"QUEUE overflow"<<endl;
        }
        arr[rear]=x;
        rear++;
        ++cnt;
    }
    //pop operation
    int pop(){
        if(cnt == 0){
            return -1;
        }
        int val = arr[front];
        front++;
        --cnt;
        return val;
    }
    //front operation
    int peek(){
        return arr[front];
    }
    //size operation
    int size(){
        return rear-front+1;
    }
    //empty operation
    bool empty(){
        if(size() != 0)return false;
        return true;
    }

};
int main(){
    myQueue q(5);
    q.push(4);
    q.push(5);
    cout<<"Pop element "<<q.pop()<<endl;
    q.push(6);
    cout<<"Top element "<<q.peek()<<endl;
    q.empty()?cout<<"YES queue is empty" : cout<<"NO queue is not empty"<<endl;
    cout<<"Size of queue "<<q.size()<<endl;
}
// Pop element 4
// Top element 5
// NO queue is not empty
// Size of queue 3