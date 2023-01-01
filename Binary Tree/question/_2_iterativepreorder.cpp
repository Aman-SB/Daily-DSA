// Iterative Pre order traversal


#include<bits/stdc++.h>
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

vector<int> preorderTraversal(Node* &root){
    vector<int> preorder;
    if(root == NULL)return preorder;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        preorder.push_back(root->data);
        if(root->right != NULL) 
            st.push(root->right);
        if(root->left != NULL)
            st.push(root->left);
    }
    return preorder;
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
    ans = preorderTraversal(root);

    for (auto res : ans)
    {
        cout << res << " ";
    }

    return 0;
}
// output-
// 1 2 4 5 3 6 7 