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
int traverse(Node* root, int* tilt);

int findTilt(Node* root)
{
    int tilt = 0;
    traverse(root, &tilt);
    return tilt;
}

int traverse(Node* root, int* tilt)
{
    if (!root)
        return 0;

    int left = traverse(root->left, tilt);
    int right = traverse(root->right, tilt);

    *tilt += abs(left - right);
 
    return left + right + root->data;
}



int main()
{
    Node* root = NULL;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    cout << "The Tilt of whole tree is " << findTilt(root);
    return 0;
}