// Longest Blood Line Node

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

void solve(Node *root, int len, int &maxLen, int sum, int &maxSum)
{
    if (root == NULL)
    {
        if (len > maxLen)
        {
            maxLen = len;
            maxSum = sum;
        }
        else if (len == maxLen)
        {
            maxSum = max(sum, maxSum);
        }
        return;
    }

    sum = sum + root->data;

    solve(root->left, len + 1, maxLen, sum, maxSum);
    solve(root->right, len + 1, maxLen, sum, maxSum);
}

int bloodLine(Node *root)
{
    int len = 0;
    int maxLen = 0;

    int sum = 0;
    int maxSum = INT_MAX;

    solve(root, len, maxLen, sum, maxSum);
    return maxSum;
}

int main()
{
    Node *root;
    cout << "Enter the Data : " << endl;
    root = buildTree(root);

    cout << bloodLine(root);

    return 0;
}

// output -
// Enter the Data :
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// Enter the data for the left : 1
// Enter the data for the left : 2
// Enter the data for the left : 4
// Enter the data for the right : 4
// Enter the data for the right : 2
// Enter the data for the left : 5
// Enter the data for the right : 5
// Enter the data for the right : 1
// Enter the data for the left : 3
// Enter the data for the left : 6
// Enter the data for the right : 6
// Enter the data for the right : 3
// Enter the data for the left : 7
// Enter the data for the right : 7
// 11