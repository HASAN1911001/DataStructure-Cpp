#include<bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode* leftChild;
    treeNode* rightChild;

    treeNode(int val)
    {
        data = val;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void spacePrint(int level){
    for(int i=0; i<level; i++) cout<<"   ";
}

void printTree(treeNode* root, int level)
{
    if(root == NULL) return;

    if(root->leftChild == NULL && root->rightChild == NULL)
    {
        cout<<root->data<<endl;
    } 

    else{
        cout<<endl;
        spacePrint(level);
        cout<<"Root: "<<root->data<<endl;
    }

    if(root->leftChild != NULL)
    {
        spacePrint(level);
        cout<<"Left0: ";
        printTree(root->leftChild, level+1);
    }

    if(root->rightChild != NULL)
    {
        spacePrint(level);
        cout<<"Right: ";
        printTree(root->rightChild, level+1);
    }

}


int main()
{
    int n;
    cin>>n;
    treeNode* allNodes[n];

    for(int i=0; i<n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

    for(int i=0; i<n; i++)
    {
        int value, left, right;
        cin>>value>>left>>right;

        if(left>n-1 || right>n-1)
        {
            cout<<"Invalid Index"<<endl;
            break;
        }
        allNodes[i]->data = value;

        if(left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }
        if(right != 1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }

    printTree(allNodes[0], 0);


    return 0;
}