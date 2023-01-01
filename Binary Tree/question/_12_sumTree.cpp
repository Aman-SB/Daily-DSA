// Sum tree

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
    cout << "Enter the data in the left" << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data in the right" << data << endl;
    root->right = buildTree(root->right);
    return root;
}

pair<bool, int> isSumTreeFast(Node *root)
{
    if (root == NULL)
    {
        return {true, 0};
    }

    if ((root->left == NULL) && (root->right == NULL))
    {
        return {true, root->data};
    }

    pair<bool, int> left = isSumTreeFast(root->left);
    pair<bool, int> right = isSumTreeFast(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool condn = root->data == left.second + right.second;

    pair<bool, int> ans;
    if (leftAns && rightAns && condn)
    {
        ans.first = true;
        ans.second = 2 * root->data;
    }
    else
    {
        ans.second = false;
    }
    return ans;
}

bool isSumTree(Node *root)
{
    return isSumTreeFast(root).first;
}
int main()
{
    Node *root;
    cout << "Enter the data for the tree : ";
    root = buildTree(root);
    cout << endl;
    if (isSumTree(root))
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FAlSE";
    }
    return 0;
}
// output -
// Enter the data for the tree : 3
// Enter the data in the left3
// 1
// Enter the data in the left1
// -1
// Enter the data in the right1
// -1
// Enter the data in the right3
// 2
// Enter the data in the left2
// -1
// Enter the data in the right2
// -1

// TRUE