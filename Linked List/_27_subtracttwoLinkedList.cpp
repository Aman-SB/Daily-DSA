#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
struct Node* createList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}
void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

/* A utility function to get length of linked list */

int getLength(Node *Node)

{

    int size = 0;

    while (Node != NULL)

    {

        Node = Node->next;

        size++;

    }

    return size;

}

 

/* A Utility that padds zeros in front of the

   Node, with the given diff */

Node* paddZeros(Node* sNode, int diff)

{

    if (sNode == NULL)

        return NULL;

 

    Node* zHead = new Node(0);

    diff--;

    Node* temp = zHead;

    while (diff--)

    {

        temp->next = new Node(0);

        temp = temp->next;

    }

    temp->next = sNode;

    return zHead;

}

 

/* Subtract LinkedList Helper is a recursive function,

   move till the last Node,  and subtract the digits and

   create the Node and return the Node. If d1 < d2, we

   borrow the number from previous digit. */

Node* subtractLinkedListHelper(Node* l1, Node* l2, bool& borrow)

{

    if (l1 == NULL && l2 == NULL && borrow == 0)

        return NULL;

 

    Node* previous = subtractLinkedListHelper(l1 ? l1->next : NULL,

                                    l2 ? l2->next : NULL, borrow);

 

    int d1 = l1->data;

    int d2 = l2->data;

    int sub = 0;

 

    /* if you have given the value value to next digit then

       reduce the d1 by 1 */

    if (borrow)

    {

        d1--;

        borrow = false;

    }

 

    /* If d1 < d2 , then borrow the number from previous digit.

       Add 10 to d1 and set borrow = true; */

    if (d1 < d2)

    {

        borrow = true;

        d1 = d1 + 10;

    }

 

    /* subtract the digits */

    sub = d1 - d2;

 

    /* Create a Node with sub value */

    Node* current = new Node(sub);

 

    /* Set the Next pointer as Previous */

    current->next = previous;

 

    return current;
	

}

 

/* This API subtracts two linked lists and returns the

   linked list which shall  have the subtracted result. */

Node* subtract(Node* l1, Node* l2)

{

    // Base Case.

    if (l1 == NULL &&  l2 == NULL)

        return NULL;

	 // checling equal condition
	Node *check1=l1,*check2=l2;
	bool flag=true;
	while(check1 && check2)
		{
			if(check1->data != check2->data)
			{
				flag=false;
			}
			check1=check1->next;
			check2=check2->next;
		}
	if(flag)return new Node(0);

    // In either of the case, get the lengths of both

    // Linked list.

    int len1 = getLength(l1);

    int len2 = getLength(l2);

 

    Node *lNode = NULL, *sNode = NULL;

 

    Node* temp1 = l1;

    Node* temp2 = l2;

 

    // If lengths differ, calculate the smaller Node

    // and padd zeros for smaller Node and ensure both

    // larger Node and smaller Node has equal length.

    if (len1 != len2)

    {

        lNode = len1 > len2 ? l1 : l2;

        sNode = len1 > len2 ? l2 : l1;

        sNode = paddZeros(sNode, abs(len1 - len2));

    }

 

    else

    {

        // If both list lengths are equal, then calculate

        // the larger and smaller list. If 5-6-7 & 5-6-8

        // are linked list, then walk through linked list

        // at last Node as 7 < 8, larger Node is 5-6-8

        // and smaller Node is 5-6-7.

        while (l1 && l2)

        {

            if (l1->data != l2->data)

            {

                lNode = l1->data > l2->data ? temp1 : temp2;

                sNode = l1->data > l2->data ? temp2 : temp1;

            }
			else

            l1 = l1->next;

            l2 = l2->next;

        }

    }

 

    // After calculating larger and smaller Node, call

    // subtractLinkedListHelper which returns the subtracted

    // linked list.

    bool borrow = false;

    Node* head = subtractLinkedListHelper(lNode, sNode, borrow);
		while(head->data==0)head=head->next;
	return head;

}

int main()
{
    int n, m;
    cin>>n;
    Node* first = createList(n);
    cin>>m;
    Node* second = createList(m);
    Node* ans = subtract(first,second);
    printList(ans);
    return 0;
}

