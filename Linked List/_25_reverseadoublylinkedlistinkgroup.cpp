
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
    Node *revlistingroupsize(Node *start,int k)
    {
        
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
        struct node*str=obj.revlistingroupsize(start,p);
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
