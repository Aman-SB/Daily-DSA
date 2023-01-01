// k-Sum path

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

void solve(Node *root, int target, int &count, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }

    path.push_back(root->data);
    solve(root->left, target, count, path);
    solve(root->right, target, count, path);

    int size = path.size();
    int sum = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        sum += path[i];
        if (sum == target)
        {
            count++;
        }
    }
    path.pop_back();
}

int kSumPath(Node *root, int target)
{
    int count = 0;
    vector<int> path;
    solve(root, target, count, path);
    return count;
}

int main()
{
    Node *root;
    cout << "Enter the Data : " << endl;
    root = buildTree(root);
    int target;
    cin >> target;
    cout << kSumPath(root, target);

    return 0;
}

// output -
// Enter the Data :
// 5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 5 -1 -1 1 -1 -1
// Enter the data for the left : 5
// Enter the data for the left : 4
// Enter the data for the left : 11
// Enter the data for the left : 7
// Enter the data for the right : 7
// Enter the data for the right : 11
// Enter the data for the left : 2
// Enter the data for the right : 2
// Enter the data for the right : 4
// Enter the data for the right : 5
// Enter the data for the left : 8
// Enter the data for the left : 13
// Enter the data for the right : 13
// Enter the data for the right : 8
// Enter the data for the left : 4
// Enter the data for the left : 5
// Enter the data for the right : 5
// Enter the data for the right : 4
// Enter the data for the left : 1
// Enter the data for the right : 1
// target - 22
// count - 3
