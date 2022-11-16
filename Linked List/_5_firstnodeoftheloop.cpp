// first node of the loop
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
Node* detectcycle(Node* head){
    Node* slow=head,*fast=head;
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)break;
    }
    Node *ptr1 = slow,*ptr2=head;
    while(ptr1 != ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return ptr1;
}
// n = 4
// input = 3 2 0 -1
// pos = 1
// valute at node = 3

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
    
    int pos;
    cin>>pos;
    loopHere(head,tail,pos);
    Node* firstNode = detectcycle(head);
    cout<<firstNode->val<<" ";
    return 0;    
}