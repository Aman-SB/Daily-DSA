
#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
} Node;


class Solution {
public:
    Node *rotateDLL(Node *start,int p)
    {
        if(start == NULL)return 0;
        Node* temp=start;
        Node *head1,*head2;
        head1=temp;
        // take the node from where to start rotate
        while(p-1>0)
        {
            temp=temp->next;
            --p;
        }
        // store the head of the rotated list
        head2=temp->next;
        temp->next=NULL;
        head2->prev=NULL;
        temp=head2;
        // reached at last to connect the node
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        // connecting the node
        temp->next=head1;
        head1->prev=temp;
        return head2;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        struct node*start = NULL;
        struct node* cur = NULL;
        struct node* ptr = NULL;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ptr=new node(a);
            ptr->data=a;
            ptr->next=NULL;
            ptr->prev=NULL;
            if(start==NULL)
            {
                start=ptr;
                cur=ptr;
            }
            else
            {
                cur->next=ptr;
                ptr->prev=cur;
                cur=ptr;
            }
        }
        Solution obj;
        struct node*str=obj.rotateDLL(start,p);
        while(1)
        {
            cout<<str->data<<" ";
            if(str->next==NULL)break;
            str=str->next;
        }
        while(str!=NULL)
        {
            cout<<str->data<<" ";
            str=str->prev;
        }
        cout<< "\n";   
    }
}
// tc = 1
// n = 6         
// p = 2
// input = 1 2 3 4 5 6
// output = 3 4 5 6 1 2 2 1 6 5 4 3