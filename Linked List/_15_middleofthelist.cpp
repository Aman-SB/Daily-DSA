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

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node* middle(Node* head)
{
    Node *slow=head,*fast=head;
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main()
{
    int n, num1;
    cin >> n;
    cin >> num1;
    Node *first, *tail;
    first = tail = new Node(num1);

    for (int i = 1; i < n; i++)
    {
        cin >> num1;
        tail->next = new Node(num1);
        tail = tail->next;
    }

    Node *newhead = middle(first);
    display(newhead);

    return 0;
}
//n =  5
// input = 1 2 3 4 5
// output = 3 4 5 