// ZigZag Traversal

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

vector<vector<int>> zigzagTraversal(Node *root)
{
    vector<vector<int>> result;
    if (root == NULL)
        return result;

    queue<Node *> qe;
    bool leftToright = true;

    qe.push(root);
    while (!qe.empty())
    {
        int size = qe.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            Node *front = qe.front();
            qe.pop();

            int index = leftToright ? i : size - i - 1;
            ans[index] = front->data;

            if (front->left)
                qe.push(front->left);

            if (front->right)
                qe.push(front->right);
        }
        // direction change
        leftToright = !leftToright;

        result.push_back(ans);
    }
    return result;
}
int main()
{
    cout << "Enter the data : ";
    Node *root;
    root = buildTree(root);
    cout << endl;

    vector<vector<int>> res;
    res = zigzagTraversal(root);

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
// 3 9 -1 -1 20 15 17 -1 -1 -1 -1
//  output-
//  Enter the data : 3 9 -1 -1 20 15 17 -1 -1 -1 -1
//  Enter the data in the left : 3
//  Enter the data in the left : 9
//  Enter the data in the right : 9
//  Enter the data in the right : 3
//  Enter the data in the left : 20
//  Enter the data in the left : 15
//  Enter the data in the left : 17
//  Enter the data in the right : 17
//  Enter the data in the right : 15
//  Enter the data in the right : 20

// 3
// 20 9
// 15
// 17