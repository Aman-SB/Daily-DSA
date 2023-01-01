// Bottom View

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

vector<int> bottomView(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }

    map<int, int> topMap;
    queue<pair<Node *, int>> qe;
    qe.push({root, 0});

    while (!qe.empty())
    {
        auto topFront = qe.front();
        qe.pop();

        Node *topNode = topFront.first;
        int hd = topFront.second;

        topMap[hd] = topNode->data;

        if (topNode->left)
        {
            qe.push({topNode->left, hd - 1});
        }

        if (topNode->right)
        {
            qe.push({topNode->right, hd + 1});
        }
    }

    for (auto i : topMap)
    {
        result.push_back(i.second);
    }
    return result;
}

int main()
{
    cout << "Enter the data : " << endl;
    Node *root;
    root = buildTree(root);

    vector<int> result;

    result = bottomView(root);

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
// 4 2 6 3 7