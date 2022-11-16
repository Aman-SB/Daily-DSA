// intersection of two sorted list
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

Node *findIntersection(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *curr = new Node(-1);
    Node *head;
    head=curr;

    while ((ptr1!=NULL) && (ptr2!=NULL))
    {
        if (ptr1->val == ptr2->val)
        {
            Node *temp = new Node(ptr1->val);
            curr->next = temp;
            curr = curr->next;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else
        {
            if (ptr1->val > ptr2->val)
            {
                ptr2 = ptr2->next;
            }
            else
            {
                ptr1 = ptr1->next;
            }
        }
    }
    return head->next;
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

    int m, num2;
    cin >> m;
    cin >> num2;
    Node *second;
    second = tail = new Node(num2);
    for (int i = 1; i < m; i++)
    {
        cin >> num2;
        tail->next = new Node(num2);
        tail = tail->next;
    }

    Node *newhead = findIntersection(first, second);
    display(newhead);

    return 0;
}
// n = 3
// first - 1 2 2
// m = 4 
// second = 2 2 3 4
// output = 2 2 
