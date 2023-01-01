// Count LEaf Node

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
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data in the left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data in the right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void inorder(Node *root, int &count)
{
    if (root == NULL)
        return;

    inorder(root->left, count);

    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }

    inorder(root->right, count);
}

int countLeafNode(Node *root)
{
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << endl;

    cout << countLeafNode(root);
    return 0;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// output -
// 3