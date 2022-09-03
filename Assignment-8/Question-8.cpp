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


 void average_level(Node* root)
{
    //vector<float> res;

    queue<Node*> q;
    q.push(root);
  
    while (!q.empty()) {

        int sum = 0, count = 0;
        queue<Node*> temp;
        while (!q.empty()) {
            Node* n = q.front();
            q.pop();
            sum += n->data;
            count++;
            if (n->left != NULL)
                temp.push(n->left);
            if (n->right != NULL)
                temp.push(n->right);
        }
        q = temp;
        cout << (sum * 1.0 / count) << " ";
    }
}

int main()
{
    /* Let us construct a Binary Tree
        4
       / \
      2   9
     / \   \
    3   5   7 */
  
    Node* root = NULL;
    root = new Node(3);
    root->left = new Node(10);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    average_level(root);
    return 0;
}