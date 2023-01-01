//kth Ancestor

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

    cout << "Enter the data for the left : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for the right : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

Node* solve(Node* root,int &k,int node){
    // Base case
    if(root == NULL)
    {
        return NULL;
    }
    
    if(root->data == node)
    {
        return root;
    }
    
    Node* leftAns = solve(root->left,k,node);
    Node* rightAns = solve(root->right,k,node);
    
    if(leftAns != NULL && rightAns == NULL)
    {
        k--;
        if(k <= 0)
        {
            k=INT_MAX;
            return root;
        }
            return leftAns;
    }
    
    
    if(leftAns == NULL && rightAns != NULL)
    {
        k--;
        if(k <= 0)
        {
            k=INT_MAX;
            return root;
        }
        return rightAns;
    }
    
}

int kthAncestor(Node *root, int k, int node)
{
    Node* ans = solve(root,k,node);
    
    if(root == NULL || ans->data == node)
    {
        return -1;
    }
    else
        return ans->data;
}

int main()
{
    Node *root;
    int k,node;
    cin>>k>>node;
    cout << "Enter the Data : " << endl;
    root = buildTree(root);
    int target;
    cin >> target;
    cout << kthAncestor(root, k,node);

    return 0;
}

// output -
// Enter the Data :
// 1 2 -1 -1 3 -1 -1
// Enter the data for the left : 5
// Enter the data for the left : 4
// Enter the data for the left : 11
// Enter the data for the left : 7
// Enter the data for the right : 7
// Enter the data for the right : 11
// Enter the data for the left : 2
// Enter the data for the right : 2
// Enter the data for the right : 4
// Enter the data for the right : 5
// Enter the data for the left : 8
// Enter the data for the left : 13
// Enter the data for the right : 13
// Enter the data for the right : 8
// Enter the data for the left : 4
// Enter the data for the left : 5
// Enter the data for the right : 5
// Enter the data for the right : 4
// Enter the data for the left : 1
// Enter the data for the right : 1
// target - 22
// count - 3
