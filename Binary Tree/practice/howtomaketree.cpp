// how to make tree

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
Node *buildTree(Node *root)
{
    cout << "Enter the data : ";
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data in the left : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data in the right : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

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
    // creating a tree
    root = buildTree(root);
    cout << endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // printing the data
    levelOrderTraversal(root);
    return 0;
}
//  output -
// 1
// 3 5
// 7 11 17