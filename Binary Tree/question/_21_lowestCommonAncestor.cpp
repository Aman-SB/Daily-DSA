// Lowest COmmon Ancestor

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

Node *lowestCommonAncestor(Node *root, int n1, int n2)
{
    // Base Case
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftAns = lowestCommonAncestor(root->left, n1, n2);
    Node *rightAns = lowestCommonAncestor(root->right, n1, n2);

    if (leftAns != NULL || rightAns != NULL)
        return root;
    else if (leftAns != NULL || rightAns == NULL)
        return leftAns;
    else if (leftAns == NULL || rightAns != NULL)
        return rightAns;
    else
        return NULL;
}

int main()
{
    Node *root;
    cout << "Enter the Data : " << endl;
    root = buildTree(root);
    int n1, n2;
    cin >> n1 >> n2;
    Node *ans = lowestCommonAncestor(root, n1, n2);
    cout << ans->data;

    return 0;
}

// output -
// Enter the Data :
// 1 2 -1 -1 3 -1 -1
// Enter the data for the left : 1
// Enter the data for the left : 2
// Enter the data for the right : 2
// Enter the data for the right : 1
// Enter the data for the left : 3
// Enter the data for the right : 3
// 2
// 3
// 1