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

void reverse(Node* s, Node* e){
    Node *p=NULL,*c=s,*n=c->next;
    while(p!=e){
        c->next=p;
        p=c;
        c=n;
        if(n != NULL)n=n->next;
    }
}

Node* reversekgroup(Node* head,int k){
    if(head == NULL || head->next == NULL || k==1)return head;
    Node* dummy = new Node(-1);
    dummy->next=head;
    Node* beforestart = dummy;
    Node* e = head;
    int i=0;
    while( e != NULL){
        i++;
        if(i%k == 0){
            Node* s=beforestart->next;
            Node* n=e->next;
            reverse(s,e);
            beforestart->next=e;
            s->next=n;
            beforestart = s;
            e = n;
        }
        else{
            e=e->next;
        }
    } 
    return dummy->next;
}
// k = 3
// input = 1 2 3 4 5 6 
// output = 3 2 1 6 5 4

int main(){
    Node *node1 = new Node(1);
    Node* head=node1;
    Node* tail=head;
    int k=3;
    insertattail(tail,2);
    insertattail(tail,3);
    insertattail(tail,4);
    insertattail(tail,5);
    insertattail(tail,6);
    display(head);
    Node* newhead=reversekgroup(head,k);
    display(newhead);
    return 0;
}
