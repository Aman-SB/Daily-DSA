// Iterative Post Order
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

vector<int> inorderTraversal(Node *&root)
{
    stack<Node *> st;
    Node *head = root;
    vector<int> inorder;
    while (true)
    {
        if (head != NULL)
        {
            st.push(head);
            head = head->left;
        }
        else
        {
            if (st.empty() == true)
                break;
            head = st.top();
            st.pop();
            inorder.push_back(head->data);
            head = head->right;
        }
    }
    return inorder;
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
    vector<int> ans;
    ans = inorderTraversal(root);

    for (auto res : ans)
    {
        cout << res << " ";
    }

    return 0;
}
// output-
// 4 2 5 1 6 3 7