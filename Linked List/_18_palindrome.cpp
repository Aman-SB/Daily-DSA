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

// reverse a linked list
Node *reverse(Node *head)
{
    Node *p = NULL, *c = head, *n = head->next;
    while (c != NULL)
    {
        c->next = p;
        p = c;
        c = n;
        if (n != NULL)
            n = n->next;
    }
    return p;
}
// Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
    if (head->next == NULL)
        return true;
    Node *slow = head, *fast = head;
    // first we find the previous to the middle pointer
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // after that we reverse the list
    slow->next = reverse(slow->next);
    Node *start = head;
    Node *mid = slow->next;
    // then we check one by one first element and first element after
    // the mid is equal or not
    while (mid != NULL)
    {
        if (start->val != mid->val)
        {
            return false;
        }
        start = start->next;
        mid = mid->next;
    }
    // then we correct the list
    slow->next = reverse(slow->next);
    return true;
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

     if(isPalindrome(first))
     {
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }
    return 0;
}
// n = 9
// input = 1 3 5 7 9 7 5 3 1
// output - YES