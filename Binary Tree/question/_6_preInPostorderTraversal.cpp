// preorder Inorder Postorder Traversal 


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
void preInPost(Node *&root,vector<int> &pre,vector<int> &in,vector<int> &post)
{
    stack<pair<Node*,int>> st;
    st.push({root,1});

    if(root==NULL)return ;
    while(!st.empty()){
        auto it=st.top();
        st.pop();

        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left != NULL){
                st.push({it.first->left,1});
            }
        }
        else if(it.second == 2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right != NULL){
                st.push({it.first->right,1});
            }
        }
        else
        {
            post.push_back(it.first->data);
        }
    }
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
    vector<int> pre,in,post;
    preInPost(root,pre,in,post);

    for (auto res : pre)
    {
        cout << res << " ";
    }
    cout<<endl;
    for (auto val : in)
    {
        cout << val << " ";
    }
    cout<<endl;
    for (auto it : post)
    {
        cout << it << " ";
    }
    cout<<endl;
    return 0;
}
// pre - 1 2 4 5 3 6 7 
// in - 4 2 5 1 6 3 7
// post - 4 5 2 6 7 3 1
