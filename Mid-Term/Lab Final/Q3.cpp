#include<bits/stdc++.h>
using namespace std;

string str;
string pal;
int c = 0;

class node
{
    public:
    int data;
    node *left,*right;

    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

// Breadth First Search (BFS)
void BFS(node *root)
{
	queue<node*> q;
	
	q.push(root);
	q.push(NULL);	//	To print each level on new line
		
	while(!q.empty())
	{
		node *f=q.front();
		if(f==NULL)
		{
			cout<<"\n";
			q.pop();
			
			if(!q.empty())
			q.push(NULL);
		}
		
		else
		{
			cout<<f->data<<" ";
			q.pop();
		
		if(f->left)
			{
				q.push(f->left);
			}
		
		if(f->right)
			{
				q.push(f->right);
			}
		
		}
		
	}
}


node *buildtree()
{
    queue<node*> q;
    int x;
    cin>>x;
    node* root=new node(x);
    q.push(root);
    while(!q.empty())
    {
        node* p=q.front();
        q.pop();
        int a,b;
        cin>>a>>b;
        if(a!=-1) p->left=new node(a);
        if(b!=-1) p->right=new node(b);
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void printPathsRecur(node* node, int path[], int pathLen);
void countPalindrom(int ints[], int len);
 
void printPaths(node* node)
{
    int path[1000];
    printPathsRecur(node, path, 0);
}

void printPathsRecur(node* node, int path[], int pathLen)
{
    if (node == NULL)
        return;
     
    /* append this node to the path array */
    path[pathLen] = node->data;
    pathLen++;
     
    /* it's a leaf, so print the path that lead to here */
    if (node->left == NULL && node->right == NULL)
    {
        countPalindrom(path, pathLen);
    }
    else
    {
        /* otherwise try both subtrees */
        printPathsRecur(node->left, path, pathLen);
        printPathsRecur(node->right, path, pathLen);
    }
}
 

void countPalindrom(int ints[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        pal[i] = str[ints[i]];
    }
    
    int flag = 1;
    for(i = 0; i<len/2; i++)
    {
        if(pal[i] != pal[len-1-i]) flag = 0;    

    }
    if(flag == 1) c++;
}

int main()
{
    cin>>str;
    node *root=buildtree();


    printPaths(root);

    cout<<c;
    return 0;
}