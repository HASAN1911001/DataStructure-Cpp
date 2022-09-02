// C++ code to implement the above approach
 
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
 
// Initialize a vector
vector<int> ans;
 
// Traversing the tree by using inorder
// traversal
void inorderTraversal(Node* root)
{
    if (root != NULL) {
        inorderTraversal(root->left);
        ans.push_back(root->data);
        inorderTraversal(root->right);
    }
}
 
// Function to find the second minimum element
int findSecondMinimumValue(Node* root)
{
    inorderTraversal(root);
 
    // Sorting the array element
    sort(ans.begin(), ans.end());
 
    // Traversing and array and checking
    // the second minimum element
    for (int i = 0; i < ans.size() - 1; i++)
        if (ans[i] != ans[i + 1])
            return ans[i + 1];
    return -1;
}
 
// Driver code
int main()
{
    // Creating the tree
    // 2
    //        / \
    // 2   5
    //          / \
    // 5   7
    struct Node* root = new Node(2);
    root->left = new Node(2);
    root->right = new Node(5);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
 
    // Function call
    int SecondMinimumValue
        = findSecondMinimumValue(root);
    cout << SecondMinimumValue << endl;
    return 0;
}