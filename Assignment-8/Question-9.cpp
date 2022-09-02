#include <bits/stdc++.h>
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
 
// Function to check If the tree
// is uni-valued or not
bool isUnivalTree(Node* root)
{
 
    // If tree is an empty tree
    if (!root) {
        return true;
    }
 
    // If all the nodes on the left subtree
    // have not value equal to root node
    if (root->left != NULL
        && root->data != root->left->data)
        return false;
 
    // If all the nodes on the left subtree
    // have not value equal to root node
    if (root->right != NULL
        && root->data != root->right->data)
        return false;
 
    // Recurse on left and right subtree
    return isUnivalTree(root->left)
           && isUnivalTree(root->right);
}
 
// Driver Code
int main()
{
 
    /*
                1
              /   \
             1     1
           /  \     \
          1    1     1
    */
    Node* root = new Node(1);
    root->left = new Node(1);
    root->right = new Node(1);
    root->left->left = new Node(1);
    root->left->right = new Node(1);
    root->right->right = new Node(1);
 
    if (isUnivalTree(root) == 1) {
 
        cout << "YES";
    }
    else {
 
        cout << "NO";
    }
    return 0;
}