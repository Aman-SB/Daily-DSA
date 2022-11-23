// Depth first search
// pre order traversal
// root left right

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
void preOrder(Node* &root){
    // Base Case
    if(root == NULL){
        return;
    }
    //main logic
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
} 
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    preOrder(root);
    return 0;
}
// outptut -
// 1 2 4 5 3 