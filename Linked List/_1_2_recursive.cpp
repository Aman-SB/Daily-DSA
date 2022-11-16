// reverse the linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insertattail(Node* &tail,int val){
    Node *temp = new Node(val);
    tail->next=temp;
    tail=temp;
}

void display(Node* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* reverse(Node* head){
    if(head->next == NULL)return head;
    Node* reversehead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return reversehead;
}

int main(){
    Node *node1 = new Node(1);
    Node* head=node1;
    Node* tail=head;

    insertattail(tail,2);
    insertattail(tail,3);
    insertattail(tail,4);
    insertattail(tail,5);
    insertattail(tail,6);
    display(head);
    Node* newhead=reverse(head);
    display(newhead);
    return 0;
}
