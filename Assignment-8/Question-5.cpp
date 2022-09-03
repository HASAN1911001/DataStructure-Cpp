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
 

void zigzag_order(Node* root)
{
    if (root == NULL)
        return;
 
    stack<Node*> currentlevel;
    stack<Node*> nextlevel;
 
    currentlevel.push(root);
   
    bool lefttoright = true;
    while (!currentlevel.empty()) {
 
        Node* temp = currentlevel.top();
        currentlevel.pop();
 
        if (temp) {
 
            cout << temp->data << " ";
 
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
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    cout << "ZigZag Order traversal of binary tree is \n";
 
    zigzag_order(root);
 
    return 0;
}