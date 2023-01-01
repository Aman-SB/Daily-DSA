// binary search tree
#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// to make binary tree
Node *insertNode(Node *&root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertNode(root->right, d);
    }
    else
    {
        root->left = insertNode(root->left, d);
    }
    return root;
}
// to insert data
void takeInput(Node *root)
{
    int d;
    cin >> d;
    while (d != -1)
    {
        root = insertNode(root, d);
        cin >> d;
    }
}
// to print the data
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter the stream of data :" << endl;
    takeInput(root);
    cout << "Printing the BST:" << endl;
    levelOrderTraversal(root);
    return 0;
}