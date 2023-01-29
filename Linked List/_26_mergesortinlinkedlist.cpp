#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* findmid(Node* head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
// function for merge 2 linked list
Node* merge2LinkedList(Node* head1,Node* head2)
{
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;

    Node* l1=head1;
    Node* l2=head2;
	Node* dummy=new Node();
    dummy->data=-1;
    Node* tail=dummy;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->data < l2->data)
        {
            tail->next=l1;
            tail=l1;
            l1=l1->next;
        }
        else
        {
            tail->next=l2;
            tail=l2;
            l2=l2->next;
        }
    }
    if(l1!=NULL)
    {
        tail->next=l1;
    }
    if(l2!=NULL)
    {
        tail->next=l2;
    }
    return dummy->next;
}
// function for merge sort
Node* mergeSort(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* mid = findmid(head);

    Node* left=head;
    Node* right=mid->next;
    mid->next=NULL;

    // dorting
    left=mergeSort(left);
    right=mergeSort(right);

    // merge two linked list
    Node* res = merge2LinkedList(left,right);

    return res;
}



//Driver Code
void push(Node** , int);
void printList(Node* );

int main() {
    Node* head=NULL;
    int n; cin>>n;
    for(int i = 0; i<n; i++) {
        int x; cin>>x;
        push(&head, x);
    }

    Node* newHead=mergeSort(head);
    printList(newHead);
}

void push(Node** head_ref,int newdata) {
    Node* newNode=new Node();
    newNode->data=newdata;
    if(*head_ref == NULL)
        *head_ref = newNode;
    else {
        Node* temp = *head_ref;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}