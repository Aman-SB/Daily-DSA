#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertatatail(Node* &tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    tail = tail->next;
}
void display(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverseList(Node* &head)
{
    Node *prev = NULL, *curr = head, *nexthead = curr->next;
    while (curr != NULL)
    {
        nexthead = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nexthead;
    }
    return prev;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = head;
    insertatatail(tail, 2);
    insertatatail(tail, 3);
    insertatatail(tail, 4);
    insertatatail(tail, 5);
    display(head);
    head = reverseList(head);
    cout<<endl;
    display(head);
    return 0;
}






