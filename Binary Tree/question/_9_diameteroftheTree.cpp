// Diameter of the tree

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
Node* buildTree(Node *root)
{

    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the Data in the left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the Data in the right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

pair<int,int> diameterFast(Node* root){
    // base Case
    if(root == NULL){
        return {0,0};
    }
    
    //Main logic
    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second+right.second+1;

    pair<int,int> ans;
    ans.first = max(op1,max(op2,op3));
    ans.second = max(right.second,left.second)+1;

    return ans;
}
int main()
{
    Node *root = NULL;
    cout << "Enter the Data:";
    root = buildTree(root);
    cout << endl;

    cout<<"Height of the Tree : "<<" ";
    cout<<diameterFast(root).first;
    return 0;
}

// output-
// Enter the Data:1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// Enter the Data in the left 1
// Enter the Data in the left 3
// Enter the Data in the left 7
// Enter the Data in the right 7
// Enter the Data in the right 3
// Enter the Data in the left 11
// Enter the Data in the right 11
// Enter the Data in the right 1
// Enter the Data in the left 5
// Enter the Data in the left 17
// Enter the Data in the right 17
// Enter the Data in the right 5

// Height of the Tree :  5