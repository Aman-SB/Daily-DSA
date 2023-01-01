// Binary Tree Level Order Traversal

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};

vector<vector<int>> levelOrder(Node *&root)
{
    vector<vector<int>> ans;
    queue<Node *> qe;
    if (root == NULL)
        return ans;
    qe.push(root);
    while (!qe.empty())
    {
        vector<int> level;
        int size = qe.size();
        for (int i = 0; i < size; i++)
        {
            Node *head = qe.front();
            qe.pop();
            if (head->left != NULL)
                qe.push(head->left);
            if (head->right != NULL)
                qe.push(head->right);
            level.push_back(head->data);
        }
        ans.push_back(level);
    }
    return ans;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<vector<int>> ans;
    ans = levelOrder(root);
    for (auto val : ans)
    {
        for (auto res : val)
        {
            cout << res << " ";
        }
        cout << endl;
    }
    return 0;
}
// output-
// 1
// 2 3
// 4 5 6 7