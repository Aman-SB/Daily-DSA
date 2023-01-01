// Tree Node to targeted leaf Node
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

    cout << "Left Node : " << data << endl;
    root->left = buildingTree(root->left);
    cout << "right Node : " << data << endl;
    root->right = buildingTree(root->right);

    return root;
}

bool solve(Node *root, int target, vector<int> &ans)
{
    if (root == NULL)
    {
        return false;
    }
    ans.push_back(root->data);

    if (root->data == target)
    {
        return true;
    }

    if (solve(root->left, target, ans) || solve(root->right, target, ans))
    {
        return true;
    }

    ans.pop_back();
    return false;
}

// function to find the path form node to the leaf node
vector<int> findPath(Node *root, int target)
{
    vector<int> ans;
    if (!root)
    {
        return ans;
    }

    solve(root, target, ans);
    return ans;
}

int main()
{
    Node *root;
    root = buildingTree(root);
    int target;
    cin >> target;
    vector<int> ans;
    ans = findPath(root, target);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}
// 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 -1 -1
// Left Node : 1
// Left Node : 2
// Left Node : 4
// right Node : 4
// right Node : 2
// Left Node : 5
// Left Node : 6
// right Node : 6
// right Node : 5
// Left Node : 7
// right Node : 7
// right Node : 1
// Left Node : 3
// right Node : 3
// target - 7
// output-
// 1 2 5 7