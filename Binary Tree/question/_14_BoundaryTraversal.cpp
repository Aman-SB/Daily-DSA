// Boundary traversal

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

    cout << "Enter the data in the left : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data in the right : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void leftTraversal(Node *root, vector<int> &ans)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    ans.push_back(root->data);

    if (root->left)
        leftTraversal(root->left, ans);
    else
        leftTraversal(root->right, ans);
}

void rightTraversal(Node *root, vector<int> &ans)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    if (root->right)
        rightTraversal(root->right, ans);
    else
        rightTraversal(root->left, ans);

    ans.push_back(root->data);
}

void leafNode(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }

    leafNode(root->left, ans);
    leafNode(root->right, ans);
}

vector<int> boundaryTraversal(Node *root)
{
    vector<int> result;
    result.push_back(root->data);

    // left part

    leftTraversal(root->left, result);

    // leaf part
    leafNode(root->left, result);
    leafNode(root->right, result);

    // right part
    rightTraversal(root->right, result);

    return result;
}
int main()
{
    cout << "Enter the data : ";
    Node *root;
    root = buildTree(root);
    cout << endl;

    vector<int> res;
    res = boundaryTraversal(root);

    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}

// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 2 12 -1 -1 13 -1 -1
// Enter the data : 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 2 12 -1 -1 13 -1 -1
// Enter the data in the left : 1
// Enter the data in the left : 2
// Enter the data in the left : 4
// Enter the data in the left : 8
// Enter the data in the right : 8
// Enter the data in the right : 4
// Enter the data in the left : 9
// Enter the data in the right : 9
// Enter the data in the right : 2
// Enter the data in the left : 5
// Enter the data in the left : 10
// Enter the data in the right : 10
// Enter the data in the right : 5
// Enter the data in the left : 11
// Enter the data in the right : 11
// Enter the data in the right : 1
// Enter the data in the left : 3
// Enter the data in the left : 6
// Enter the data in the right : 6
// Enter the data in the right : 3
// Enter the data in the left : 2
// Enter the data in the left : 12
// Enter the data in the right : 12
// Enter the data in the right : 2
// Enter the data in the left : 13
// Enter the data in the right : 13

// 1 2 4 8 9 10 11 6 12 13 2 3