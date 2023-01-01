// Post order Traversal

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
vector<int> postorderTraversal(Node *&root)
{
    Node *curr = root;
    Node *temp;
    vector<int> postorder;
    if (root == NULL)
    {
        return postorder;
    }
    stack<Node *> st;
    while (curr != NULL || !st.empty())
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            temp = st.top()->right;
            if (temp == NULL)
            {
                temp = st.top();
                st.pop();
                postorder.push_back(temp->data);
                while (!st.empty() && temp == st.top()->right)
                {
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->data);
                }
            }
            else
            {
                curr = temp;
            }
        }
    }
    return postorder;
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
    ans = postorderTraversal(root);

    for (auto res : ans)
    {
        cout << res << " ";
    }

    return 0;
}
// output -
// 4 5 2 6 7 3 1