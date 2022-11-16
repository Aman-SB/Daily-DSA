#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
    walk = walk->next;
    tail->next = walk;
}

// fast and slow pointer
bool checkloop(Node* head){
    Node *slow=head,*fast=head;
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)return true;
    }
    return false;
}
// n = 6
// input = 1 2 3 4 5 6
// pos = 2
// TRUE
int main(){
    int n,num;
    cin>>n;
    cin>>num;
    Node *head,*tail;
    head = tail =new Node(num);

    for(int i=0;i<n;i++){
        cin>>num;
        tail->next=new Node(num);
        tail=tail->next;
    }
    
    // display(head);
    int pos;
    cin>>pos;
    loopHere(head,tail,pos);

    if(checkloop(head)){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }

    return 0;    
}