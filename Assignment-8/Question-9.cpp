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
bool is_unival(Node* root)
{
 
    if (root == NULL) return true;

    if (root->left != NULL && root->data != root->left->data) return false;
 
    if (root->right != NULL && root->data != root->right->data) return false;
 
    if(is_unival(root->left) && is_unival(root->right))   return true;

    return false;
    
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
 
    if (is_unival(root) == 1) {
 
        cout << "YES";
    }
    else {
 
        cout << "NO";
    }
    return 0;
}