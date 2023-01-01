// Iterative post order traversal
T.C - O(N^2)
S.C - O(N^2)

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
vector<int> postorderTraversal(Node* &root){
    vector<int> postorder;
    if(root == NULL)return postorder;
    stack<Node*> st1,st2;
    st1.push(root);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left != NULL)
            st1.push(root->left);
        if(root->right != NULL)
            st1.push(root->right);
    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
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
// output-
// 4 5 2 6 7 3 1 