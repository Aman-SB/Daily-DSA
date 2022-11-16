
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
};

int intersectPoint(Node* head1, Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}


int main()
{
    int n1,n2,n3;
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    return 0;
}


//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    Node* ptr1=head1;
    Node* ptr2=head2;
    
    while(ptr1 != ptr2){
        if(ptr1->next == NULL)
        ptr1=head2;
        else
        ptr1=ptr1->next;
        
        if(ptr2->next == NULL)
        ptr2=head1;
        else
        ptr2=ptr2->next;
        
    }
    return ptr1->data;
}
// n = 2 
// m = 3
// midnum = 3
// left = 4 1
// right = 5 6 1
// mid = 8 4 5
// center = 8
