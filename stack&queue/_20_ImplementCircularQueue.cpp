// Implement Circular Queue
#include<bits/stdc++.h>
using namespace std;
class myQueue {
    private:
    int *arr;
    int front,rear,siz;
    public:
    // constructor
    myQueue(int size){
        this->siz=size;
        arr = new int[siz];
        front = -1;
        rear = -1;
    }   
    //
    bool enQueue(int value){
        if(isFull()){
            return false;
        }
        if(front == -1){
            front = rear = 0;
        }
        else if(rear == siz-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear]=value;
        return true;
    }

    int dequeue(){
        if(front == -1){
            return false;
        }
        int value = arr[front];
        arr[front]=-1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == siz-1){
            front = 0;
        }
        else{
            front++;
        }
        return value;
    }

    //check the front element
    int peek(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    // queue is empty or not
    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }
    // to check circular queue is full
    bool isFull(){
        if((front == 0 && rear == siz-1) || (rear == (front-1)%(siz-1))){
            return true;
        }
        return false;
    }
};
int main(){
    myQueue q(3);
    q.enQueue(1)? cout<<"operation done" : cout<<"Not done";
    cout<<endl;
    q.enQueue(2)? cout<<"operation done" : cout<<"Not done";
    cout<<endl;
    q.enQueue(3)? cout<<"operation done" : cout<<"Not done";
    cout<<endl;
    q.enQueue(4)? cout<<"operation done" : cout<<"Not done";
    cout<<endl;
    cout<<q.peek()<<" ";
    cout<<endl;
    q.isFull() ? cout<<"IS FULL" : cout<<"IS NOT FULLL";
    cout<<endl;
    cout<<q.dequeue()<<" ";
    cout<<endl;
    q.enQueue(4)? cout<<"operation done" : cout<<"Not done";
    cout<<endl;
    cout<<q.dequeue()<<" ";
    cout<<endl;
    
    return 0;
}
// operation done
// operation done
// operation done
// Not done
// 3
// IS FULL