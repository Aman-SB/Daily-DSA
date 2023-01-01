// Burning tree

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

Node *creatingMapping(Node *root, map<Node *, Node *> &mp, int target)
{
    Node *res = NULL;
    queue<Node *> q;
    q.push(root);
    mp[root] = NULL;
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front->data == target)
        {
            res = front;
        }

        if (front->left)
        {
            mp[front->left] = front;
            q.push(front->left);
        }

        if (front->right)
        {
            mp[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}

int burningTreeTime(Node *root, map<Node *, Node *> &mp)
{
    map<Node *, bool> visited;
    queue<Node *> q;
    q.push(root);
    visited[root] = 1;
    int ans = 0;
    while (!q.empty())
    {
        bool flag = 0;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *front = q.front();
            q.pop();

            Node *parent = mp[front];
            if (front->left && !visited[front->left])
            {
                visited[front->left] = 1;
                q.push(front->left);
                flag = 1;
            }

            if (front->right && !visited[front->right])
            {
                visited[front->right] = 1;
                q.push(front->right);
                flag = 1;
            }

            if (parent && !visited[parent])
            {
                visited[parent] = 1;
                q.push(parent);
                flag = 1;
            }
        }
        if (flag == 1)
        {
            ans++;
        }
    }
    return ans;
}

int burningTree(Node *root, int target)
{
    map<Node *, Node *> mp;
    // creating mapping
    Node *targetNode = creatingMapping(root, mp, target);
    int ans = burningTreeTime(targetNode, mp);
    return ans;
}

int main()
{
    Node *root;
    cout << "Enter the Data : " << endl;
    root = buildTree(root);
    int target;
    cin >> target;
    cout << burningTree(root, target);

    return 0;
}

// output -
// Enter the Data :
// 1 2 -1 -1 3 -1 -1
// Enter the data for the left : 1
// Enter the data for the left : 2
// Enter the data for the right : 2
// Enter the data for the right : 1
// Enter the data for the left : 3
// Enter the data for the right : 3
// target - 3
// output-
// 2
