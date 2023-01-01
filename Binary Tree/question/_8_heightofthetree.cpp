// height of the tree

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

int heightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << endl;

    cout << heightOfTree(root);
    return 0;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// output -
// 3