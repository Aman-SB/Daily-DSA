// Balanced Tree

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

    cout << "Enter the Data in the left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the Data in the right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

pair<bool, int> isBalanced(Node *root)
{
    // base Case
    if (root == NULL)
    {
        return {true, 0};
    }
    // Main Logic

    pair<bool, int> left = isBalanced(root->left);
    pair<bool, int> right = isBalanced(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;

    if (leftAns && rightAns && diff)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}
int main()
{
    Node *root = NULL;
    cout << "Enter the Data:";
    root = buildTree(root);
    cout << endl;

    if (isBalanced(root).first)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
    return 0;
}
// output-
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// TRUE