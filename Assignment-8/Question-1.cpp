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


bool isSame(Node* root1, Node* root2)
{
    //Leves:
    if (root1 == NULL && root2 == NULL)
        return 1;
 
    //Root:
    if (root1 != NULL && root2 != NULL)
    {
        return
        (
            root1->data == root2->data &&
            isSame(root1->left, root2->left) &&
            isSame(root1->right, root2->right)
        );
    }
     
    //Different Structures
    return 0;
}

int main()
{
    Node *root1 = new Node(1);
    Node *root2 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
 
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->left->left = new Node(5);
 
    if(isSame(root1, root2))
        cout << "Both tree are identical.";
    else
        cout << "Trees are not identical.";

    return 0;
}