// reverse element from unsorted list
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

Node *addOneUntil(Node *head)
{
    Node *temp;
    Node *res = head;
    int carry = 1, sum;
    while (head != NULL)
    {
        sum = carry + head->val;
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        head->val = sum;
        temp = head;
        head = head->next;
    }
    if (carry > 0)
    {
        temp->next = new Node(1);
    }
    return res;
}
Node *addOne(Node *head)
{
    Node *newHead = reverse(head);
    newHead = addOneUntil(newHead);

    return reverse(newHead);
}

int main()
{
    int n, num;
    cin >> n;
    cin >> num;
    Node *head, *tail;
    head = tail = new Node(num);

    for (int i = 1; i < n; i++)
    {
        cin >> num;
        tail->next = new Node(num);
        tail = tail->next;
    }

    Node *newhead = addOne(head);
    display(newhead);

    return 0;
}
// n = 4
// input = 1 9 9 9
// output = 2 0 0 0