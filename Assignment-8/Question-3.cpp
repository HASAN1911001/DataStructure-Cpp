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

// Iterative method to find height of Binary Tree
void printReverseLevelOrder(Node* root)
{
    // Base Case
    if (root == NULL)
        return;
 
    // Create an empty queue for level order traversal
    queue<Node*> q;
    stack<int> s;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false) {
        // Print front of queue and remove it from queue
        Node* node = q.front();
        q.pop();
        s.push(node->data);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);

        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 

    }
    // pop all nodes from the stack and print them
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->right = new Node(4);
    root->left->right->left = new Node(5);

    printReverseLevelOrder(root);

    return 0;
}