#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev=NULL;
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
int main()
{
    int n, num1;
    cin >> n;
    cin >> num1;
    Node *head, *tail;
    head = tail = new Node(num1);

    for (int i = 1; i < n; i++)
    {
        cin >> num1;
        Node* temp = new Node(num1);
        tail->next = temp;
        temp->prev=tail;
        tail = temp ;
    }

    return 0;
}