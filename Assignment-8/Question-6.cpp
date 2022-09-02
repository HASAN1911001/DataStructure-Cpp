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

void invert(Node* root1, Node* root2)
{
    // If both trees are empty, then they are mirror images
    if (root1 == NULL && root2 == NULL)
        return;
    
    int temp = root1->data;
    root1->data = root2->data;
    root2->data = temp;

    invert(root1->left, root2->right);
    invert(root1->right, root2->left);
 

    return;
}

void printLevelOrder(Node* root)
{
    // Base Case
    if (root == NULL)
        return;
 
    // Create an empty queue for level order traversal
    queue<Node*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false) {
        // Print front of queue and remove it from queue
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
 
        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}

int main()
{
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(9);

    invert(root->left, root->right);
    printLevelOrder(root);
    

    return 0;
}