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

int traverse(Node* root, int* tilt)
{
    if (!root)
        return 0;
 
    // Compute tilts of left and right subtrees
    // and find sums of left and right subtrees
    int left = traverse(root->left, tilt);
    int right = traverse(root->right, tilt);
 
    // Add current tilt to overall
    *tilt += abs(left - right);
 
    // Returns sum of nodes under current tree
    return left + right + root->data;
}

int Tilt(Node* root)
{
    int tilt = 0;
    traverse(root, &tilt);
    return tilt;
}

int main()
{
    Node* root = NULL;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    cout << "The Tilt of whole tree is " << Tilt(root);
    return 0;
}