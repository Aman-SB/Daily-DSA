// reverse element from unsorted list
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

Node* duplics(Node* head){
    unordered_set<int> seen;
    Node* curr=head;
    Node* prev=NULL;
    while(curr){
        if(seen.find(curr->val) != seen.end()){
            prev->next=curr->next;
            delete curr;
        }
        else{
            prev=curr;
            seen.insert(curr->val);
        }
        curr=prev->next;
    }
    return head;
}

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
    
    Node *newhead=duplics(head);
    display(newhead);
    
    return 0;    
}
// n = 6
// input = 1 2 3 4 4 4
// output = 1 2 3 4 
