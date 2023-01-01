// Moris Traversal

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
Node *buildingTree(Node *root)
{
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the left data : " << data << endl;
    root->left = buildingTree(root->left);

    cout << "Enter the right data : " << data << endl;
    root->right = buildingTree(root->right);

    return root;
}

void solve(Node *root, Node *&prev)
{
    if (root == NULL)
    {
        return;
    }

    solve(root->right, prev);
    solve(root->left, prev);
    root->right = prev;
    root->left = NULL;
    prev = root;
}

void flatten(Node *root)
{
    Node *prev = NULL;
    solve(root, prev);
}

void print(Node *root)
{
    if (root == NULL)
    {
        cout << "NULL"
             << " ";
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}

int main()
{
    Node *root;
    cout << "Enter the Data : " << endl;
    root = buildingTree(root);

    flatten(root);

    print(root);
    return 0;
}
// Enter the Data :
// 1 2 3 -1 -1 4 -1 -1 5 -1 6 -1 -1
// Enter the left data : 1
// Enter the left data : 2
// Enter the left data : 3
// Enter the right data : 3
// Enter the right data : 2
// Enter the left data : 4
// Enter the right data : 4
// Enter the right data : 1
// Enter the left data : 5
// Enter the right data : 5
// Enter the left data : 6
// Enter the right data : 6
// 1 NULL 2 NULL 3 NULL 4 NULL 5 NULL 6 NULL NULL