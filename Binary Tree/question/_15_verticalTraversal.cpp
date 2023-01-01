// Vertical traversal

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

vector<vector<int>> vectricalTraversal(Node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
    {
        return ans;
    }

    map<int, map<int, multiset<int>>> nodes;
    queue<pair<Node *, pair<int, int>>> qe;

    qe.push(make_pair(root, make_pair(0, 0)));
    while (!qe.empty())
    {
        pair<Node *, pair<int, int>> temp = qe.front();
        qe.pop();

        Node *frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].insert(frontNode->data);

        if (frontNode->left)
            qe.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));

        if (frontNode->right)
            qe.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
    }

    for (auto i : nodes)
    {
        vector<int> col;
        for (auto j : i.second)
        {
            col.insert(col.end(), j.second.begin(), j.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}

int main()
{
    cout << "Enter the data : ";
    Node *root;
    root = buildTree(root);
    cout << endl;

    vector<vector<int>> res;
    res = vectricalTraversal(root);

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
    }
    return 0;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1
// output-
// Enter the data : 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1
// Enter the data in the left : 1
// Enter the data in the left : 2
// Enter the data in the left : 4
// Enter the data in the right : 4
// Enter the data in the right : 2
// Enter the data in the left : 5
// Enter the data in the right : 5
// Enter the data in the right : 1
// Enter the data in the left : 3
// Enter the data in the left : 6
// Enter the data in the right : 6
// Enter the data in the left : 8
// Enter the data in the right : 8
// Enter the data in the right : 3
// Enter the data in the left : 7
// Enter the data in the right : 7
// Enter the data in the left : 9
// Enter the data in the right : 9

// 4 2 1 5 6 3 8 7 9
