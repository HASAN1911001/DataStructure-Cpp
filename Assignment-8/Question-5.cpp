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
 
// function to print the zigzag traversal
void zizagtraversal(struct Node* root)
{
    // if null then return
    if (!root)
        return;
 
    // declare two stacks
    stack<struct Node*> currentlevel;
    stack<struct Node*> nextlevel;
 
    // push the root
    currentlevel.push(root);
 
    // check if stack is empty  
    bool lefttoright = true;
    while (!currentlevel.empty()) {
 
        // pop out of stack
        struct Node* temp = currentlevel.top();
        currentlevel.pop();
 
        // if not null
        if (temp) {
 
            // print the data in it
            cout << temp->data << " ";
 
            // store data according to current
            // order.
            if (lefttoright) {
                if (temp->left)
                    nextlevel.push(temp->left);
                if (temp->right)
                    nextlevel.push(temp->right);
            }
            else {
                if (temp->right)
                    nextlevel.push(temp->right);
                if (temp->left)
                    nextlevel.push(temp->left);
            }
        }
 
        if (currentlevel.empty()) {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
        }
    }
}
 
 
// driver program to test the above function
int main()
{
    // create tree
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);
    root->right->right = new Node(4);
    cout << "ZigZag Order traversal of binary tree is \n";
 
    zizagtraversal(root);
 
    return 0;
}