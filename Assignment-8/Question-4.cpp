#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isMirror(Node* root1, Node* root2)
{
    // If both trees are empty, then they are mirror images
    if (root1 == NULL && root2 == NULL)
        return true;
 
    if (root1 && root2 && root1->data == root2->data)
        return isMirror(root1->left, root2->right)
               && isMirror(root1->right, root2->left);
 

    return false;
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);

    bool mirror = isMirror(root->left, root->right);
    cout<<mirror;

    return 0;
}