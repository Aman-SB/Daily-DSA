// Identical Tree

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
Node* buildTree(Node* root){
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data in the left"<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data in the right"<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

bool isSameTree(Node* r1,Node* r2){
    if(r1 == NULL  && r2 ==NULL){
        return true;
    }

    if(r1 == NULL && r2 != NULL){
        return false;
    }

    if(r1 != NULL && r2 == NULL){
        return false;
    }

    bool left = isSameTree(r1->left,r2->left);
    bool right = isSameTree(r1->right,r2->right);

    bool cond = r1->data == r2->data;

    if(left && right && cond){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    Node *root1,*root2;
    cout<<"Enter the data for tree 1 : ";
    root1 = buildTree(root1);
    cout<<"Enter the data for tree 2 : ";
    root2 = buildTree(root2);

    if(isSameTree(root1,root2)){
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
    return 0;
}
// output - 
// Enter the data for tree 1 : 
// 1
// Enter the data in the left1
// 2
// Enter the data in the left2
// -1
// Enter the data in the right2
// -1
// Enter the data in the right1
// 3
// Enter the data in the left3
// -1
// Enter the data in the right3
// -1
// Enter the data for tree 2 : 
// 1
// Enter the data in the left1
// 2
// Enter the data in the left2
// -1
// Enter the data in the right2
// -1
// Enter the data in the right1
// 3
// Enter the data in the left3
// -1
// Enter the data in the right3
// -1

// TRUE