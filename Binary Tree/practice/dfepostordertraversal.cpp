// Depth first search
// post order traversal
// left right root

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
void postOrder(Node* &root){
    // Base Case
    if(root == NULL){
        
        return;
    }
    //main logic
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
} 
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    postOrder(root);
    return 0;
}
// output-
// 4 5 2 3 1 