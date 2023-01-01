// top View

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

vector<int> topView(Node *root)
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

        if (topMap.find(hd) == topMap.end())
        {
            topMap[hd] = topNode->data;
        }

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

    result = topView(root);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}
// output -
// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 2 12 -1 -1 13 -1 -1
// Enter the data for tree left : 1
// Enter the data for tree left : 2
// Enter the data for tree left : 4
// Enter the data for tree left : 8
// Enter the data for tree right : 8
// Enter the data for tree right : 4
// Enter the data for tree left : 9
// Enter the data for tree right : 9
// Enter the data for tree right : 2
// Enter the data for tree left : 5
// Enter the data for tree left : 10
// Enter the data for tree right : 10
// Enter the data for tree right : 5
// Enter the data for tree left : 11
// Enter the data for tree right : 11
// Enter the data for tree right : 1
// Enter the data for tree left : 3
// Enter the data for tree left : 6
// Enter the data for tree right : 6
// Enter the data for tree right : 3
// Enter the data for tree left : 2
// Enter the data for tree left : 12
// Enter the data for tree right : 12
// Enter the data for tree right : 2
// Enter the data for tree left : 13
// Enter the data for tree right : 13
// 8 4 2 1 3 2 13