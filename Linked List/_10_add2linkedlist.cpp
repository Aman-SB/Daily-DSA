// add  1 in a represented linked list
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

Node *reverse(Node *head)
{
    Node *p = NULL, *c = head, *n = c->next;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}

Node *addTwoLists(Node *first, Node *second)
{
    Node *l1 = reverse(first);
    Node *l2 = reverse(second);
    Node *dummy;
    Node *head;
    head = dummy = new Node(-1);
    if (!l1)
        return l2;
    if (!l2)
        return l1;
    int carry = 0;
    while (l1 || l2)
    {
        int fVal = l1 ? l1->val : 0;
        int sVal = l2 ? l2->val : 0;

        int sum = fVal + sVal + carry;
        carry = sum / 10;
        sum = sum % 10;

        Node *newNode = new Node(sum);
        dummy->next = newNode;

        dummy = dummy->next;

        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    if (carry)
    {
        dummy->next = new Node(1);
    }
    return reverse(head->next);
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

    Node *newhead = addTwoLists(first, second);
    display(newhead);

    return 0;
}
// n = 2
// first = 4 5
// m = 3
// second = 3 4 5
// output = 3 9 0