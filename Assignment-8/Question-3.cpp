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

void level_order_reverse(Node* root)
{
    if (root == NULL)
        return;
 
    queue<Node*> q;
    stack<int> s;

    q.push(root);
 
    while (!q.empty()) {

        Node* node = q.front();
        q.pop();
        s.push(node->data);
 
//First Enque from right chield and then Enque from left chield
        if (node->right != NULL)
            q.push(node->right);

        if (node->left != NULL)
            q.push(node->left);
 

    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    level_order_reverse(root);

    return 0;
}