// Right View

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
    cout << "Enter the data for tree left : " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for tree right : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

vector<int> leftView(Node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }

    map<int, int> leftMap;
    queue<pair<Node *, int>> qe;
    qe.push({root, 0});
    while (!qe.empty())
    {
        pair<Node *, int> front = qe.front();
        qe.pop();

        Node *frontNode = front.first;
        int lvl = front.second;

        leftMap[lvl] = frontNode->data;

        if (frontNode->left)
        {
            qe.push({frontNode->left, lvl + 1});
        }

        if (frontNode->right)
        {
            qe.push({frontNode->right, lvl + 1});
        }
    }
    for (auto i : leftMap)
    {
        ans.push_back(i.second);
    }
}

int main()
{
    cout << "Enter the data : " << endl;
    Node *root;
    root = buildTree(root);

    vector<int> result;

    result = leftView(root);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}

// output -
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// Enter the data :
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// Enter the data for tree left : 1
// Enter the data for tree left : 2
// Enter the data for tree left : 4
// Enter the data for tree right : 4
// Enter the data for tree right : 2
// Enter the data for tree left : 5
// Enter the data for tree right : 5
// Enter the data for tree right : 1
// Enter the data for tree left : 3
// Enter the data for tree left : 6
// Enter the data for tree right : 6
// Enter the data for tree right : 3
// Enter the data for tree left : 7
// Enter the data for tree right : 7
// 1 3 7