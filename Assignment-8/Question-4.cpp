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

//Prototype of helper function
bool isMirror(Node* root1, Node* root2);

//This is required function
bool isSymmetric(Node* root)
{
    Node* root1 = root->left;
    Node* root2 = root->right;

    if (root1 == NULL && root2 == NULL)
        return true;
 
    if (root1 && root2 && root1->data == root2->data)
    {
        if(isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left))
            return true;
    }
 

    return false;
}

bool isMirror(Node* root1, Node* root2)
{

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
    root->right = new Node(3);
    root->left->right = new Node(2);
    root->right->right = new Node(3);

    bool mirror =  isSymmetric(root);
    cout<<mirror;

    return 0;
}