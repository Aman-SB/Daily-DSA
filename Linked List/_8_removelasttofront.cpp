// reverse last to front
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


void display(Node* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

// reverse to front
Node* reversetofront(Node*head){
    Node* temp=head;
    Node *store;
    while(temp->next->next!= NULL){
        temp=temp->next;
        store=temp;
    }
    Node* p=store->next;
    store->next=NULL;
    p->next=head;
    return p;
}
// n = 6
// input = 1 2 3 4 5 6
// output = 6 1 2 3 4 5 

int main(){
    int n,num;
    cin>>n;
    cin>>num;
    Node *head,*tail;
    head = tail =new Node(num);

    for(int i=1;i<n;i++){
        cin>>num;
        tail->next=new Node(num);
        tail=tail->next;
    }
    
    Node *newhead=reversetofront(head);
    display(newhead);
    
    return 0;    
}
