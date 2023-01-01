// Symetric Tree
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
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for the left : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for the right : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

bool solve(Node *left, Node *right)
{
    if (left == NULL && right == NULL)
    {
        return left == right;
    }
    if (left->data != right->data)
    {
        return false;
    }
    return solve(left->left, right->right) && solve(left->right, right->left);
}

bool symetricTree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    return solve(root->left, root->right);
}

int main()
{
    Node *root;
    cout << "Enter the Data : " << endl;
    root = buildTree(root);
    if (symetricTree(root))
    {
        cout << "true";
    }
    else
        cout << "false";

    return 0;
}
// Enter the Data : 
// 1 2 3 -1 -1 4 -1 -1 2 4 -1 -1 3 -1 -1
// Enter the data for the left : 1
// Enter the data for the left : 2
// Enter the data for the left : 3
// Enter the data for the right : 3
// Enter the data for the right : 2
// Enter the data for the left : 4
// Enter the data for the right : 4
// Enter the data for the right : 1
// Enter the data for the left : 2
// Enter the data for the left : 4
// Enter the data for the right : 4
// Enter the data for the right : 2
// Enter the data for the left : 3
// Enter the data for the right : 3
// output-
// true